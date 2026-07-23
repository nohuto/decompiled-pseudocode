/*
 * XREFs of KeClockInterruptNotify @ 0x140221600
 * Callers:
 *     HalpTimerClockIpiRoutine @ 0x140221520 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerClockInterrupt @ 0x140229F00 (HalpTimerClockInterrupt.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x1404D4710 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     KeAccumulateTicks @ 0x1402243D0 (KeAccumulateTicks.c)
 *     KiUpdateTime @ 0x1402276F0 (KiUpdateTime.c)
 *     PoExecuteIdleCheck @ 0x140227E10 (PoExecuteIdleCheck.c)
 *     RtlGetInterruptTimePrecise @ 0x14022A120 (RtlGetInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiShouldScanSharedReadyQueue @ 0x1402591F4 (KiShouldScanSharedReadyQueue.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402F0984 (KiSetClockIntervalToMinimumRequested.c)
 *     KeIsForceIdleEngaged @ 0x1402F0E94 (KeIsForceIdleEngaged.c)
 *     KiEventClockStateChange @ 0x1402F1018 (KiEventClockStateChange.c)
 *     KiRestoreClockTickRate @ 0x1402F1058 (KiRestoreClockTickRate.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     KiIsQosGroupingActive @ 0x140398754 (KiIsQosGroupingActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     KeCheckAndApplyBamQos @ 0x14051E3E0 (KeCheckAndApplyBamQos.c)
 *     KeUpdatePendingQosRequest @ 0x14051EDA0 (KeUpdatePendingQosRequest.c)
 *     KiConvertDynamicHeteroPolicy @ 0x14051F0E0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14051F1F8 (KiGenerateHeteroSets.c)
 *     KiResetForceIdle @ 0x140523560 (KiResetForceIdle.c)
 *     PoSetProcessorQoS @ 0x14056E49C (PoSetProcessorQoS.c)
 */

