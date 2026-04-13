/*
 * XREFs of __o__execute_onexit_table @ 0x10004BAE
 * Callers:
 *     ___scrt_dllmain_uninitialize_c @ 0x10004475 (___scrt_dllmain_uninitialize_c.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl _o__execute_onexit_table(_onexit_table_t *Table)
{
  return __execute_onexit_table(Table);
}
