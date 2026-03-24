/*
 * XREFs of DxgkReleaseAdapterStopResetSync @ 0x1C0218260
 * Callers:
 *     DpiDisableMsBddFallbackDriver @ 0x1C02C82C0 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C02C846C (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkReleaseAdapterStopResetSync(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx

  if ( a1 )
  {
    v4 = a1 + 136;
    *(_QWORD *)(v4 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    v2 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v2 + 24) = 273LL;
    WdLogEvent5_WdError(v2);
    return 3221225485LL;
  }
}
