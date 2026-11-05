#include "libft/libft.h"
#include <limits.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	/* PART 1: LIBC FUNCTIONS */

	// ft_isalpha
	// printf("ft_isalpha('a') = %d\n", ft_isalpha('a'));

	// ft_isdigit
	// printf("ft_isdigit('7') = %d\n", ft_isdigit('7'));

	// ft_isalnum
	// printf("ft_isalnum('A') = %d\n", ft_isalnum('A'));

	// ft_isascii
	// printf("ft_isascii(127) = %d\n", ft_isascii(127));

	// ft_isprint
	// printf("ft_isprint(' ') = %d\n", ft_isprint(' '));

	// ft_strlen
	// printf("ft_strlen(\"Libft\") = %zu\n", ft_strlen("Libft"));

	// ft_memset
	// {
	// 	char buffer[6];
	// 	ft_memset(buffer, 'A', 5);
	// 	buffer[5] = '\0';
	// 	printf("ft_memset result = %s\n", buffer);
	// }

	// ft_bzero
	// {
	// 	char buffer[4] = "ABC";
	// 	ft_bzero(buffer, 2);
	// 	printf("ft_bzero first bytes = %d, %d\n",
	// 		(unsigned char)buffer[0], (unsigned char)buffer[1]);
	// }

	// ft_memcpy
	// {
	// 	char buffer[6];
	// 	ft_memcpy(buffer, "hello", 6);
	// 	printf("ft_memcpy result = %s\n", buffer);
	// }

	// ft_memmove
	// {
	// 	char buffer[] = "abcdef";
	// 	ft_memmove(buffer + 1, buffer, 5);
	// 	printf("ft_memmove result = %s\n", buffer);
	// }

	// ft_strlcpy
	// {
	// 	char buffer[4];
	// 	size_t length;
	// 	length = ft_strlcpy(buffer, "world", sizeof(buffer));
	// 	printf("ft_strlcpy length = %zu, buffer = %s\n", length, buffer);
	// }

	// ft_strlcat
	// {
	// 	char buffer[8] = "Hi";
	// 	size_t length;
	// 	length = ft_strlcat(buffer, "!", sizeof(buffer));
	// 	printf("ft_strlcat length = %zu, buffer = %s\n", length, buffer);
	// }

	// ft_toupper
	// printf("ft_toupper('a') = %c\n", ft_toupper('a'));

	// ft_tolower
	// printf("ft_tolower('A') = %c\n", ft_tolower('A'));

	// ft_strchr
	// printf("ft_strchr result = %s\n", ft_strchr("banana", 'n'));

	// ft_strrchr
	// printf("ft_strrchr result = %s\n", ft_strrchr("banana", 'n'));

	// ft_strncmp
	// printf("ft_strncmp result = %d\n", ft_strncmp("abc", "abd", 3));

	// ft_memchr
	// {
	// 	char data[4] = {'A', '\0', 'B', '\0'};
	// 	char *found;
	// 	found = ft_memchr(data, '\0', sizeof(data));
	// 	printf("ft_memchr offset = %ld\n", (long)(found - data));
	// }

	// ft_memcmp
	// printf("ft_memcmp result = %d\n", ft_memcmp("abc", "abd", 3));

	// ft_strnstr
	// printf("ft_strnstr result = %s\n",
	// 	ft_strnstr("libft functions", "func", 15));

	// ft_atoi
	// printf("ft_atoi result = %d\n", ft_atoi("-42"));

	// ft_calloc
	// {
	// 	int *array;
	// 	array = ft_calloc(3, sizeof(int));
	// 	if (array)
	// 	{
	// 		printf("ft_calloc values = %d, %d, %d\n",
	// 			array[0], array[1], array[2]);
	// 		free(array);
	// 	}
	// }

	// ft_strdup
	// {
	// 	char *copy;
	// 	copy = ft_strdup("Libft");
	// 	printf("ft_strdup result = %s\n", copy);
	// 	free(copy);
	// }

	/* PART 2: ADDITIONAL FUNCTIONS */

	// ft_substr
	// {
	// 	char *result;
	// 	result = ft_substr("Libft", 2, 3);
	// 	printf("ft_substr result = %s\n", result);
	// 	free(result);
	// }

	// ft_strjoin
	// {
	// 	char *result;
	// 	result = ft_strjoin("42", "Libft");
	// 	printf("ft_strjoin result = %s\n", result);
	// 	free(result);
	// }

	// ft_strtrim
	// {
	// 	char *result;
	// 	result = ft_strtrim("xxhelloX", "xX");
	// 	printf("ft_strtrim result = %s\n", result);
	// 	free(result);
	// }

	// ft_split
	// {
	// 	char **words;
	// 	words = ft_split("one,two", ',');
	// 	if (words)
	// 	{
	// 		printf("ft_split words = %s, %s\n", words[0], words[1]);
	// 		free(words[0]);
	// 		free(words[1]);
	// 		free(words);
	// 	}
	// }

	// ft_itoa
	// {
	// 	char *result;
	// 	result = ft_itoa(INT_MIN);
	// 	printf("ft_itoa result = %s\n", result);
	// 	free(result);
	// }

	// ft_strmapi
	// printf("ft_strmapi with NULL callback = %p\n",
	// 	(void *)ft_strmapi("abc", NULL));

	// ft_striteri
	// {
	// 	char text[] = "abc";
	// 	ft_striteri(text, NULL);
	// 	printf("ft_striteri result = %s\n", text);
	// }

	// ft_putchar_fd
	// ft_putchar_fd('A', STDOUT_FILENO);
	// printf("\n");

	// ft_putstr_fd
	// ft_putstr_fd("Hello", STDOUT_FILENO);
	// printf("\n");

	// ft_putendl_fd
	// ft_putendl_fd("Hello", STDOUT_FILENO);

	// ft_putnbr_fd
	// ft_putnbr_fd(INT_MIN, STDOUT_FILENO);
	// printf("\n");

	/* PART 3: LINKED LIST FUNCTIONS */

	// ft_lstnew
	// {
	// 	t_list *node;
	// 	node = ft_lstnew(NULL);
	// 	printf("ft_lstnew created node = %d\n", node != NULL);
	// 	if (node)
	// 		ft_lstdelone(node, free);
	// }

	// ft_lstadd_front
	// {
	// 	t_list first;
	// 	t_list second;
	// 	t_list *head;
	// 	first.content = NULL;
	// 	first.next = NULL;
	// 	second.content = NULL;
	// 	second.next = NULL;
	// 	head = &second;
	// 	ft_lstadd_front(&head, &first);
	// 	printf("ft_lstadd_front new head = %d\n", head == &first);
	// }

	// ft_lstsize
	// {
	// 	t_list first;
	// 	t_list second;
	// 	first.content = NULL;
	// 	first.next = &second;
	// 	second.content = NULL;
	// 	second.next = NULL;
	// 	printf("ft_lstsize result = %u\n", ft_lstsize(&first));
	// }

	// ft_lstlast
	// {
	// 	t_list first;
	// 	t_list last;
	// 	first.content = NULL;
	// 	first.next = &last;
	// 	last.content = NULL;
	// 	last.next = NULL;
	// 	printf("ft_lstlast returns last node = %d\n",
	// 		ft_lstlast(&first) == &last);
	// }

	// ft_lstadd_back
	// {
	// 	t_list first;
	// 	t_list last;
	// 	t_list *head;
	// 	first.content = NULL;
	// 	first.next = NULL;
	// 	last.content = NULL;
	// 	last.next = NULL;
	// 	head = &first;
	// 	ft_lstadd_back(&head, &last);
	// 	printf("ft_lstadd_back appended node = %d\n",
	// 		ft_lstlast(head) == &last);
	// }

	// ft_lstdelone
	// {
	// 	t_list *node;
	// 	node = ft_lstnew(NULL);
	// 	ft_lstdelone(node, free);
	// 	printf("ft_lstdelone deleted one node\n");
	// }

	// ft_lstclear
	// {
	// 	t_list *head;
	// 	head = ft_lstnew(NULL);
	// 	if (head)
	// 		head->next = ft_lstnew(NULL);
	// 	ft_lstclear(&head, free);
	// 	printf("ft_lstclear head is NULL = %d\n", head == NULL);
	// }

	// ft_lstiter
	// {
	// 	t_list *node;
	// 	node = ft_lstnew(ft_strdup("content"));
	// 	ft_lstiter(node, free);
	// 	printf("ft_lstiter called the callback\n");
	// 	if (node)
	// 	{
	// 		node->content = NULL;
	// 		ft_lstdelone(node, free);
	// 	}
	// }

	// ft_lstmap
	// printf("ft_lstmap result = %p\n",
	// 	(void *)ft_lstmap(NULL, NULL, free));

	return (0);
}
