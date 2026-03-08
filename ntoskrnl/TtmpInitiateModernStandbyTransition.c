/*
 * XREFs of TtmpInitiateModernStandbyTransition @ 0x1409A23F0
 * Callers:
 *     TtmpActivateSessionWorker @ 0x1409A2018 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x1409A220C (TtmpDeactivateSessionWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PoTtmInitiatePowerStateTransition @ 0x140994BF8 (PoTtmInitiatePowerStateTransition.c)
 *     TtmiLogInitiateModernStandbyTransitionStart @ 0x1409A58F0 (TtmiLogInitiateModernStandbyTransitionStart.c)
 *     TtmiLogInitiateModernStandbyTransitionStop @ 0x1409A59E4 (TtmiLogInitiateModernStandbyTransitionStop.c)
 */

__int64 __fastcall TtmpInitiateModernStandbyTransition(__int64 a1, char a2, unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int v6; // eax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v8; // ebx

  v4 = a1;
  LOBYTE(a1) = a2;
  TtmiLogInitiateModernStandbyTransitionStart(a1, a3);
  *(_QWORD *)(v4 + 232) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  v6 = PoTtmInitiatePowerStateTransition(a2, a3);
  CurrentThread = KeGetCurrentThread();
  v8 = v6;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  *(_QWORD *)(v4 + 232) = KeGetCurrentThread();
  TtmiLogInitiateModernStandbyTransitionStop(v8);
  return v8;
}
