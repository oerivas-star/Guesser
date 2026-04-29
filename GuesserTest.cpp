/**
 * Unit Tests for the class
**/

#include <gtest/gtest.h>
#include "Guesser.h"

class GuesserTest : public ::testing::Test
{
	protected:
		GuesserTest(){} //constructor runs before each test
		virtual ~GuesserTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(GuesserTest, distance)
{
  Guesser object(guess);
  ASSERT_EQ( guess = "aaaaaaaaaa", length_diff = m_secret.length() );
  Guesser object(guess);
  ASSERT_EQ( guess = "aaaaAaaaaaaaaaaaaaaaaa" , length_diff );
}

TEST(GuesserTest, Guesser)
{
  Guesser object(secret);
  ASSERT_EQ( "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", secret.substr(0, 32) );
  Guesser object(secret);
  ASSERT_EQ( "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", m_secret );
  Guesser object(secret);
  ASSERT_EQ( "aaaaaaa", m_secret );
  ASSERT_EQ( "aaaaaaa", m_locked = true );
}

TEST(GuesserTest, match)
{
  Guesser object(guess);
  ASSERT_EQ( m_remaining = 0, false );
  Guesser object(guess);
  ASSERT_EQ( m_remaining = 0 && m_locked = false, m_remaining);
}
