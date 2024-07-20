#pragma once
#include "cls_doubly_linked_list.h"

template <class class_type> class cls_queue
{
protected:
	cls_doubly_linked_list <class_type> queue;

public:
	void push(class_type data)
	{
		queue.insert_at_end(data);
	}

	void print()
	{
		queue.print_list();
	}

	int size()
	{
		return queue.size();
	}

	bool is_empty()
	{
		return queue.is_empty();
	}

	class_type front()
	{
		return queue.at(0);
	}

	class_type back()
	{
		return queue.at(size() - 1);
	}

	void pop()
	{
		queue.delete_first_node();
	}

	class_type at(int index)
	{
		return queue.at(index);
	}

	void reverse()
	{
		queue.reverse();
	}

	void update(int index, class_type update_data)
	{
		queue.update(index, update_data);
	}

	void insert_after(int prev_index, class_type inserted_node_data)
	{
		queue.insert_after(prev_index, inserted_node_data);
	}

	void insert_at_front(class_type inserted_node_data)
	{
		queue.insert_at_beginning(inserted_node_data);
	}

	void insert_at_back(class_type inserted_node_data)
	{
		queue.insert_at_end(inserted_node_data);
	}

	void clear()
	{
		queue.clear();
	}
};