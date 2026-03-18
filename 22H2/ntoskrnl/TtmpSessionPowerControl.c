/*
 * XREFs of TtmpSessionPowerControl @ 0x1409A5934
 * Callers:
 *     TtmpActivateSessionWorker @ 0x1409A50A8 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x1409A529C (TtmpDeactivateSessionWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     PoSessionPowerControl @ 0x14099BC6C (PoSessionPowerControl.c)
 *     TtmiLogSessionPowerControlStart @ 0x1409A9820 (TtmiLogSessionPowerControlStart.c)
 *     TtmiLogSessionPowerControlStop @ 0x1409A9914 (TtmiLogSessionPowerControlStop.c)
 */

__int64 __fastcall TtmpSessionPowerControl(int *a1, unsigned __int8 a2, unsigned int a3)
{
  int v3; // ebx
  int *v5; // r14
  struct _KTHREAD *CurrentThread; // rax

  v3 = *a1;
  v5 = a1;
  LOBYTE(a1) = a2;
  TtmiLogSessionPowerControlStart(a1, a3);
  *((_QWORD *)v5 + 29) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  PoSessionPowerControl(a2, a3, v3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  *((_QWORD *)v5 + 29) = KeGetCurrentThread();
  return TtmiLogSessionPowerControlStop();
}
