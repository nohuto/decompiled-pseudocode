/*
 * XREFs of PsImpersonateContainerOfThread @ 0x14021BC50
 * Callers:
 *     IopProcessWorkItem @ 0x14026F6D0 (IopProcessWorkItem.c)
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C2580 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BEF0 (EtwEventEnabled.c)
 *     ObpIncrPointerCount @ 0x14021BF80 (ObpIncrPointerCount.c)
 *     ExpAcquireSpinLockExclusive @ 0x14021D130 (ExpAcquireSpinLockExclusive.c)
 *     PspRevertContainerImpersonation @ 0x14021FAA0 (PspRevertContainerImpersonation.c)
 *     KiEndThreadCycleAccumulation @ 0x14022D9F0 (KiEndThreadCycleAccumulation.c)
 *     KiSetPriorityThread @ 0x14022FC10 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x1402306D0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     EtwWriteEx @ 0x14025D570 (EtwWriteEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402FFA40 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiRequestSoftwareInterrupt @ 0x14035E984 (KiRequestSoftwareInterrupt.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140405AF0 (KiSwapContext.c)
 *     KeCheckAndApplyBamQos @ 0x14051E3E0 (KeCheckAndApplyBamQos.c)
 *     KeSetThreadBamQosLevel @ 0x14051E4E0 (KeSetThreadBamQosLevel.c)
 *     ObpPushStackInfo @ 0x140564C68 (ObpPushStackInfo.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5AE8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KPRCB *v12; // r9
  __int64 v13; // rcx
  REGHANDLE v14; // rbx
  BOOLEAN result; // al
  _DWORD *v16; // rcx
  _DWORD *v17; // rcx
  _DWORD *SchedulerAssist; // r9
  _DWORD *v19; // r9
  int v20; // eax
  int v21; // eax
  int v22; // eax
  _KTHREAD *v23; // r13
  struct _KPRCB *v24; // r14
  _DWORD *v25; // rcx
  int v26; // eax
  _DWORD *v27; // rcx
  int v28; // eax
  _DWORD *v29; // rcx
  int v30; // eax
  _KTHREAD *NextThread; // r14
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  bool v34; // zf
  _DWORD *v35; // rdx
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  __int16 v39; // si
  bool v40; // si
  __int64 v41; // rdx
  unsigned int ThreadFlags2; // ecx
  __int64 v43; // r9
  unsigned int v44; // edx
  unsigned int v45; // ecx
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r9
  _DWORD *v48; // r8
  int v49; // eax
  int v50; // [rsp+40h] [rbp-78h] BYREF
  int v51; // [rsp+44h] [rbp-74h] BYREF
  int v52; // [rsp+48h] [rbp-70h] BYREF
  int v53; // [rsp+4Ch] [rbp-6Ch] BYREF
  __int64 v54; // [rsp+50h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-60h] BYREF
  int *v56; // [rsp+68h] [rbp-50h]
  __int64 v57; // [rsp+70h] [rbp-48h]
  int v58; // [rsp+B0h] [rbp-8h]

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
  v54 = 0LL;
  v5 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v5 <= 0xFu )
  {
    v19 = KeGetCurrentPrcb()->SchedulerAssist;
    v19[5] |= (-1 << (v5 + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v50 = 0;
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
      KeYieldProcessorEx(&v50);
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
    KiSetPriorityThread(CurrentThread, &v54);
  KiReleaseThreadLockSafe(CurrentThread);
  v9 = KeGetCurrentPrcb();
  KiReadyDeferredReadyList(v9, &v54);
  if ( v5 >= 2u )
  {
    if ( v9->NextThread && !v9->DpcRoutineActive )
    {
      LOBYTE(v10) = 2;
      KiRequestSoftwareInterrupt(v9, v10);
    }
    goto LABEL_16;
  }
  v23 = v9->CurrentThread;
  if ( v9->NextThread )
  {
    KiAbProcessContextSwitch(v9->CurrentThread, 0LL);
    v24 = KeGetCurrentPrcb();
    v51 = 0;
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
        KeYieldProcessorEx(&v51);
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
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    NextThread->WaitBlockFill6[68] = 2;
    v23->WaitReason = 32;
    v23->WaitIrql = v5;
    KiQueueReadyThread(v9, v23);
    if ( !(unsigned __int8)KiSwapContext(v23, NextThread, v5) )
      goto LABEL_76;
    if ( !KiIrqlFlags )
      goto LABEL_69;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_69;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_69;
    v32 = KeGetCurrentPrcb();
    v33 = v32->SchedulerAssist;
    v34 = (v33[5] & 0xFFFF0003) == 0;
    v33[5] &= 0xFFFF0003;
    if ( !v34 )
      goto LABEL_69;
LABEL_68:
    KiRemoveSystemWorkPriorityKick(v32);
LABEL_69:
    __writecr8(1uLL);
    v23->MiscFlags &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_76;
  }
  if ( (v23->MiscFlags & 0x40) != 0 )
  {
    if ( !KiIrqlFlags )
      goto LABEL_69;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_69;
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
      goto LABEL_69;
    v32 = KeGetCurrentPrcb();
    v35 = v32->SchedulerAssist;
    v34 = (v35[5] & 0xFFFF0003) == 0;
    v35[5] &= 0xFFFF0003;
    if ( !v34 )
      goto LABEL_69;
    goto LABEL_68;
  }
LABEL_76:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v36 = KeGetCurrentPrcb();
      v37 = v36->SchedulerAssist;
      v38 = ~(unsigned __int16)(-1LL << (v5 + 1));
      v34 = (v38 & v37[5]) == 0;
      v11 = (unsigned int)v38 & v37[5];
      v37[5] = v11;
      if ( v34 )
        KiRemoveSystemWorkPriorityKick(v36);
    }
  }
  __writecr8(v5);
LABEL_16:
  v12 = KeGetCurrentPrcb();
  if ( KeHeteroSystemQos )
  {
    v39 = v58;
    _disable();
    v40 = (v39 & 0x200) != 0;
    v41 = (unsigned __int8)*(_DWORD *)(a1 + 512);
    ThreadFlags2 = (unsigned __int8)CurrentThread->ThreadFlags2;
    if ( (_DWORD)v41 != ThreadFlags2 && ((_DWORD)v41 == 3 || ThreadFlags2 == 3 || (unsigned int)v41 < ThreadFlags2) )
    {
      KeSetThreadBamQosLevel(CurrentThread, v41, v11, v12);
      v44 = (unsigned __int8)*(_DWORD *)(v43 + 236);
      v45 = (unsigned __int8)CurrentThread->ThreadFlags2;
      if ( v45 != v44 && (v45 == 3 || v44 == 3 || v45 < v44) )
        KeCheckAndApplyBamQos(v43, CurrentThread);
    }
    if ( v40 )
      _enable();
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspThreadWorkOnBehalfLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v46 = KeGetCurrentIrql();
      if ( v46 <= 0xFu && CurrentIrql <= 0xFu && v46 >= 2u )
      {
        v47 = KeGetCurrentPrcb();
        v48 = v47->SchedulerAssist;
        v49 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v34 = (v49 & v48[5]) == 0;
        v48[5] &= v49;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v47);
      }
    }
  }
  __writecr8(CurrentIrql);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1296LL);
  if ( v13 && *(_QWORD *)(v13 + 1016) )
    KeSetThreadChargeOnlySchedulingGroup(CurrentThread);
  v14 = EtwpPsProvRegHandle;
  result = EtwEventEnabled(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate);
  if ( result )
  {
    v52 = 0;
    UserData.Ptr = (ULONGLONG)&v52;
    v53 = *(_DWORD *)(a1 + 1152);
    *(_QWORD *)&UserData.Size = 4LL;
    v56 = &v53;
    v57 = 4LL;
    return EtwWriteEx(v14, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  return result;
}
