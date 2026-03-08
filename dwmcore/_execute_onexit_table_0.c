/*
 * XREFs of _execute_onexit_table_0 @ 0x18010F552
 * Callers:
 *     __scrt_dllmain_uninitialize_c @ 0x18010E6E4 (__scrt_dllmain_uninitialize_c.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl execute_onexit_table_0(_onexit_table_t *Table)
{
  return _execute_onexit_table(Table);
}
