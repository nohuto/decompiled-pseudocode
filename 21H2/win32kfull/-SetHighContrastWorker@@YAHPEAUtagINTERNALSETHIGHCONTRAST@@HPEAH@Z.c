/*
 * XREFs of ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D26C0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002393C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00D0F08 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C01593E0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x1C01E1F08 (-DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ.c)
 */

__int64 __fastcall SetHighContrastWorker(struct tagINTERNALSETHIGHCONTRAST *a1, int a2, unsigned int *a3, __int64 a4)
{
  __int64 v7; // rsi
  const void *v9; // rdx
  __int64 v10; // r15
  unsigned int v11; // esi
  __int64 v12; // r11
  int v13; // r14d
  int v14; // eax
  unsigned __int64 v15; // rdx
  int v16; // [rsp+30h] [rbp-1C8h]
  __int128 v17; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-198h]
  unsigned __int16 v19[40]; // [rsp+70h] [rbp-188h] BYREF
  char v20[256]; // [rsp+C0h] [rbp-138h] BYREF

  v7 = *((unsigned __int16 *)a1 + 4);
  if ( (unsigned __int16)v7 >= 0x100u )
    return 0LL;
  v9 = (const void *)*((_QWORD *)a1 + 2);
  if ( v9 )
    memmove(v20, v9, *((unsigned __int16 *)a1 + 4));
  if ( (v7 & 0xFFFFFFFFFFFFFFFEuLL) >= 0x100 )
    _report_rangecheckfailure();
  *(_WORD *)&v20[v7 & 0xFFFFFFFFFFFFFFFEuLL] = 0;
  if ( a2 )
  {
    v17 = 0LL;
    v18 = 0LL;
    v10 = CreateProfileUserName(&v17, v9, a3, a4);
    RtlStringCchPrintfW(v19, 0x28uLL, (size_t *)L"%d", *((unsigned int *)a1 + 1));
    v11 = FastWriteProfileStringW(v10, 29LL, L"Flags", v19);
    *a3 = v11;
    if ( *((_QWORD *)a1 + 2) )
      v11 &= FastWriteProfileStringW(v10, 29LL, L"High Contrast Scheme", v20);
    FreeProfileUserName(v10, &v17);
  }
  else
  {
    *a3 = 1;
    v11 = 0;
  }
  if ( *a3 )
  {
    v12 = *(_QWORD *)gHighContrast;
    v13 = gHighContrast[1];
    if ( *((_QWORD *)a1 + 2) )
      RtlStringCchCopyW((char *)gHighContrastDefaultScheme, 128LL, v20);
    *(_DWORD *)(v12 + 4) = *((_DWORD *)a1 + 1) & 0xFFFFEFFF;
    SetAccessEnabledFlag();
    v14 = *((_DWORD *)a1 + 1);
    if ( (v14 & 0x1000) == 0 )
    {
      if ( (v14 & 1) != 0 )
      {
        if ( (v13 & 1) != 0 )
          v15 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 14;
        else
          v15 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 12;
      }
      else
      {
        v15 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 13;
      }
      PostWinlogonMessage(1026LL, v15);
    }
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_UseWin32kMargins__private_reporting,
      0x1B65B59u,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_StrictIAMForegroundCheck_logged_traits,
      1,
      v16);
    DwmNotifyWindowsMarginsChangeByTheme();
  }
  return v11;
}
