/*
 * XREFs of ?SetWindowMargins@@YAJPEAUtagWND@@AEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0235D04
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0022C50 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C004D894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0082444 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall SetWindowMargins(struct tagWND *a1, const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  INT v4; // r15d
  INT v5; // r14d
  INT v6; // ebp
  INT v7; // esi
  __int64 v8; // rcx
  int v9; // eax
  INT ScaledLogPixels; // ebx
  int v12; // [rsp+30h] [rbp-98h]
  __int64 v13; // [rsp+40h] [rbp-88h]
  _QWORD v14[8]; // [rsp+50h] [rbp-78h] BYREF

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_UseWin32kMargins__private_reporting,
    0x1B65B59u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_StrictIAMForegroundCheck_logged_traits,
    1,
    v12);
  MicrosoftTelemetryAssertTriggeredNoArgsKM();
  memset(v14, 0, sizeof(v14));
  _GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v14);
  v4 = *(__int16 *)a2;
  v5 = *((__int16 *)a2 + 4);
  v6 = *((__int16 *)a2 + 2);
  v7 = *((__int16 *)a2 + 6);
  LOWORD(v13) = *(_WORD *)a2;
  WORD1(v13) = *((_WORD *)a2 + 4);
  WORD2(v13) = *((_WORD *)a2 + 2);
  HIWORD(v13) = *((_WORD *)a2 + 6);
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                      + 64LL) & 1) != 0 )
      {
        v8 = *((_QWORD *)a1 + 5);
        v9 = *(_DWORD *)(v8 + 288);
        if ( (v9 & 0xF) == 0 && (v9 & 0x40000000) != 0 )
        {
          ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(*(unsigned __int16 *)(v8 + 284));
          LOWORD(v13) = EngMulDiv(v4, 96, ScaledLogPixels);
          LOWORD(v4) = v13;
          WORD2(v13) = EngMulDiv(v6, 96, ScaledLogPixels);
          LOWORD(v6) = WORD2(v13);
          WORD1(v13) = EngMulDiv(v5, 96, ScaledLogPixels);
          LOWORD(v5) = WORD1(v13);
          LOWORD(v7) = EngMulDiv(v7, 96, ScaledLogPixels);
          HIWORD(v13) = v7;
        }
      }
    }
  }
  if ( (_WORD)v4 == LOWORD(v14[4])
    && __PAIR32__(v6, v5) == *(_DWORD *)((char *)&v14[4] + 2)
    && (_WORD)v7 == HIWORD(v14[4]) )
  {
    return 0LL;
  }
  v14[4] = v13;
  if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v14) )
    return 0LL;
  else
    return 3221225495LL;
}
