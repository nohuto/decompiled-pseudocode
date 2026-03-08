/*
 * XREFs of DxgkIsAdapterCoreSyncAcquired @ 0x1C01E5204
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0210150 (DpiPowerArbiterThread.c)
 *     DpExcludeAdapterAccess @ 0x1C03941A0 (DpExcludeAdapterAccess.c)
 *     DpiFdoWaitConnectionChangeComplete @ 0x1C03993A8 (DpiFdoWaitConnectionChangeComplete.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C039B354 (DpiMiracastSendSyncUserModeRequest.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

BOOLEAN __fastcall DxgkIsAdapterCoreSyncAcquired(DXGADAPTER *this, int a2)
{
  char v2; // di
  __int64 v5; // rbx

  v2 = 0;
  if ( this )
  {
    if ( a2 == 1 )
      return DXGADAPTER::IsCoreResourceSharedOwner(this);
    if ( a2 != 2 && a2 != 5 )
    {
      v5 = a2;
      WdLogSingleEntry1(2LL, a2);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid synchronization level 0x%I64x",
        v5,
        0LL,
        0LL,
        0LL,
        0LL);
      return v2;
    }
    return DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this);
  }
  WdLogSingleEntry1(2LL, 330LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"No pAdapter specified", 330LL, 0LL, 0LL, 0LL, 0LL);
  return 0;
}
