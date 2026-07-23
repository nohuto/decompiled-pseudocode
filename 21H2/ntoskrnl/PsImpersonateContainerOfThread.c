/*
 * XREFs of PsImpersonateContainerOfThread @ 0x1402C0590
 * Callers:
 *     IopProcessWorkItem @ 0x1402F9DA0 (IopProcessWorkItem.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C2690 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140225090 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     ObpIncrPointerCount @ 0x1402C08C0 (ObpIncrPointerCount.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402C1A70 (ExpAcquireSpinLockExclusive.c)
 *     PspRevertContainerImpersonation @ 0x1402C43E0 (PspRevertContainerImpersonation.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 *     KeCheckAndApplyBamQos @ 0x14051E6E0 (KeCheckAndApplyBamQos.c)
 *     KeSetThreadBamQosLevel @ 0x14051E7E0 (KeSetThreadBamQosLevel.c)
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

BOOLEAN __fastcall PsImpersonateContainerOfThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // bp
  int v4; // esi
  unsigned __int8 v5; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v7; // rcx
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // rsi
  __int64 v10; // r8
  struct _KPRCB *v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdx
  REGHANDLE v14; // rbx
  BOOLEAN result; // al
  _DWORD *v16; // rcx
  _DWORD *v17; // rcx
  _DWORD *SchedulerAssist; // r9
  _DWORD *v19; // r9
  int v20; // eax
  int v21; // eax
  int v22; // eax
  ULONG_PTR v23; // r13
  struct _KPRCB *v24; // r14
  _DWORD *v25; // rcx
  int v26; // eax
  _DWORD *v27; // rcx
  int v28; // eax
  _DWORD *v29; // rcx
  int v30; // eax
  _KTHREAD *NextThread; // r14
  __int64 v32; // r8
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  bool v35; // zf
  _DWORD *v36; // rdx
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  __int16 v40; // si
  bool v41; // si
  __int64 v42; // rdx
  unsigned int ThreadFlags2; // ecx
  __int64 v44; // r9
  unsigned int v45; // edx
  unsigned int v46; // ecx
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  int v50; // eax
  int v51; // [rsp+40h] [rbp-78h] BYREF
  int v52; // [rsp+44h] [rbp-74h] BYREF
  int v53; // [rsp+48h] [rbp-70h] BYREF
  int v54; // [rsp+4Ch] [rbp-6Ch] BYREF
  __int64 v55; // [rsp+50h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-60h] BYREF
  int *v57; // [rsp+68h] [rbp-50h]
  __int64 v58; // [rsp+70h] [rbp-48h]
  int v59; // [rsp+B0h] [rbp-8h]

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
  v4 = *(char *)(a1 + 195);
  if ( v4 > 15 )
    LOBYTE(v4) = 15;
  v55 = 0LL;
  v5 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v5 <= 0xFu )
  {
    v19 = KeGetCurrentPrcb()->SchedulerAssist;
    v19[5] |= (-1 << (v5 + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v51 = 0;
  v7 = CurrentPrcb->SchedulerAssist;
  if ( v7 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v20 = v7[6];
      v7[6] = v20 + 1;
      if ( v20 == -1 )
LABEL_38:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    v16 = CurrentPrcb->SchedulerAssist;
    if ( v16 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v21 = v16[6] - 1;
        v16[6] = v21;
        if ( !v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v51);
    while ( CurrentThread->ThreadLock );
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v22 = v17[6];
        v17[6] = v22 + 1;
        if ( v22 == -1 )
          goto LABEL_38;
      }
    }
  }
  CurrentThread->SystemPriority = v4;
  v8 = CurrentThread->PriorityFloorCounts[(char)v4];
  if ( v8 == 0xFF )
    KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, (char)v4, 1uLL, 0LL);
  CurrentThread->PriorityFloorCounts[(char)v4] = v8 + 1;
  CurrentThread->PriorityFloorSummary |= 1 << v4;
  if ( CurrentThread->Priority < (char)v4 )
    KiSetPriorityThread(CurrentThread, &v55, (unsigned int)(char)v4);
  KiReleaseThreadLockSafe((__int64)CurrentThread);
  v9 = KeGetCurrentPrcb();
  KiReadyDeferredReadyList(v9, &v55);
  if ( v5 >= 2u )
  {
    if ( v9->NextThread && !v9->DpcRoutineActive )
      KiRequestSoftwareInterrupt(v9, 2);
    goto LABEL_16;
  }
  v23 = (ULONG_PTR)v9->CurrentThread;
  if ( v9->NextThread )
  {
    KiAbProcessContextSwitch(v9->CurrentThread, 0LL);
    v24 = KeGetCurrentPrcb();
    v52 = 0;
    v25 = v24->SchedulerAssist;
    if ( v25 )
    {
      if ( v24->NestingLevel <= 1u )
      {
        v26 = v25[6];
        v25[6] = v26 + 1;
        if ( v26 == -1 )
LABEL_50:
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v9->PrcbLock, 0LL) )
    {
      v27 = v24->SchedulerAssist;
      if ( v27 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v28 = v27[6] - 1;
          v27[6] = v28;
          if ( !v28 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      do
        KeYieldProcessorEx(&v52);
      while ( v9->PrcbLock );
      v29 = v24->SchedulerAssist;
      if ( v29 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v30 = v29[6];
          v29[6] = v30 + 1;
          if ( v30 == -1 )
            goto LABEL_50;
        }
      }
    }
    NextThread = v9->NextThread;
    v9->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation(v9, v23, 0LL);
    _enable();
    v9->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
    {
      v32 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
      NextThread->ReadyTime = v32 + MEMORY[0xFFFFF78000000320];
    }
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v23 + 643) = 32;
    *(_BYTE *)(v23 + 390) = v5;
    KiQueueReadyThread(v9, v23, v32);
    if ( !(unsigned __int8)KiSwapContext(v23, NextThread, v5) )
      goto LABEL_76;
    if ( !KiIrqlFlags )
      goto LABEL_69;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_69;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_69;
    v33 = KeGetCurrentPrcb();
    v34 = v33->SchedulerAssist;
    v35 = (v34[5] & 0xFFFF0003) == 0;
    v34[5] &= 0xFFFF0003;
    if ( !v35 )
      goto LABEL_69;
LABEL_68:
    KiRemoveSystemWorkPriorityKick(v33);
LABEL_69:
    __writecr8(1uLL);
    *(_DWORD *)(v23 + 116) &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_76;
  }
  if ( (*(_DWORD *)(v23 + 116) & 0x40) != 0 )
  {
    if ( !KiIrqlFlags )
      goto LABEL_69;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_69;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_69;
    v33 = KeGetCurrentPrcb();
    v36 = v33->SchedulerAssist;
    v35 = (v36[5] & 0xFFFF0003) == 0;
    v36[5] &= 0xFFFF0003;
    if ( !v35 )
      goto LABEL_69;
    goto LABEL_68;
  }
LABEL_76:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v37 = KeGetCurrentPrcb();
      v38 = v37->SchedulerAssist;
      v39 = ~(unsigned __int16)(-1LL << (v5 + 1));
      v35 = (v39 & v38[5]) == 0;
      v10 = (unsigned int)v39 & v38[5];
      v38[5] = v10;
      if ( v35 )
        KiRemoveSystemWorkPriorityKick(v37);
    }
  }
  __writecr8(v5);
LABEL_16:
  v11 = KeGetCurrentPrcb();
  if ( KeHeteroSystemQos )
  {
    v40 = v59;
    _disable();
    v41 = (v40 & 0x200) != 0;
    v42 = (unsigned __int8)*(_DWORD *)(a1 + 512);
    ThreadFlags2 = (unsigned __int8)CurrentThread->ThreadFlags2;
    if ( (_DWORD)v42 != ThreadFlags2 && ((_DWORD)v42 == 3 || ThreadFlags2 == 3 || (unsigned int)v42 < ThreadFlags2) )
    {
      KeSetThreadBamQosLevel(CurrentThread, v42, v10, v11);
      v45 = (unsigned __int8)*(_DWORD *)(v44 + 236);
      v46 = (unsigned __int8)CurrentThread->ThreadFlags2;
      if ( v46 != v45 && (v46 == 3 || v45 == 3 || v46 < v45) )
        KeCheckAndApplyBamQos(v44, CurrentThread);
    }
    if ( v41 )
      _enable();
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspThreadWorkOnBehalfLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v47 = KeGetCurrentIrql();
      if ( v47 <= 0xFu && CurrentIrql <= 0xFu && v47 >= 2u )
      {
        v48 = KeGetCurrentPrcb();
        v49 = v48->SchedulerAssist;
        v50 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v35 = (v50 & v49[5]) == 0;
        v49[5] &= v50;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick(v48);
      }
    }
  }
  __writecr8(CurrentIrql);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1296LL);
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 1016);
    if ( v13 )
      KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v13);
  }
  v14 = EtwpPsProvRegHandle;
  result = EtwEventEnabled(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate);
  if ( result )
  {
    v53 = 0;
    UserData.Ptr = (ULONGLONG)&v53;
    v54 = *(_DWORD *)(a1 + 1152);
    *(_QWORD *)&UserData.Size = 4LL;
    v57 = &v54;
    v58 = 4LL;
    return EtwWriteEx(v14, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  return result;
}
