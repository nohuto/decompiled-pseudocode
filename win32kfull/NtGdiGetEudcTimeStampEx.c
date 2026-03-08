/*
 * XREFs of NtGdiGetEudcTimeStampEx @ 0x1C02A3620
 * Callers:
 *     <none>
 * Callees:
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C0115FA0 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C012BEC0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtGdiGetEudcTimeStampEx(char *Src, unsigned int a2, int a3)
{
  __int64 v4; // r12
  __int64 v6; // r14
  unsigned __int64 v8; // rbx
  wchar_t Str1[40]; // [rsp+30h] [rbp-88h] BYREF

  v4 = a2;
  v6 = *(_QWORD *)(SGDGetSessionState(Src) + 32);
  if ( a3 )
    return *(unsigned int *)(v6 + 13896);
  if ( !Src || !(_DWORD)v4 )
    return *(unsigned int *)(v6 + 13900);
  if ( (unsigned int)v4 > 0x20 )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v8 = 2 * v4;
    if ( 2 * v4 )
    {
      if ( ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v8] > MmUserProbeAddress || &Src[v8] < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(Str1, Src, 2 * v4);
    if ( v8 >= 0x42 )
      _report_rangecheckfailure();
    Str1[v4] = 0;
  }
  return 0LL;
}
