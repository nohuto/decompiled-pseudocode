/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x18008FF78
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x18008FE04 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_thread_safe_statics @ 0x180090F20 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     __scrt_fastfail @ 0x1800902FC (__scrt_fastfail.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x1800906C0 (__scrt_is_ucrt_dll_in_use.c)
 *     _initialize_onexit_table @ 0x1800908AE (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_18064F5D0 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x180090027LL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      Table._first = (_PVFV *)(_security_cookie ^ __ROR8__(-1LL, 64 - ((unsigned __int8)_security_cookie & 0x3Fu)));
      Table._last = Table._first;
      Table._end = Table._first;
      stru_18064F5B8._first = Table._first;
      stru_18064F5B8._last = Table._first;
      stru_18064F5B8._end = Table._first;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_18064F5B8) )
    {
      return 0;
    }
    byte_18064F5D0 = 1;
  }
  return 1;
}
