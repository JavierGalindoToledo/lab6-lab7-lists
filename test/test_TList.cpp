#include "TList.h"
#include <gtest.h>

TEST(TList, can_create_list)
{
	ASSERT_NO_THROW(TList<int> temp);
}

TEST(TList, can_copy_list)
{
	TList<int> temp;
	ASSERT_NO_THROW(TList<int> temp2(temp));
}

TEST(TList, can_assign_list)
{
	TList<int> temp;
	ASSERT_NO_THROW(TList<int> temp2 = temp);
}

TEST(TList, can_insert_elem_in_first_list)
{
	TList<int> temp;
	ASSERT_NO_THROW(temp.InsFirst(10));
}

TEST(TList, can_insert_elem_in_last_list)
{
	TList<int> temp;
	ASSERT_NO_THROW(temp.InsLast(10));
}

TEST(TList, check_is_full)
{
	TList<int> temp;

	EXPECT_EQ(temp.IsFull(), false);
}

TEST(TList, check_is_empty)
{
	TList<int> temp;

	EXPECT_EQ(temp.IsEmpty(), true);
}

TEST(TList, can_get_elem_first)
{
	TList<int> temp;
	temp.InsFirst(10);
	ASSERT_NO_THROW(temp.GetFirst());
}

TEST(TList, can_get_elem_last)
{
	TList<int> temp;
	temp.InsFirst(10);
	temp.InsLast(20);
	ASSERT_NO_THROW(temp.GetLast());
}

TEST(TList, can_del_elem_first)
{
	TList<int> temp;
	temp.InsFirst(10);
	temp.InsLast(20);
	ASSERT_NO_THROW(temp.DelFirst());
}

TEST(TList, can_del_elem_last)
{
	TList<int> temp;
	temp.InsFirst(10);
	temp.InsLast(20);
	ASSERT_NO_THROW(temp.DelLast());
}

TEST(TList, can_get_count)
{
	TList<int> temp;
	temp.InsFirst(10);
	temp.InsLast(20);
	ASSERT_NO_THROW(temp.GetCount());
}

TEST(TListElem, can_get_data_listelem)
{
	TListElem<int> temp(10);

	EXPECT_EQ(temp.GetData(), 10);
}

TEST(TListElem, can_get_next_listelem)
{
	TListElem<int> temp(10);

	ASSERT_NO_THROW(temp.GetNext());
}

TEST(TListElem, can_get_prev_listelem)
{
	TListElem<int> temp(10);

	ASSERT_NO_THROW(temp.GetPrev());
}

TEST(TListElem, can_set_data_listelem)
{
	TListElem<int> temp(10);

	ASSERT_NO_THROW(temp.SetData(20));
}