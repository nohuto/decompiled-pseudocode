/*
 * XREFs of KiUpdateRunTime @ 0x14022ECE0
 * Callers:
 *     KiUpdateTime @ 0x14022BD80 (KiUpdateTime.c)
 *     KeClockInterruptNotify @ 0x14022CD80 (KeClockInterruptNotify.c)
 * Callees:
 *     KiSetClockTimer @ 0x14022AC78 (KiSetClockTimer.c)
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KeAccumulateTicks @ 0x14022F310 (KeAccumulateTicks.c)
 *     KiCheckPreferredHeteroProcessor @ 0x14022FC90 (KiCheckPreferredHeteroProcessor.c)
 *     HalRequestSoftwareInterrupt @ 0x140230830 (HalRequestSoftwareInterrupt.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiShouldScanSharedReadyQueue @ 0x1402AC388 (KiShouldScanSharedReadyQueue.c)
 *     KiSetDpcRequestFlag @ 0x1402B791C (KiSetDpcRequestFlag.c)
 *     KiRequestSoftwareInterrupt @ 0x1402B7A24 (KiRequestSoftwareInterrupt.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeCheckAndApplyBamQos @ 0x140458D70 (KeCheckAndApplyBamQos.c)
 *     KeUpdatePendingQosRequest @ 0x140458E7C (KeUpdatePendingQosRequest.c)
 *     PoSetProcessorQoS @ 0x14045A860 (PoSetProcessorQoS.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall KiUpdateRunTime(char a1, unsigned __int8 a2, int a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int16 v5; // si
  volatile signed __int32 *SchedulerAssist; // r9
  int v9; // r13d
  unsigned int LastTick; // ebx
  struct _KPRCB *v11; // rcx
  signed __int32 *v12; // r8
  unsigned __int64 i; // rcx
  __int64 v14; // rdx
  _KTHREAD *CurrentThread; // r14
  unsigned __int64 result; // rax
  struct _KPRCB *v17; // rbx
  _KPRCBFLAG v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rbx
  LARGE_INTEGER v21; // rbp
  __int64 v22; // r15
  LARGE_INTEGER v23; // rax
  int v24; // r13d
  __int64 v25; // rdx
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  __int64 CurrentIrql; // rcx
  __int64 v29; // rbx
  LARGE_INTEGER v30; // rbp
  unsigned __int64 v31; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rbx
  unsigned int v35; // ebp
  unsigned __int8 v36; // bl
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  unsigned __int8 v38; // bl
  char v39; // dl
  unsigned __int64 v40; // r8
  char v41; // r8
  unsigned __int8 v42; // bl
  __int64 v43; // rdx
  _DWORD *v44; // r9
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  bool v48; // zf
  volatile signed __int32 *v49; // rcx
  _KPRCBFLAG v50; // ecx
  bool v51; // si
  unsigned int PrcbFlags; // ecx
  struct _KPRCB *v53; // rcx
  signed __int32 *v54; // r8
  signed __int32 v55; // eax
  signed __int32 v56; // ett
  _DWORD *v57; // r8
  __int64 v58; // r11
  struct _KPRCB *v59; // r9
  _DWORD *v60; // r8
  int v61; // eax
  _DWORD *v62; // r10
  __int64 v63; // r11
  unsigned __int8 v64; // cl
  struct _KPRCB *v65; // r9
  _DWORD *v66; // r8
  int v67; // eax
  char v68; // [rsp+30h] [rbp-178h] BYREF
  char v69; // [rsp+31h] [rbp-177h] BYREF
  char v70; // [rsp+32h] [rbp-176h] BYREF
  int v71; // [rsp+34h] [rbp-174h]
  __int64 v72; // [rsp+38h] [rbp-170h]
  int v73; // [rsp+40h] [rbp-168h] BYREF
  int v74; // [rsp+44h] [rbp-164h] BYREF
  int v75; // [rsp+48h] [rbp-160h]
  int v76; // [rsp+4Ch] [rbp-15Ch] BYREF
  __int64 v77; // [rsp+50h] [rbp-158h]
  __int64 v78; // [rsp+58h] [rbp-150h]
  __int64 v79; // [rsp+60h] [rbp-148h]
  __int64 v80; // [rsp+68h] [rbp-140h] BYREF
  __int64 v81; // [rsp+70h] [rbp-138h] BYREF
  unsigned __int64 v82; // [rsp+78h] [rbp-130h] BYREF
  unsigned __int64 v83; // [rsp+80h] [rbp-128h] BYREF
  __int64 v84; // [rsp+88h] [rbp-120h]
  char v85[32]; // [rsp+90h] [rbp-118h] BYREF
  __int64 *v86; // [rsp+B0h] [rbp-F8h]
  __int64 v87; // [rsp+B8h] [rbp-F0h]
  __int64 *v88; // [rsp+C0h] [rbp-E8h]
  __int64 v89; // [rsp+C8h] [rbp-E0h]
  unsigned __int64 *v90; // [rsp+D0h] [rbp-D8h]
  __int64 v91; // [rsp+D8h] [rbp-D0h]
  unsigned __int64 *v92; // [rsp+E0h] [rbp-C8h]
  __int64 v93; // [rsp+E8h] [rbp-C0h]
  int *v94; // [rsp+F0h] [rbp-B8h]
  __int64 v95; // [rsp+F8h] [rbp-B0h]
  int *v96; // [rsp+100h] [rbp-A8h]
  __int64 v97; // [rsp+108h] [rbp-A0h]
  char *v98; // [rsp+110h] [rbp-98h]
  __int64 v99; // [rsp+118h] [rbp-90h]
  char *v100; // [rsp+120h] [rbp-88h]
  __int64 v101; // [rsp+128h] [rbp-80h]
  char v102[32]; // [rsp+130h] [rbp-78h] BYREF
  int *v103; // [rsp+150h] [rbp-58h]
  __int64 v104; // [rsp+158h] [rbp-50h]
  char *v105; // [rsp+160h] [rbp-48h]
  __int64 v106; // [rsp+168h] [rbp-40h]
  int v107; // [rsp+1A0h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = v107;
  ++CurrentPrcb->ClockInterrupts;
  ++CurrentPrcb->InterruptLastCount;
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  v9 = MEMORY[0xFFFFF78000000320];
  LastTick = CurrentPrcb->LastTick;
  v75 = MEMORY[0xFFFFF78000000320];
  if ( (v5 & 0x200) != 0 )
  {
    v11 = KeGetCurrentPrcb();
    v12 = (signed __int32 *)v11->SchedulerAssist;
    if ( v12 )
    {
      _m_prefetchw(v12);
      v26 = *v12;
      do
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange(v12, v26 & 0xFFDFFFFF, v26);
      }
      while ( v27 != v26 );
      if ( (v26 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
    _enable();
  }
  KeAccumulateTicks((_DWORD)CurrentPrcb, LastTick, v9, a2, a1, a3);
  CurrentPrcb->ClockKeepAlive = 1;
  LODWORD(v14) = 0x8000;
  v77 = 0x8000LL;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    v72 = CurrentIrql;
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      v44 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( (_BYTE)CurrentIrql != 15 )
        v14 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 0xFFFC;
      v44[5] |= v14;
    }
    v79 = -(__int64)(unsigned int)KeMaximumIncrement;
    v71 = KeMinimumIncrement;
    while ( 1 )
    {
      v29 = MEMORY[0xFFFFF78000000340];
      if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
      {
        v30.QuadPart = MEMORY[0xFFFFF78000000350];
        v31 = MEMORY[0xFFFFF78000000008];
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        if ( MEMORY[0xFFFFF78000000340] == v29 )
          break;
      }
      _mm_pause();
    }
    if ( PerformanceCounter.QuadPart <= (unsigned __int64)v30.QuadPart )
    {
      i = v31;
    }
    else
    {
      v78 = 0LL;
      v33 = -1 - v30.QuadPart + PerformanceCounter.QuadPart;
      if ( MEMORY[0xFFFFF78000000369] )
        v33 <<= MEMORY[0xFFFFF78000000369];
      v78 = ((unsigned __int64)v33 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      i = v78 + v31;
    }
    v5 = v107;
    v34 = i - v79;
    v35 = v71;
    if ( (unsigned int)dword_140C02F28 > 5 )
    {
      v86 = &v80;
      v83 = i;
      v80 = v79;
      v81 = -v79;
      v87 = 8LL;
      v88 = &v81;
      v89 = 8LL;
      v90 = &v82;
      v82 = i - v79;
      v92 = &v83;
      v94 = &v73;
      v96 = &v74;
      v98 = &v68;
      v100 = &v69;
      v91 = 8LL;
      v93 = 8LL;
      v73 = v71;
      v95 = 4LL;
      v74 = 3;
      v97 = 4LL;
      v68 = 1;
      v99 = 1LL;
      v69 = 0;
      v101 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(&dword_140C02F28, &byte_14002D297, 0LL, 0LL, 10, v85);
    }
    CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TypeFlags |= 3u;
    CurrentPrcb->ClockTimerState.ClockTimerEntries[3].DueTime = v34;
    v36 = v72;
    CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TolerableDelay = v35;
    if ( KiIrqlFlags )
    {
      i = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)i <= 0xFu && v36 <= 0xFu && (unsigned __int8)i >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        i = (unsigned int)v36 + 1;
        v46 = v45->SchedulerAssist;
        v47 = ~(unsigned __int16)(-1LL << (v36 + 1));
        v48 = (v47 & v46[5]) == 0;
        v46[5] &= v47;
        if ( v48 )
          KiRemoveSystemWorkPriorityKick(v45);
      }
    }
    __writecr8(v36);
    LODWORD(v14) = v77;
  }
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( CurrentThread != CurrentPrcb->IdleThread )
  {
    if ( ((unsigned int)v14 & KiVelocityFlags) != 0 && (signed int)(CurrentPrcb->NormalPriorityReadyScanTick - v9) < 0 )
    {
      if ( (unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb)
        && (CurrentPrcb->SharedReadyQueue->ReadySummary & 0x300) != 0
        || (CurrentPrcb->ReadySummary & 0x300) != 0 )
      {
        KiSetDpcRequestFlag(&CurrentPrcb->13244, 64LL);
        LOBYTE(v43) = 2;
        KiRequestSoftwareInterrupt(CurrentPrcb, v43);
      }
      else
      {
        i = (unsigned int)(v9 + KiNormalPriorityBoostScanLatencyTicks);
        CurrentPrcb->NormalPriorityReadyScanTick = i;
      }
    }
    result = CurrentThread->CycleTime;
    if ( result >= CurrentThread->QuantumTarget )
      goto LABEL_23;
    result = KiCheckPreferredHeteroProcessor(CurrentThread, CurrentPrcb, 1LL);
    if ( (_DWORD)result )
      goto LABEL_23;
    v17 = KeGetCurrentPrcb();
    v18.PrcbFlags = (volatile int)v17->PrcbFlags;
    if ( (v18.PrcbFlags & 0x300) != 0 )
    {
      _disable();
      v49 = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      if ( v49 )
        _InterlockedOr(v49, 0x200000u);
      v50.PrcbFlags = (volatile int)v17->PrcbFlags;
      v51 = (v5 & 0x200) != 0;
      if ( (unsigned __int8)CurrentThread->ThreadFlags2 == LOBYTE(v50.PrcbFlags) )
      {
        PrcbFlags = v50.PrcbFlags & 0xFFFFFCFF;
        v17->PrcbFlags.PrcbFlags = PrcbFlags;
      }
      else
      {
        if ( (unsigned __int8)PoSetProcessorQoS(v17) )
          v17->PrcbFlags.PrcbFlags &= 0xFFFFFCFF;
        PrcbFlags = v17->PrcbFlags.PrcbFlags;
      }
      if ( (PrcbFlags & 0x300) == 0 )
        KeUpdatePendingQosRequest(v17);
      if ( v51 )
      {
        v53 = KeGetCurrentPrcb();
        v54 = (signed __int32 *)v53->SchedulerAssist;
        if ( v54 )
        {
          _m_prefetchw(v54);
          v55 = *v54;
          do
          {
            v56 = v55;
            v55 = _InterlockedCompareExchange(v54, v55 & 0xFFDFFFFF, v55);
          }
          while ( v56 != v55 );
          if ( (v55 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v53);
        }
        _enable();
      }
    }
    else if ( LOBYTE(CurrentThread->ThreadFlags2) != LOBYTE(v18.PrcbFlags) )
    {
      KeCheckAndApplyBamQos(v17, CurrentThread);
    }
  }
  v19 = 0LL;
  while ( 1 )
  {
    v20 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v21.QuadPart = MEMORY[0xFFFFF78000000350];
      v22 = MEMORY[0xFFFFF78000000008];
      v23 = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v20 )
        break;
    }
    _mm_pause();
  }
  v24 = v75;
  if ( v23.QuadPart > (unsigned __int64)v21.QuadPart )
  {
    v84 = 0LL;
    v25 = -1 - v21.QuadPart + v23.QuadPart;
    if ( MEMORY[0xFFFFF78000000369] )
      v25 <<= MEMORY[0xFFFFF78000000369];
    v19 = ((unsigned __int64)v25 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
    v84 = v19;
  }
  i = CurrentPrcb->GenerationTarget * (unsigned int)KeMaximumIncrement;
  result = MEMORY[0xFFFFF78000000320];
  if ( MEMORY[0xFFFFF78000000320] > CurrentPrcb->GenerationTarget )
  {
    if ( KiClockTimerPerCpuTickScheduling )
    {
      v38 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v38 <= 0xFu )
      {
        v57 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v38 == 15 )
        {
          LODWORD(v58) = v77;
        }
        else
        {
          i = (unsigned int)v38 + 1;
          v58 = (-1LL << (v38 + 1)) & 0xFFFC;
        }
        v57[5] |= v58;
      }
      CurrentPrcb->ClockTimerState.ClockTimerEntries[4].TypeFlags &= ~1u;
      if ( (unsigned int)dword_140C02F28 > 5 )
      {
        v76 = 4;
        v103 = &v76;
        v104 = 4LL;
        v105 = &v70;
        v70 = 0;
        v106 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(&dword_140C02F28, byte_14002D25B, 0LL, 0LL, 4, v102);
      }
      if ( KiIrqlFlags )
      {
        i = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)i <= 0xFu && v38 <= 0xFu && (unsigned __int8)i >= 2u )
        {
          v59 = KeGetCurrentPrcb();
          i = (unsigned int)v38 + 1;
          v60 = v59->SchedulerAssist;
          v61 = ~(unsigned __int16)(-1LL << (v38 + 1));
          v48 = (v61 & v60[5]) == 0;
          v60[5] &= v61;
          if ( v48 )
            KiRemoveSystemWorkPriorityKick(v59);
        }
      }
      result = v38;
      __writecr8(v38);
    }
LABEL_23:
    CurrentPrcb->QuantumEnd = 1;
    if ( CurrentPrcb->NestingLevel )
    {
      CurrentPrcb->InterruptRequest = 1;
    }
    else
    {
      LOBYTE(i) = 2;
      return HalRequestSoftwareInterrupt(i);
    }
    return result;
  }
  if ( v19 + v22 > i && KiClockTimerPerCpuTickScheduling )
  {
    v41 = CurrentPrcb->GroupSchedulingOverQuota == 0;
    v42 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v42 <= 0xFu )
    {
      v62 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v42 == 15 )
        LODWORD(v63) = v77;
      else
        v63 = (-1LL << (v42 + 1)) & 0xFFFC;
      v62[5] |= v63;
    }
    KiSetClockTimer((__int64)CurrentPrcb, -(__int64)(unsigned int)KeMaximumIncrement, KeMinimumIncrement, 4, v41, 0);
    if ( KiIrqlFlags )
    {
      v64 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v64 <= 0xFu && v42 <= 0xFu && v64 >= 2u )
      {
        v65 = KeGetCurrentPrcb();
        v66 = v65->SchedulerAssist;
        v67 = ~(unsigned __int16)(-1LL << (v42 + 1));
        v48 = (v67 & v66[5]) == 0;
        v66[5] &= v67;
        if ( v48 )
          KiRemoveSystemWorkPriorityKick(v65);
      }
    }
    result = v42;
    __writecr8(v42);
  }
  SchedulingGroup = CurrentThread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    result = CurrentPrcb->ScbOffset;
    for ( i = (unsigned __int64)SchedulingGroup + result; i; i = *(_QWORD *)(i + 408) )
    {
      result = CurrentPrcb->ScbOffset;
      v39 = *(_BYTE *)(i + 112);
      v40 = i - result;
      if ( (v39 & 4) != 0 )
      {
        result = *(_QWORD *)(i + 24);
        if ( *(_QWORD *)i >= result )
          goto LABEL_23;
      }
      else if ( (v39 & 0x20) == 0 )
      {
        result = *(_QWORD *)(i + 8);
        if ( *(_QWORD *)i > result )
          goto LABEL_23;
      }
      if ( (v39 & 0x12) == 0 )
      {
        result = *(_QWORD *)(v40 + 48);
        if ( (__int64)result <= 0 )
          goto LABEL_23;
      }
    }
  }
  if ( (signed int)(CurrentPrcb->ReadyScanTick - v24) < 0 )
  {
    result = KiShouldScanSharedReadyQueue(CurrentPrcb);
    if ( !(_DWORD)result || (result = CurrentPrcb->SharedReadyQueue->ReadySummary, (result & 0x7FFE) == 0) )
    {
      if ( (CurrentPrcb->ReadySummary & 0x7FFE) == 0 )
      {
        result = (unsigned int)(v24 + 75);
        CurrentPrcb->ReadyScanTick = result;
      }
    }
  }
  return result;
}
