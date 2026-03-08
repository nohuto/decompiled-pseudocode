/*
 * XREFs of ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01C8DCC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C1278 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C010A9B4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C012BEC0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x1C01BD8AC (-DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ.c)
 */

__int64 __fastcall SetHighContrastWorker(struct tagINTERNALSETHIGHCONTRAST *a1, int a2, unsigned int *a3)
{
  const void *v7; // rdx
  size_t v8; // rdi
  unsigned __int64 v9; // rdi
  __int64 v10; // r15
  unsigned int v11; // edi
  int v12; // r14d
  int v13; // eax
  unsigned __int64 v14; // rdx
  __int128 v15; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-198h]
  unsigned __int16 v17[40]; // [rsp+50h] [rbp-188h] BYREF
  size_t v18[32]; // [rsp+A0h] [rbp-138h] BYREF

  if ( *((_WORD *)a1 + 4) >= 0x100u )
    return 0LL;
  v7 = (const void *)*((_QWORD *)a1 + 2);
  v8 = *((unsigned __int16 *)a1 + 4);
  if ( v7 )
    memmove(v18, v7, v8);
  v9 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v9 >= 0x100 )
    _report_rangecheckfailure();
  *(_WORD *)((char *)v18 + v9) = 0;
  if ( a2 )
  {
    v15 = 0LL;
    v16 = 0LL;
    v10 = CreateProfileUserName(&v15);
    RtlStringCchPrintfW(v17, 0x28uLL, (size_t *)L"%d", *((unsigned int *)a1 + 1));
    v11 = FastWriteProfileStringW(v10, 29LL, L"Flags", v17);
    *a3 = v11;
    if ( *((_QWORD *)a1 + 2) )
      v11 &= FastWriteProfileStringW(v10, 29LL, L"High Contrast Scheme", v18);
    FreeProfileUserName(v10, &v15);
  }
  else
  {
    *a3 = 1;
    v11 = 0;
  }
  if ( *a3 )
  {
    v12 = gHighContrast[1];
    if ( *((_QWORD *)a1 + 2) )
      RtlStringCchCopyW(gHighContrastDefaultScheme, 0x80uLL, v18);
    gHighContrast[1] = *((_DWORD *)a1 + 1) & 0xFFFFEFFF;
    SetAccessEnabledFlag();
    v13 = *((_DWORD *)a1 + 1);
    if ( (v13 & 0x1000) == 0 )
    {
      if ( (v13 & 1) != 0 )
      {
        if ( (v12 & 1) != 0 )
          v14 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 14;
        else
          v14 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 12;
      }
      else
      {
        v14 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 13;
      }
      PostWinlogonMessage(1026LL, v14);
    }
    DwmNotifyWindowsMarginsChangeByTheme();
  }
  return v11;
}
