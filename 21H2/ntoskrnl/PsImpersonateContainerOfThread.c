/*
 * XREFs of PsImpersonateContainerOfThread @ 0x14030F330
 * Callers:
 *     IopProcessWorkItem @ 0x1402F8870 (IopProcessWorkItem.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1409663D0 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     PspRevertContainerImpersonation @ 0x1402A86B0 (PspRevertContainerImpersonation.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ObpIncrPointerCount @ 0x14030F6D0 (ObpIncrPointerCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     KeApplyWobBamQos @ 0x14030F970 (KeApplyWobBamQos.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140310810 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 */

BOOLEAN __fastcall PsImpersonateContainerOfThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r15
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *v6; // r9
  int v7; // esi
  char v8; // r13
  unsigned __int8 v9; // r12
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v11; // rcx
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // rsi
  _QWORD *v14; // r14
  __int64 v15; // rcx
  REGHANDLE v16; // rbx
  BOOLEAN result; // al
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  int v22; // eax
  int v23; // eax
  ULONG_PTR v24; // r13
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _KPRCB *v28; // r14
  _DWORD *v29; // rcx
  int v30; // eax
  _DWORD *v31; // rcx
  int v32; // eax
  _DWORD *v33; // rcx
  int v34; // eax
  _KTHREAD *NextThread; // r14
  __int64 v36; // r8
  struct _KPRCB *v37; // rcx
  _DWORD *v38; // rdx
  bool v39; // zf
  _DWORD *v40; // rdx
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r9
  _DWORD *v46; // r8
  int v47; // eax
  _QWORD *v48; // [rsp+40h] [rbp-29h] BYREF
  int v49; // [rsp+48h] [rbp-21h] BYREF
  int v50; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v51; // [rsp+50h] [rbp-19h] BYREF
  int v52; // [rsp+54h] [rbp-15h] BYREF
  int v53[6]; // [rsp+58h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+7h] BYREF
  int *v55; // [rsp+80h] [rbp+17h]
  __int64 v56; // [rsp+88h] [rbp+1Fh]

  if ( ObpTraceFlags )
    ObpPushStackInfo(a1 - 48);
  ObpIncrPointerCount(a1 - 48);
  CurrentThread = KeGetCurrentThread();
  PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock, CurrentIrql);
  CurrentThread[1].WaitBlock[1].Object = (PVOID)a1;
  v7 = *(char *)(a1 + 195);
  if ( v7 > 31 )
    LOBYTE(v7) = 31;
  v8 = 0;
  v48 = 0LL;
  v9 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v9 <= 0xFu )
  {
    v6 = KeGetCurrentPrcb()->SchedulerAssist;
    v4 = (-1LL << (v9 + 1)) & 4;
    v5 = (unsigned int)v4 | v6[5];
    v6[5] = v5;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v49 = 0;
  v11 = CurrentPrcb->SchedulerAssist;
  if ( v11 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v21 = v11[6];
      v11[6] = v21 + 1;
      if ( v21 == -1 )
LABEL_41:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    v18 = CurrentPrcb->SchedulerAssist;
    if ( v18 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v22 = v18[6] - 1;
        v18[6] = v22;
        if ( !v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v49, v4, v5, (__int64)v6);
    while ( CurrentThread->ThreadLock );
    v19 = CurrentPrcb->SchedulerAssist;
    if ( v19 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v23 = v19[6];
        v19[6] = v23 + 1;
        if ( v23 == -1 )
          goto LABEL_41;
      }
    }
  }
  CurrentThread->SystemPriority = v7;
  v12 = CurrentThread->PriorityFloorCounts[(char)v7];
  if ( v12 == 0xFF )
    KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, (char)v7, 1uLL, 0LL);
  CurrentThread->PriorityFloorCounts[(char)v7] = v12 + 1;
  CurrentThread->PriorityFloorSummary |= 1 << v7;
  if ( CurrentThread->Priority < (char)v7 )
    KiSetPriorityThread(CurrentThread, &v48, (unsigned int)(char)v7);
  KiReleaseThreadLockSafe((__int64)CurrentThread);
  v13 = KeGetCurrentPrcb();
  v14 = v48;
  if ( v48 )
  {
    v48 = (_QWORD *)*v48;
    do
    {
      KiDeferredReadySingleThread(v13, v14 - 27, &v48);
      v14 = v48;
      ++v8;
      if ( v48 )
        v48 = (_QWORD *)*v48;
      if ( (v8 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&v13->DeferredDispatchInterrupts);
    }
    while ( v14 );
  }
  KiFlushSoftwareInterruptBatch(&v13->DeferredDispatchInterrupts);
  if ( v9 >= 2u )
  {
    if ( v13->NextThread && !v13->DpcRoutineActive )
    {
      if ( v13->NestingLevel )
      {
        v13->InterruptRequest = 1;
      }
      else
      {
        v53[0] = 5;
        *(_OWORD *)&v53[1] = 0LL;
        HalpInterruptSendIpi(v53, 0x2Fu);
      }
    }
    goto LABEL_17;
  }
  v24 = (ULONG_PTR)v13->CurrentThread;
  if ( v13->NextThread )
  {
    KiAbProcessContextSwitch((__int64)v13->CurrentThread, 0);
    v28 = KeGetCurrentPrcb();
    v50 = 0;
    v29 = v28->SchedulerAssist;
    if ( v29 )
    {
      if ( v28->NestingLevel <= 1u )
      {
        v30 = v29[6];
        v29[6] = v30 + 1;
        if ( v30 == -1 )
LABEL_59:
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v13->PrcbLock, 0LL) )
    {
      v31 = v28->SchedulerAssist;
      if ( v31 )
      {
        if ( v28->NestingLevel <= 1u )
        {
          v32 = v31[6] - 1;
          v31[6] = v32;
          if ( !v32 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
      do
        KeYieldProcessorEx(&v50, v25, v26, v27);
      while ( v13->PrcbLock );
      v33 = v28->SchedulerAssist;
      if ( v33 )
      {
        if ( v28->NestingLevel <= 1u )
        {
          v34 = v33[6];
          v33[6] = v34 + 1;
          if ( v34 == -1 )
            goto LABEL_59;
        }
      }
    }
    NextThread = v13->NextThread;
    v13->NextThread = 0LL;
    _disable();
    LOBYTE(v27) = 1;
    KiEndThreadCycleAccumulation(v13, v24, 0LL, v27);
    _enable();
    v13->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
    {
      v36 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
      NextThread->ReadyTime = v36 + MEMORY[0xFFFFF78000000320];
    }
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v24 + 643) = 32;
    *(_BYTE *)(v24 + 390) = v9;
    KiQueueReadyThread(v13, v24, v36);
    if ( !(unsigned __int8)KiSwapContext(v24, NextThread, v9) )
      goto LABEL_85;
    if ( !KiIrqlFlags )
      goto LABEL_78;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_78;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_78;
    v37 = KeGetCurrentPrcb();
    v38 = v37->SchedulerAssist;
    v39 = (v38[5] & 0xFFFF0003) == 0;
    v38[5] &= 0xFFFF0003;
    if ( !v39 )
      goto LABEL_78;
LABEL_77:
    KiRemoveSystemWorkPriorityKick(v37);
LABEL_78:
    __writecr8(1uLL);
    *(_DWORD *)(v24 + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
    goto LABEL_85;
  }
  if ( (*(_DWORD *)(v24 + 116) & 0x40) != 0 )
  {
    if ( !KiIrqlFlags )
      goto LABEL_78;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_78;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_78;
    v37 = KeGetCurrentPrcb();
    v40 = v37->SchedulerAssist;
    v39 = (v40[5] & 0xFFFF0003) == 0;
    v40[5] &= 0xFFFF0003;
    if ( !v39 )
      goto LABEL_78;
    goto LABEL_77;
  }
LABEL_85:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v41 = KeGetCurrentPrcb();
      v42 = v41->SchedulerAssist;
      v43 = ~(unsigned __int16)(-1LL << (v9 + 1));
      v39 = (v43 & v42[5]) == 0;
      v42[5] &= v43;
      if ( v39 )
        KiRemoveSystemWorkPriorityKick(v41);
    }
  }
  __writecr8(v9);
LABEL_17:
  KeApplyWobBamQos(KeGetCurrentPrcb(), CurrentThread, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspThreadWorkOnBehalfLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v44 = KeGetCurrentIrql();
      if ( v44 <= 0xFu && CurrentIrql <= 0xFu && v44 >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        v46 = v45->SchedulerAssist;
        v47 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v39 = (v47 & v46[5]) == 0;
        v46[5] &= v47;
        if ( v39 )
          KiRemoveSystemWorkPriorityKick(v45);
      }
    }
  }
  __writecr8(CurrentIrql);
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1296LL);
  if ( v15 && *(_QWORD *)(v15 + 1208) )
    KeSetThreadChargeOnlySchedulingGroup(CurrentThread);
  v16 = EtwpPsProvRegHandle;
  result = EtwEventEnabled(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate);
  if ( result )
  {
    v51 = 0;
    UserData.Ptr = (ULONGLONG)&v51;
    v52 = *(_DWORD *)(a1 + 1232);
    *(_QWORD *)&UserData.Size = 4LL;
    v55 = &v52;
    v56 = 4LL;
    return EtwWriteEx(v16, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  return result;
}