void __fastcall KeClockInterruptNotify(__int64 a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  LARGE_INTEGER *v5; // r12
  struct _KPRCB *v6; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // eax
  LARGE_INTEGER InterruptTimePrecise; // rbx
  __int64 v12; // rdx
  int v13; // eax
  char v14; // r13
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  int v17; // eax
  unsigned __int8 v18; // di
  __int64 v19; // rcx
  _QWORD *v20; // rsi
  bool v21; // zf
  unsigned __int8 CurrentIrql; // bl
  _DWORD *v23; // r9
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  unsigned __int8 v28; // bl
  _DWORD *v29; // r9
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  __int64 v34; // rbx
  __int64 v35; // rax
  struct _KPRCB *v36; // rbx
  __int16 v37; // r15
  int v38; // r13d
  __int64 v39; // rdx
  __int64 PrcbFlags; // rcx
  _KTHREAD *CurrentThread; // rsi
  unsigned int SystemHeteroCpuPolicy; // edi
  _KNODE *ParentNode; // r14
  __int64 v44; // rdx
  __int64 v45; // r8
  unsigned __int64 v46; // rdx
  unsigned __int8 EfficiencySchedulingClass; // r9
  int v48; // r11d
  unsigned __int64 v49; // rax
  __int64 v50; // r8
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // rdi
  unsigned int v53; // r8d
  bool v54; // r15
  unsigned int v55; // edx
  char v56; // al
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char v58; // dl
  __int64 v59; // r8
  char v60; // al
  unsigned __int64 v61; // rax
  unsigned __int8 v62; // bl
  _DWORD *v63; // r9
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r9
  _DWORD *v66; // r8
  int v67; // eax
  _DWORD v68[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v69; // [rsp+38h] [rbp-70h] BYREF
  __int64 v70; // [rsp+40h] [rbp-68h] BYREF
  __int64 v71; // [rsp+48h] [rbp-60h] BYREF
  __int64 v72; // [rsp+50h] [rbp-58h] BYREF
  __int64 v73; // [rsp+58h] [rbp-50h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-48h] BYREF
  int v75; // [rsp+A0h] [rbp-8h]
  char v76; // [rsp+C0h] [rbp+18h]

  v71 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  v76 = 0;
  v70 = 0LL;
  if ( KiForceIdleDisabled )
    goto LABEL_28;
  _disable();
  v6 = KeGetCurrentPrcb();
  v68[0] = 0;
  while ( 1 )
  {
    SchedulerAssist = v6->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v6->NestingLevel <= 1u )
      {
        v8 = SchedulerAssist[6];
        SchedulerAssist[6] = v8 + 1;
        if ( v8 == -1 )
          KiRemoveSystemWorkPriorityKick(v6);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      break;
    v9 = v6->SchedulerAssist;
    if ( v9 )
    {
      if ( v6->NestingLevel <= 1u )
      {
        v10 = v9[6] - 1;
        v9[6] = v10;
        if ( !v10 )
          KiRemoveSystemWorkPriorityKick(v6);
      }
    }
    do
      KeYieldProcessorEx(v68);
    while ( KiForceIdleLock );
  }
  if ( !CurrentPrcb->ClockOwner || !(unsigned __int8)KeIsForceIdleEngaged() )
    goto LABEL_22;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  ((void (__fastcall *)(_QWORD))PoExecuteIdleCheck)((LARGE_INTEGER)InterruptTimePrecise.QuadPart);
  if ( KiForceIdleWatchdogResetCount == 32 )
  {
    off_140C008C0[0]();
    v13 = 0;
  }
  else
  {
    v13 = KiForceIdleWatchdogResetCount + 1;
  }
  KiForceIdleWatchdogResetCount = v13;
  if ( (unsigned __int64)(InterruptTimePrecise.QuadPart - KiForceIdleActiveLastStartTime) > 0x1312D00 )
  {
    LOBYTE(v12) = 1;
    KiResetForceIdle(2LL, v12);
LABEL_22:
    v14 = 0;
    goto LABEL_23;
  }
  ++qword_140C316B0;
  v14 = 1;
  v5 = (LARGE_INTEGER *)((char *)&KiClockTickSkipTraces + 16 * (unsigned int)KiClockTickSkipTraceIndex);
  v76 = 1;
  KiClockTickSkipTraceIndex = ((_BYTE)KiClockTickSkipTraceIndex + 1) & 0xF;
  LOBYTE(v5->LowPart) = 0;
  v5[1] = InterruptTimePrecise;
LABEL_23:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v15 = KeGetCurrentPrcb();
  v16 = v15->SchedulerAssist;
  if ( v16 )
  {
    if ( v15->NestingLevel <= 1u )
    {
      v17 = v16[6] - 1;
      v16[6] = v17;
      if ( !v17 )
        KiRemoveSystemWorkPriorityKick(v15);
    }
  }
  _enable();
  if ( !v14 )
  {
LABEL_28:
    v18 = *(_BYTE *)(a1 + 368) & 1;
    if ( CurrentPrcb->ClockOwner )
    {
      v19 = 3LL * (unsigned int)KiClockTickTraceIndex;
      KiClockTickTraceIndex = ((_BYTE)KiClockTickTraceIndex + 1) & 0xF;
      v20 = (_QWORD *)((char *)&KiClockTickTraces + 8 * v19);
      v21 = KiClockOwnerOneShotRequestState == 1;
      v20[1] = MEMORY[0xFFFFF78000000008];
      if ( v21 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v23 = KeGetCurrentPrcb()->SchedulerAssist;
          v23[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
        }
        KiClockOwnerOneShotRequestState = 2;
        KiClockOwnerOneShotRequest = 0LL;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v24 = KeGetCurrentIrql();
            if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
            {
              v25 = KeGetCurrentPrcb();
              v26 = v25->SchedulerAssist;
              v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v21 = (v27 & v26[5]) == 0;
              v26[5] &= v27;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick(v25);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      KiUpdateTime(v18, a2);
      if ( KiClockOwnerOneShotRequestState == 2 )
      {
        v28 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 <= 0xFu )
        {
          v29 = KeGetCurrentPrcb()->SchedulerAssist;
          v29[5] |= (-1 << (v28 + 1)) & 0xFFFC;
        }
        KiSetClockIntervalToMinimumRequested();
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v30 = KeGetCurrentIrql();
            if ( v30 <= 0xFu && v28 <= 0xFu && v30 >= 2u )
            {
              v31 = KeGetCurrentPrcb();
              v32 = v31->SchedulerAssist;
              v33 = ~(unsigned __int16)(-1LL << (v28 + 1));
              v21 = (v33 & v32[5]) == 0;
              v32[5] &= v33;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick(v31);
            }
          }
        }
        __writecr8(v28);
      }
      *v20 = MEMORY[0xFFFFF78000000350];
      v34 = MEMORY[0xFFFFF78000000008];
      if ( KiClockState == 2 )
      {
        KiRestoreClockTickRate(MEMORY[0xFFFFF78000000008], &v70, &v71);
        _InterlockedExchange(&KiClockState, 0);
        KiEventClockStateChange(0LL, 2LL, &v71, &v70);
      }
      v35 = v34 + (unsigned int)KeTimeIncrement;
      v20[2] = v34;
      KiClockTimerNextTickTime = v35;
      goto LABEL_117;
    }
    v36 = KeGetCurrentPrcb();
    v37 = v75;
    ++v36->ClockInterrupts;
    ++v36->InterruptLastCount;
    _disable();
    v38 = MEMORY[0xFFFFF78000000320];
    if ( (v37 & 0x200) != 0 )
      _enable();
    KeAccumulateTicks((_DWORD)v36, v36->LastTick, MEMORY[0xFFFFF78000000320], a2, v18);
    CurrentThread = v36->CurrentThread;
    v36->ClockKeepAlive = 1;
    if ( CurrentThread != v36->IdleThread )
    {
      if ( CurrentThread->CycleTime >= CurrentThread->QuantumTarget )
        goto LABEL_103;
      SystemHeteroCpuPolicy = CurrentThread->SystemHeteroCpuPolicy;
      v72 = 0LL;
      v69 = 0LL;
      v73 = 0LL;
      if ( SystemHeteroCpuPolicy )
      {
        if ( SystemHeteroCpuPolicy >= 5 )
          SystemHeteroCpuPolicy = KiConvertDynamicHeteroPolicy(CurrentThread, v39, v36);
        ParentNode = v36->ParentNode;
        KiGenerateHeteroSets(
          (_DWORD)ParentNode,
          CurrentThread->Affinity.Mask,
          SystemHeteroCpuPolicy,
          (unsigned int)&v69,
          (__int64)&v73,
          (__int64)&v72);
        if ( (v72 & v36->GroupSetMember) == 0
          || (unsigned __int8)KiIsQosGroupingActive(
                                PrcbFlags,
                                v36->ParentNode->QosGroupingSets.SmtSet,
                                ParentNode->IdleNonParkedCpuSet)
          && (v44 & v45) != 0
          && (unsigned int)(unsigned __int8)CurrentThread->ThreadFlags2 - 1 <= 1
          && (v44 & v36->GroupSetMember) == 0 )
        {
          goto LABEL_103;
        }
        if ( (v69 & v36->GroupSetMember) == 0 )
        {
          if ( (v45 & ParentNode->IdleSmtSet) != 0 )
            v45 &= ParentNode->IdleSmtSet;
          if ( (v45 & v69) != 0 )
            goto LABEL_103;
          v46 = v45 & v73 & ~v69;
          if ( SystemHeteroCpuPolicy - 3 <= 1 )
            EfficiencySchedulingClass = v36->PowerState.EfficiencySchedulingClass;
          else
            EfficiencySchedulingClass = v36->PowerState.PerformanceSchedulingClass;
          if ( v46 )
          {
            v48 = ParentNode->Affinity.Group << 6;
            do
            {
              _BitScanReverse64(&v49, v46);
              v68[1] = v49;
              v50 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v48 + v49)]];
              v51 = SystemHeteroCpuPolicy - 3 <= 1 ? *(_BYTE *)(v50 + 33210) : *(_BYTE *)(v50 + 33209);
              if ( v51 > EfficiencySchedulingClass )
                goto LABEL_103;
              v46 &= ~*(_QWORD *)(v50 + 200);
            }
            while ( v46 );
          }
        }
      }
      v52 = KeGetCurrentPrcb();
      PrcbFlags = (unsigned int)v52->PrcbFlags.PrcbFlags;
      if ( (PrcbFlags & 0x300) != 0 )
      {
        _disable();
        PrcbFlags = (unsigned int)v52->PrcbFlags.PrcbFlags;
        v53 = v52->PrcbFlags.PrcbFlags & 0xFFFFFCFF;
        v54 = (v37 & 0x200) != 0;
        if ( (unsigned __int8)PrcbFlags != LOBYTE(CurrentThread->ThreadFlags2) )
        {
          v55 = v53 | ((CurrentThread->ThreadFlags2 & 3) << 8);
          v52->PrcbFlags.PrcbFlags = v55;
          v56 = PoSetProcessorQoS(v52, (v55 >> 8) & 3);
          v53 = v52->PrcbFlags.PrcbFlags;
          if ( !v56 )
          {
LABEL_89:
            if ( (v53 & 0x300) == 0 )
              KeUpdatePendingQosRequest(v52);
            if ( v54 )
              _enable();
            goto LABEL_95;
          }
          v53 &= 0xFFFFFCFF;
        }
        v52->PrcbFlags.PrcbFlags = v53;
        goto LABEL_89;
      }
      if ( (unsigned __int8)PrcbFlags != LOBYTE(CurrentThread->ThreadFlags2) )
        KeCheckAndApplyBamQos(v52, CurrentThread);
    }
