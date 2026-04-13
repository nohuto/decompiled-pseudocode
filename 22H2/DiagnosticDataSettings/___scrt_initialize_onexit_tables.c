/*
 * XREFs of ___scrt_initialize_onexit_tables @ 0x100044E0
 * Callers:
 *     ___scrt_dllmain_before_initialize_c @ 0x10004405 (___scrt_dllmain_before_initialize_c.c)
 * Callees:
 *     ___scrt_fastfail @ 0x10004661 (___scrt_fastfail.c)
 *     ___scrt_is_ucrt_dll_in_use @ 0x10004B7E (___scrt_is_ucrt_dll_in_use.c)
 *     __o__initialize_onexit_table @ 0x10004BBA (__o__initialize_onexit_table.c)
 */

char __cdecl __scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( byte_100050C0 )
    return 1;
  if ( a1 > 1 )
  {
    __scrt_fastfail(5);
    __debugbreak();
  }
  if ( !__scrt_is_ucrt_dll_in_use() || a1 )
  {
    Table._first = (_PVFV *)(__security_cookie ^ __ROR4__(-1, 32 - (__security_cookie & 0x1F)));
    Table._last = Table._first;
    Table._end = Table._first;
    dword_100050B4 = (int)Table._first;
    dword_100050B8 = (int)Table._first;
    dword_100050BC = (int)Table._first;
  }
  else if ( _o__initialize_onexit_table(&Table) || _o__initialize_onexit_table(&dword_100050B4) )
  {
    return 0;
  }
  byte_100050C0 = 1;
  return 1;
}
