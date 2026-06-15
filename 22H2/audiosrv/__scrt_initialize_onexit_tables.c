/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x180069F1C
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x180069DA8 (__scrt_dllmain_before_initialize_c.c)
 *     ?__scrt_initialize_thread_safe_statics@@YAHXZ @ 0x18006A240 (-__scrt_initialize_thread_safe_statics@@YAHXZ.c)
 * Callees:
 *     __scrt_fastfail @ 0x18006A6A0 (__scrt_fastfail.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x18006AA1C (-__uncaught_exception@@YA_NXZ.c)
 *     _o__initialize_onexit_table @ 0x18006AB02 (_o__initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  int v2; // eax

  if ( !byte_18019E190 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x180069FCBLL);
    }
    LOBYTE(v2) = __uncaught_exception();
    if ( !v2 || a1 )
    {
      qword_18019E160 = _security_cookie ^ __ROR8__(-1LL, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
      qword_18019E168 = qword_18019E160;
      qword_18019E170 = qword_18019E160;
      qword_18019E178 = qword_18019E160;
      qword_18019E180 = qword_18019E160;
      qword_18019E188 = qword_18019E160;
    }
    else if ( (unsigned int)o__initialize_onexit_table(&qword_18019E160)
           || (unsigned int)o__initialize_onexit_table(&qword_18019E178) )
    {
      return 0;
    }
    byte_18019E190 = 1;
  }
  return 1;
}