LABEL_95:
    if ( MEMORY[0xFFFFF78000000320] <= v36->GenerationTarget )
    {
      SchedulingGroup = CurrentThread->SchedulingGroup;
      if ( !SchedulingGroup || (PrcbFlags = (__int64)SchedulingGroup + v36->ScbOffset) == 0 )
      {
LABEL_111:
        if ( (signed int)(v36->ReadyScanTick - v38) < 0
          && (!(unsigned int)KiShouldScanSharedReadyQueue(v36) || (v36->SharedReadyQueue->ReadySummary & 0x7FFE) == 0)
          && (v36->ReadySummary & 0x7FFE) == 0 )
        {
          v36->ReadyScanTick = v38 + 75;
        }
LABEL_117:
        if ( !v76 )
          return;
        goto LABEL_118;
      }
      while ( 1 )
      {
        v58 = *(_BYTE *)(PrcbFlags + 112);
        v59 = PrcbFlags - v36->ScbOffset;
        v60 = v58 & 0x10;
        if ( (v58 & 4) != 0 )
        {
          if ( v60 )
            goto LABEL_108;
          if ( (v58 & 2) == 0 )
          {
            if ( *(__int64 *)(v59 + 48) <= 0 )
              break;
LABEL_108:
            v61 = *(_QWORD *)(PrcbFlags + 24);
LABEL_109:
            if ( *(_QWORD *)PrcbFlags >= v61 )
              break;
          }
        }
        else
        {
          if ( v60 )
          {
            v61 = *(_QWORD *)(PrcbFlags + 8);
            goto LABEL_109;
          }
          if ( (v58 & 2) == 0 && *(__int64 *)(v59 + 48) <= 0 )
            break;
        }
        PrcbFlags = *(_QWORD *)(PrcbFlags + 408);
        if ( !PrcbFlags )
          goto LABEL_111;
      }
    }
