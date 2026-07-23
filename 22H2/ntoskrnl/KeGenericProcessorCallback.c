/*
 * XREFs of KeGenericProcessorCallback @ 0x14035C6D8
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x1403214A0 (KeRemoveQueueDpcEx.c)
 *     KeDisableTimer2 @ 0x140348C40 (KeDisableTimer2.c)
 *     ExpUpdateTimerConfiguration @ 0x14035C460 (ExpUpdateTimerConfiguration.c)
 *     KeFlushQueuedDpcs @ 0x14035DC40 (KeFlushQueuedDpcs.c)
 *     KeGenericCallDpc @ 0x14035E460 (KeGenericCallDpc.c)
 *     KeSetIntervalProfile @ 0x140734774 (KeSetIntervalProfile.c)
 *     RtlUpdateSwapReference @ 0x1407CABDC (RtlUpdateSwapReference.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x14090A510 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 * Callees:
 *     KiEnumerateNextProcessorNumber @ 0x1402284B0 (KiEnumerateNextProcessorNumber.c)
 *     KeSetPriorityBoost @ 0x14022F060 (KeSetPriorityBoost.c)
 *     KiRemoveBoostThread @ 0x14024A840 (KiRemoveBoostThread.c)
 *     KeSetPriorityThread @ 0x140257340 (KeSetPriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1403413C4 (KiCheckForThreadDispatch.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035C8F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035CA50 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 */

char __fastcall KeGenericProcessorCallback(
        unsigned __int16 *a1,
        void (__fastcall *a2)(struct _KPRCB *, __int64),
        __int64 a3,
        int a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  _GROUP_AFFINITY *p_PreviousAffinity; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  KPRIORITY v10; // r15d
  unsigned __int16 *v11; // rax
  __int64 v12; // rsi
  unsigned __int8 CurrentIrql; // si
  __int64 v14; // rdx
  _DWORD *SchedulerAssist; // r9
  int v17; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+28h] [rbp-D8h]
  _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v21; // [rsp+50h] [rbp-B0h]
  int v22; // [rsp+52h] [rbp-AEh]
  __int16 v23; // [rsp+56h] [rbp-AAh]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v25[22]; // [rsp+70h] [rbp-90h] BYREF

  v18 = a3;
  Affinity = 0LL;
  memset(v25, 0, 0xA8uLL);
  v22 = 0;
  v23 = 0;
  v17 = 0;
  PreviousAffinity = 0LL;
  if ( !a1 )
  {
    LODWORD(v25[0]) = 1310721;
    a1 = (unsigned __int16 *)v25;
    memset((char *)v25 + 4, 0, 0xA4uLL);
    v25[1] |= 1uLL;
  }
  CurrentThread = KeGetCurrentThread();
  p_PreviousAffinity = &PreviousAffinity;
  CurrentPrcb = 0LL;
  *(_DWORD *)Affinity.Reserved = 0;
  v10 = 0;
  Affinity.Reserved[2] = 0;
  if ( a4 )
  {
    if ( (a4 & 2) != 0 )
      v10 = KeSetPriorityThread(CurrentThread, 30);
    else
      KeSetPriorityBoost((__int64)CurrentThread, 15);
  }
  v11 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v20[0] = a1;
  v12 = v18;
  v20[1] = v11;
  v21 = 0;
  while ( !(unsigned int)KiEnumerateNextProcessorNumber((__int64)&v17, v20) )
  {
    Affinity.Group = v17;
    Affinity.Mask = 1LL << SBYTE2(v17);
    KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    CurrentPrcb = KeGetCurrentPrcb();
    a2(CurrentPrcb, v12);
    p_PreviousAffinity = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  CurrentPrcb->DpcRoutineActive = 1;
  if ( a4 )
  {
    if ( (a4 & 2) != 0 )
      KeSetPriorityThread(CurrentThread, v10);
    else
      KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentThread);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  LOBYTE(v14) = CurrentIrql;
  CurrentPrcb->DpcRoutineActive = 0;
  return KiCheckForThreadDispatch((__int64)CurrentPrcb, v14);
}
