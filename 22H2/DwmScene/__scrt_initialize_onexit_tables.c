/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x18011E36C
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x18011E224 (__scrt_dllmain_before_initialize_c.c)
 *     ?__scrt_initialize_thread_safe_statics@@YAHXZ @ 0x18011EB90 (-__scrt_initialize_thread_safe_statics@@YAHXZ.c)
 * Callees:
 *     _o__initialize_onexit_table @ 0x18011E023 (_o__initialize_onexit_table.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x18011F25C (-__uncaught_exception@@YA_NXZ.c)
 *     __scrt_fastfail @ 0x18011F270 (__scrt_fastfail.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  int v2; // eax

  if ( !byte_18021ACE0 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      __debugbreak();
    }
    LOBYTE(v2) = __uncaught_exception();
    if ( !v2 || a1 )
    {
      qword_18021ACB0 = _security_cookie ^ __ROR8__(-1LL, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
      qword_18021ACB8 = qword_18021ACB0;
      qword_18021ACC0 = qword_18021ACB0;
      qword_18021ACC8 = qword_18021ACB0;
      qword_18021ACD0 = qword_18021ACB0;
      qword_18021ACD8 = qword_18021ACB0;
    }
    else if ( (unsigned int)o__initialize_onexit_table() || (unsigned int)o__initialize_onexit_table() )
    {
      return 0;
    }
    byte_18021ACE0 = 1;
  }
  return 1;
}
