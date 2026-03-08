/*
 * XREFs of TtmpSessionPowerControl @ 0x1409A28A4
 * Callers:
 *     TtmpActivateSessionWorker @ 0x1409A2018 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x1409A220C (TtmpDeactivateSessionWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PoSessionPowerControl @ 0x140998BBC (PoSessionPowerControl.c)
 *     TtmiLogSessionPowerControlStart @ 0x1409A6798 (TtmiLogSessionPowerControlStart.c)
 *     TtmiLogSessionPowerControlStop @ 0x1409A688C (TtmiLogSessionPowerControlStop.c)
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