LABEL_103:
    v36->QuantumEnd = 1;
    if ( v36->NestingLevel )
    {
      v36->InterruptRequest = 1;
    }
    else
    {
      LOBYTE(PrcbFlags) = 2;
      HalRequestSoftwareInterrupt(PrcbFlags);
    }
    goto LABEL_117;
  }
LABEL_118:
  if ( KiClockOwnerOneShotRequestState == 1 )
  {
    v62 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v62 <= 0xFu )
    {
      v63 = KeGetCurrentPrcb()->SchedulerAssist;
      v63[5] |= (-1 << (v62 + 1)) & 0xFFFC;
    }
    KiClockOwnerOneShotRequestState = 2;
    KiSetClockIntervalToMinimumRequested();
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v64 = KeGetCurrentIrql();
        if ( v64 <= 0xFu && v62 <= 0xFu && v64 >= 2u )
        {
          v65 = KeGetCurrentPrcb();
          v66 = v65->SchedulerAssist;
          v67 = ~(unsigned __int16)(-1LL << (v62 + 1));
          v21 = (v67 & v66[5]) == 0;
          v66[5] &= v67;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v65);
        }
      }
    }
    __writecr8(v62);
    if ( v5 )
      LOBYTE(v5->LowPart) = 1;
    ++qword_140C316B8;
  }
}
