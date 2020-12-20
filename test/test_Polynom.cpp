#include "Polynom.h"
#include "../gtest/gtest.h"


TEST(Polynom, can_create_polynom)
{
	ASSERT_NO_THROW(TPolynomial P1);
}

TEST(Polynom, can_copy_polynom)
{
	TPolynomial P1;
	ASSERT_NO_THROW(TPolynomial P2(P1));
}

TEST(Polynom, can_operator_plus_equally)
{
	TMonom a(new double[3]{ 1, 2, 3 }, 3, 1);
	TPolynomial P1;
	ASSERT_NO_THROW(P1 += a);
}

TEST(Polynom, can_multiplicate)
{
	TMonom a(new double[3]{ 1, 2, 3 }, 3, 1);
	TMonom b(new double[3]{ 3, 2, 1 }, 3, 1);
	TPolynomial P1, P2, P3;
	P1 += a;
	P2 += b;

	ASSERT_NO_THROW(P1 * P2);
}

TEST(Polynom, can_add)
{
	TMonom a(new double[3]{ 1, 2, 3 }, 3, 1);
	TMonom b(new double[3]{ 3, 2, 1 }, 3, 1);
	TPolynomial P1, P2;
	P1 += a;
	P2 += b;

	ASSERT_NO_THROW(P2 + P1);
}

TEST(Polynom, can_subtract)
{
	TMonom a(new double[3]{ 1, 2, 3 }, 3, 1);
	TMonom b(new double[3]{ 3, 2, 1 }, 3, 1);
	TPolynomial P1, P2;
	P1 += a;
	P2 += b;

	ASSERT_NO_THROW(P2 - P1);
}

TEST(Polynom, can_load_to_file)
{
	TMonom a(new double[1]{ 3 }, 1, 1);
	TMonom b(new double[1]{ 1 }, 1, 1);
	TPolynomial P1;
	P1 += a;
	P1 += b;
	ASSERT_NO_THROW(P1.LoadToFile());
}