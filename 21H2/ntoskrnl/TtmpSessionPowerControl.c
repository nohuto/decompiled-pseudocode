/*
 * XREFs of TtmpSessionPowerControl @ 0x1409A5B64
 * Callers:
 *     TtmpActivateSessionWorker @ 0x1409A52C8 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x1409A54C0 (TtmpDeactivateSessionWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PoSessionPowerControl @ 0x14099CD30 (PoSessionPowerControl.c)
 *     TtmiLogSessionPowerControlStart @ 0x1409A9A54 (TtmiLogSessionPowerControlStart.c)
 *     TtmiLogSessionPowerControlStop @ 0x1409A9B48 (TtmiLogSessionPowerControlStop.c)
 */

__int64 __fastcall TtmpSessionPowerControl(unsigned int *a1, unsigned __int8 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int *v5; // r14
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
