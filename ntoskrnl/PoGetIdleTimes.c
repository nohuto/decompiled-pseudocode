/*
 * XREFs of PoGetIdleTimes @ 0x140236ABC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     ExpQueryProcessorInformationCounters @ 0x14086C350 (ExpQueryProcessorInformationCounters.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     PopGetIdleTimesCallback @ 0x140236080 (PopGetIdleTimesCallback.c)
 *     KeGetProcessorIndexFromNumber @ 0x140236BF0 (KeGetProcessorIndexFromNumber.c)
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopExecuteOnTargetProcessors @ 0x140236D20 (PopExecuteOnTargetProcessors.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PoGetIdleTimes(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 Prcb; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPRCB *v9; // rsi
  unsigned __int8 CurrentIrql; // bl
  int IdleTimesCallback; // esi
  ULONG v12; // eax
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rax
  unsigned __int8 v16; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  _DWORD v21[68]; // [rsp+20h] [rbp-158h] BYREF

  memset(v21, 0, 0x108uLL);
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  Prcb = KeGetPrcb(ProcessorIndexFromNumber);
  CurrentThread = KeGetCurrentThread();
  v9 = (struct _KPRCB *)Prcb;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v15) = 4;
    if ( CurrentIrql != 2 )
      v15 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v15;
  }
  IdleTimesCallback = PopGetIdleTimesCallback(v9, a2, a3);
  if ( KiIrqlFlags )
  {
    v16 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v18 = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v20 = (v19 & v18[5]) == 0;
      v18[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( IdleTimesCallback < 0 )
  {
    v21[0] = 2097153;
    memset(&v21[1], 0, 0x104uLL);
    v12 = KeGetProcessorIndexFromNumber(ProcNumber);
    KeAddProcessorAffinityEx((unsigned __int16 *)v21, v12);
    PopExecuteOnTargetProcessors(v21, PopGetIdleTimesCallback, a2, a3);
  }
  return PopReleaseRwLock(&PpmIdlePolicyLock);
}
