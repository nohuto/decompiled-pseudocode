/*
 * XREFs of ?StopDeadlockTrackers@DXGADAPTER@@QEAAXXZ @ 0x1C01E1084
 * Callers:
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C01E07B0 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     DpiPowerArbiterThread @ 0x1C0210150 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1C017D324 (-Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::StopDeadlockTrackers(DXGADAPTER *this)
{
  char *v2; // rdi
  char *v3; // rsi
  char *i; // rbx

  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 1171, 0, 1) == 1 )
  {
    WdLogSingleEntry1(9LL, 12416LL);
    v2 = (char *)this + 4688;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 4688, 0LL);
    v3 = (char *)this + 4712;
    *((_QWORD *)this + 587) = KeGetCurrentThread();
    for ( i = (char *)*((_QWORD *)this + 589); i != v3; i = *(char **)i )
      DXGDEADLOCK_TRACKER::Cancel((DXGDEADLOCK_TRACKER *)(i - 224));
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
