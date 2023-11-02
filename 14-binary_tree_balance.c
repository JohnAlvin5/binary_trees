#include "binary_trees.h"

/**
 * binary_tree_balance - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL, else return height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		int left_ht = 0, right_ht = 0;

		if (tree->left)
			left_ht = 1 + binary_tree_balance(tree->left);

		if (tree->right)
			right_ht = 1 + binary_tree_balance(tree->right);

		return (left_ht - right_ht);
	}

	return (0);
}
