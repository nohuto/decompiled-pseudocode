/*
 * XREFs of NtUserSetWindowsHookAW @ 0x1C01FEB30
 * Callers:
 *     <none>
 * Callees:
 *     zzzSetWindowsHookEx @ 0x1C00249B8 (zzzSetWindowsHookEx.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserSetWindowsHookAW(int a1, __int64 a2, char a3)
{
  __int64 v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  int v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = a1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_UseSharedCreateDestroyWindowsHooks__private_reporting,
    0x1943C86u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_DeliverDespiteMessageFilter_logged_traits,
    1,
    v14);
  EnterSharedCrit(v7, v6, v8);
  v9 = 0LL;
  v15 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = (__int64 *)zzzSetWindowsHookEx(0LL, 0LL, ThreadWin32Thread, v4, a2, a3, &v15);
  if ( v11 )
  {
    if ( !v15 || (byte_1C02E8961[v4] & 8) != 0 )
    {
      v9 = (__int64)v11;
      if ( v11 != (__int64 *)-1LL )
        v9 = *v11;
    }
  }
  else
  {
    v9 = -1LL;
  }
  UserSessionSwitchLeaveCrit(v12);
  return v9;
}
