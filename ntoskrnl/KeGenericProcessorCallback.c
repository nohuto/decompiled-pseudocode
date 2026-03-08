/*
 * XREFs of KeGenericProcessorCallback @ 0x1402A9E48
 * Callers:
 *     KeDisableTimer2 @ 0x140204028 (KeDisableTimer2.c)
 *     KeRemoveQueueDpcEx @ 0x14028DB50 (KeRemoveQueueDpcEx.c)
 *     KeFlushQueuedDpcs @ 0x1402AF200 (KeFlushQueuedDpcs.c)
 *     KeGenericCallDpc @ 0x1403008E0 (KeGenericCallDpc.c)
 *     ExpUpdateTimerConfiguration @ 0x1403BCFE8 (ExpUpdateTimerConfiguration.c)
 *     KeUpdateDpcWatchdogConfiguration @ 0x140568BB0 (KeUpdateDpcWatchdogConfiguration.c)
 *     RtlUpdateSwapReference @ 0x140818560 (RtlUpdateSwapReference.c)
 *     KeSetIntervalProfile @ 0x140972128 (KeSetIntervalProfile.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x1409AEA50 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 * Callees:
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x140229890 (KiRemoveBoostThread.c)
 *     KiCheckForThreadDispatch @ 0x14023A168 (KiCheckForThreadDispatch.c)
 *     KiEnumerateNextProcessorNumber @ 0x1402AA0A0 (KiEnumerateNextProcessorNumber.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     KeSetPriorityBoost @ 0x14035112C (KeSetPriorityBoost.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

char __fastcall KeGenericProcessorCallback(
        _QWORD *a1,
        void (__fastcall *a2)(struct _KPRCB *, __int64),
        __int64 a3,
        int a4)
{
  struct _GROUP_AFFINITY *p_PreviousAffinity; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  KPRIORITY v9; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int8 CurrentIrql; // di
  int v14; // r14d
  _DWORD *SchedulerAssist; // r9
  __int64 v17; // rax
  int v18; // [rsp+20h] [rbp-E0h] BYREF
  int v19; // [rsp+24h] [rbp-DCh]
  __int64 v20; // [rsp+28h] [rbp-D8h]
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v23; // [rsp+50h] [rbp-B0h]
  int v24; // [rsp+52h] [rbp-AEh]
  __int16 v25; // [rsp+56h] [rbp-AAh]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v27[34]; // [rsp+70h] [rbp-90h] BYREF

  v20 = a3;
  v19 = a4;
  Affinity = 0LL;
  memset(v27, 0, 0x108uLL);
  v24 = 0;
  v25 = 0;
  v18 = 0;
  PreviousAffinity = 0LL;
  if ( !a1 )
  {
    LODWORD(v27[0]) = 2097153;
    a1 = v27;
    memset((char *)v27 + 4, 0, 0x104uLL);
    v27[1] |= 1uLL;
  }
  p_PreviousAffinity = &PreviousAffinity;
  *(_DWORD *)Affinity.Reserved = 0;
  CurrentPrcb = 0LL;
  Affinity.Reserved[2] = 0;
  v9 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a4 )
  {
    if ( (a4 & 2) != 0 )
      v9 = KeSetPriorityThread(CurrentThread, 30);
    else
      KeSetPriorityBoost(CurrentThread, 15LL);
  }
  v11 = a1[1];
  v22[0] = a1;
  v12 = v20;
  v23 = 0;
  v22[1] = v11;
  while ( !(unsigned int)KiEnumerateNextProcessorNumber(&v18, v22) )
  {
    Affinity.Group = v18;
    Affinity.Mask = 1LL << SBYTE2(v18);
    KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    CurrentPrcb = KeGetCurrentPrcb();
    a2(CurrentPrcb, v12);
    p_PreviousAffinity = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v14 = v19;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v17) = 4;
    if ( CurrentIrql != 2 )
      v17 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v17;
  }
  CurrentPrcb->DpcRoutineActive = 1;
  if ( v14 )
  {
    if ( (v14 & 2) != 0 )
      KeSetPriorityThread(CurrentThread, v9);
    else
      KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentThread);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  CurrentPrcb->DpcRoutineActive = 0;
  return KiCheckForThreadDispatch((__int64)CurrentPrcb, CurrentIrql);
}
