/*
 * XREFs of DxgkAcquireAdapterStopResetSync @ 0x1C02C263C
 * Callers:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z @ 0x1C005E398 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C039A610 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C039A7D8 (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DxgkAcquireAdapterStopResetSync(__int64 a1, int a2)
{
  __int64 v3; // rbx

  if ( a1 )
  {
    v3 = a1 + 136;
    if ( a2 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v3, 0LL);
      *(_QWORD *)(v3 + 8) = KeGetCurrentThread();
    }
    else
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v3, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 16));
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, 268LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"No hAdapter specified", 268LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
