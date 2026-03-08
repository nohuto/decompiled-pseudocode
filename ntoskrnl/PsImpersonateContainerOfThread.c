/*
 * XREFs of PsImpersonateContainerOfThread @ 0x140225F60
 * Callers:
 *     IopProcessWorkItem @ 0x140203980 (IopProcessWorkItem.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140975AB0 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x140224E80 (ExpAcquireSpinLockExclusive.c)
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     KeApplyWobBamQos @ 0x140227F40 (KeApplyWobBamQos.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140231900 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PspRevertContainerImpersonation @ 0x140248164 (PspRevertContainerImpersonation.c)
 *     ObpIncrPointerCount @ 0x14033BAEC (ObpIncrPointerCount.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140369DE4 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140462ED8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140608CDC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall PsImpersonateContainerOfThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v4; // r15
  int v5; // esi
  unsigned __int8 v6; // r14
  unsigned __int8 v7; // al
  __int64 v8; // rcx
  _DWORD *v10; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // rdx
  unsigned __int8 v13; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF

  if ( ObpTraceFlags )
    ObpPushStackInfo(a1 - 48);
  ObpIncrPointerCount(a1 - 48);
  CurrentThread = KeGetCurrentThread();
  PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LODWORD(v4) = 4;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v12) = 4;
    else
      v12 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v12;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock);
  CurrentThread[1].WaitBlock[1].Object = (PVOID)a1;
  v5 = *(char *)(a1 + 195);
  if ( v5 > 31 )
    LOBYTE(v5) = 31;
  v20 = 0LL;
  v6 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v6 <= 0xFu )
  {
    v10 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v6 != 2 )
      v4 = (-1LL << (v6 + 1)) & 4;
    v10[5] |= v4;
  }
  v19 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v19);
    while ( CurrentThread->ThreadLock );
  }
  CurrentThread->SystemPriority = v5;
  v7 = CurrentThread->PriorityFloorCounts[(char)v5];
  if ( v7 == 0xFF )
    KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, (char)v5, 1uLL, 0LL);
  CurrentThread->PriorityFloorCounts[(char)v5] = v7 + 1;
  CurrentThread->PriorityFloorSummary |= 1 << v5;
  if ( CurrentThread->Priority < (char)v5 )
    KiSetPriorityThread(CurrentThread, &v20);
  CurrentThread->ThreadLock = 0LL;
  KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v20, v6);
  KeApplyWobBamQos(KeGetCurrentPrcb(), CurrentThread, a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, retaddr);
  else
    PspThreadWorkOnBehalfLock = 0;
  if ( KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v17 = (v16 & v15[5]) == 0;
      v15[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1296LL);
  if ( v8 && *(_QWORD *)(v8 + 1232) )
    KeSetThreadChargeOnlySchedulingGroup(CurrentThread);
  return EtwTraceThreadWorkOnBehalfUpdate(0LL, a1);
}
