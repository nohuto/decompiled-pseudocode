/*
 * XREFs of _register_onexit_function_0 @ 0x18010F546
 * Callers:
 *     _onexit @ 0x18010E918 (_onexit.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl register_onexit_function_0(_onexit_table_t *Table, _onexit_t Function)
{
  return _register_onexit_function(Table, Function);
}
