#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (check_recursive(tree));
}

/**
 * check_recursive - checks if full recursive
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0, otherwise 1 if tree NULL
 */
int check_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
			(tree->left == NULL && tree->right != NULL) ||
			check_recursive(tree->left) == 0 ||
			check_recursive(tree->right) == 0)
			return (0);
	}

	return (1);
}
