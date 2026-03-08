/*
 * XREFs of KeClockInterruptNotify @ 0x14022CD80
 * Callers:
 *     HalpTimerClockInterrupt @ 0x14022C760 (HalpTimerClockInterrupt.c)
 *     HalpTimerClockIpiRoutine @ 0x14022CC70 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14051C3E0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KiUpdateTime @ 0x14022BD80 (KiUpdateTime.c)
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     KiUpdateRunTime @ 0x14022ECE0 (KiUpdateRunTime.c)
 *     KiSetNextClockTickDueTime @ 0x14022FD10 (KiSetNextClockTickDueTime.c)
 *     KeIsForceIdleEngaged @ 0x14024EAFC (KeIsForceIdleEngaged.c)
 *     KiEventClockStateChange @ 0x1402A9ADC (KiEventClockStateChange.c)
 *     KiCancelClockTimer @ 0x1402D94E4 (KiCancelClockTimer.c)
 *     KiRestoreClockTickRate @ 0x1402D9574 (KiRestoreClockTickRate.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x1402DF1B0 (KiSetClockTimerKTimerDeadlines.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     PoExecuteIdleCheck @ 0x1403C65A0 (PoExecuteIdleCheck.c)
 *     KiUpdateTimeAssist @ 0x1403C9BA8 (KiUpdateTimeAssist.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14056DA7C (KiSetClockIntervalToMinimumRequested.c)
 *     KiResetForceIdle @ 0x14057ACCC (KiResetForceIdle.c)
 */

unsigned __int64 __fastcall KeClockInterruptNotify(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  __int64 v3; // rdi
  char v4; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  char *v9; // r14
  __int64 ClockTickTraceIndex; // rcx
  char *v11; // r14
  unsigned __int8 v12; // bl
  __int64 v13; // rbx
  LARGE_INTEGER v14; // r15
  __int64 v15; // r13
  LARGE_INTEGER PerformanceCounter; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 result; // rax
  bool v20; // zf
  char *v21; // r13
  __int64 v22; // rcx
  unsigned __int8 v23; // bl
  unsigned __int64 v24; // rax
  __int64 v25; // rbx
  unsigned __int8 v26; // bl
  unsigned __int8 v27; // cl
  unsigned __int8 v28; // r10
  struct _KPRCB *v29; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 v31; // r10
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  __int64 InterruptTimePrecise; // rax
  __int64 v35; // rdx
  __int64 v36; // r13
  int v37; // eax
  _DWORD *v38; // r9
  __int64 v39; // rdx
  unsigned __int8 v40; // cl
  struct _KPRCB *v41; // r11
  _DWORD *v42; // r9
  int v43; // eax
  _DWORD *v44; // r9
  __int64 v45; // rdx
  unsigned __int8 v46; // cl
  _DWORD *v47; // r9
  int v48; // eax
  _DWORD *v49; // r9
  __int64 v50; // rdx
  unsigned __int8 v51; // cl
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  _DWORD *v55; // r9
  __int64 v56; // rdx
  unsigned __int8 v57; // cl
  _DWORD *v58; // r9
  int v59; // eax
  __int16 v60; // r13
  volatile signed __int32 *v61; // rcx
  struct _KPRCB *v62; // rcx
  signed __int32 *v63; // r8
  signed __int32 v64; // eax
  signed __int32 v65; // ett
  unsigned __int8 CurrentIrql; // r13
  _DWORD *v67; // r9
  __int64 v68; // rdx
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // r10
  _DWORD *v71; // r9
  int v72; // eax
  _DWORD *v73; // r9
  __int64 v74; // rdx
  unsigned __int8 v75; // cl
  struct _KPRCB *v76; // r10
  _DWORD *v77; // r9
  int v78; // eax
  unsigned __int8 v79; // bl
  _DWORD *v80; // r8
  unsigned __int8 v81; // al
  struct _KPRCB *v82; // r9
  _DWORD *v83; // r8
  int v84; // eax
  unsigned __int8 v85; // bl
  _DWORD *v86; // r9
  unsigned __int8 v87; // al
  struct _KPRCB *v88; // r9
  _DWORD *v89; // r8
  int v90; // eax
  unsigned __int8 v91; // [rsp+28h] [rbp-70h]
  LARGE_INTEGER v92; // [rsp+30h] [rbp-68h] BYREF
  __int64 v93; // [rsp+38h] [rbp-60h] BYREF
  __int64 v94; // [rsp+40h] [rbp-58h] BYREF
  char *v95; // [rsp+48h] [rbp-50h]
  __int64 v96; // [rsp+50h] [rbp-48h]
  int v97; // [rsp+90h] [rbp-8h]
  int v98; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0;
  v94 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v92.QuadPart = 0LL;
  v9 = 0LL;
  v95 = 0LL;
  v93 = 0LL;
  if ( KiForceIdleDisabled || !CurrentPrcb->ClockOwner )
    goto LABEL_2;
  _disable();
  v98 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v98);
    while ( KiForceIdleLock );
  }
  if ( (unsigned __int8)KeIsForceIdleEngaged() )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v92);
    v36 = InterruptTimePrecise;
    if ( !KiClockTimerPerCpuTickScheduling )
      PoExecuteIdleCheck(InterruptTimePrecise);
    if ( KiForceIdleWatchdogResetCount == 32 )
    {
      off_140C01CD0[0]();
      v37 = 0;
    }
    else
    {
      v37 = KiForceIdleWatchdogResetCount + 1;
    }
    KiForceIdleWatchdogResetCount = v37;
    if ( (unsigned __int64)(v36 - KiForceIdleActiveLastStartTime) > 0x1312D00 )
    {
      LOBYTE(v35) = 1;
      KiResetForceIdle(2LL, v35);
    }
    else
    {
      ++qword_140C41810;
      v4 = 1;
      v9 = (char *)&KiClockTickSkipTraces + 16 * (unsigned int)KiClockTickSkipTraceIndex;
      v95 = v9;
      KiClockTickSkipTraceIndex = ((_BYTE)KiClockTickSkipTraceIndex + 1) & 0xF;
      *v9 = 0;
      *((_QWORD *)v9 + 1) = v36;
    }
  }
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v29 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v29->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v32 = *SchedulerAssist;
    do
    {
      v33 = v32;
      v32 = _InterlockedCompareExchange(SchedulerAssist, v32 & 0xFFDFFFFF, v32);
    }
    while ( v33 != v32 );
    if ( (v32 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v29);
  }
  _enable();
  if ( !v4 )
  {
LABEL_2:
    ClockTickTraceIndex = CurrentPrcb->ClockTimerState.ClockTickTraceIndex;
    CurrentPrcb->ClockTimerState.ClockTickTraceIndex = ((_BYTE)ClockTickTraceIndex + 1) & 0xF;
    v11 = (char *)CurrentPrcb->ClockTimerState.ClockTickTraces + 32 * ClockTickTraceIndex + 8 * ClockTickTraceIndex;
    *((_QWORD *)v11 + 1) = MEMORY[0xFFFFF78000000008];
    v12 = *(_BYTE *)(a1 + 368) & 1;
    if ( !CurrentPrcb->ClockOwner )
    {
      if ( KiClockTimerPerCpuTickScheduling && !KiSerializeTimerExpiration )
      {
        v60 = v97;
        _disable();
        v61 = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
        if ( v61 )
          _InterlockedOr(v61, 0x200000u);
        KiUpdateTimeAssist(0LL, 0LL, &v92, &v92);
        if ( (v60 & 0x200) != 0 )
        {
          v62 = KeGetCurrentPrcb();
          v63 = (signed __int32 *)v62->SchedulerAssist;
          if ( v63 )
          {
            _m_prefetchw(v63);
            v64 = *v63;
            do
            {
              v65 = v64;
              v64 = _InterlockedCompareExchange(v63, v64 & 0xFFDFFFFF, v64);
            }
            while ( v65 != v64 );
            if ( (v64 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v62);
          }
          _enable();
        }
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v67 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 15 )
            LODWORD(v68) = 0x8000;
          else
            v68 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
          v67[5] |= v68;
        }
        KiSetClockTimerKTimerDeadlines(CurrentPrcb, 0LL);
        if ( KiIrqlFlags )
        {
          v69 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v69 <= 0xFu && CurrentIrql <= 0xFu && v69 >= 2u )
          {
            v70 = KeGetCurrentPrcb();
            v71 = v70->SchedulerAssist;
            v72 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v20 = (v72 & v71[5]) == 0;
            v71[5] &= v72;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(v70);
          }
        }
        __writecr8(CurrentIrql);
      }
      KiUpdateRunTime(v12, a2, a3);
      while ( 1 )
      {
        v13 = MEMORY[0xFFFFF78000000340];
        if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
        {
          v14.QuadPart = MEMORY[0xFFFFF78000000350];
          v15 = MEMORY[0xFFFFF78000000008];
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v17 = MEMORY[0xFFFFF78000000340];
          if ( MEMORY[0xFFFFF78000000340] == v13 )
            break;
        }
        _mm_pause();
      }
      v92 = PerformanceCounter;
      if ( PerformanceCounter.QuadPart > (unsigned __int64)v14.QuadPart )
      {
        v96 = 0LL;
        v18 = -1 - v14.QuadPart + PerformanceCounter.QuadPart;
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v17 = MEMORY[0xFFFFF78000000369];
          v18 <<= MEMORY[0xFFFFF78000000369];
        }
        v3 = ((unsigned __int64)v18 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
        v96 = v3;
      }
      *((_QWORD *)v11 + 2) = v3 + v15;
      *(_QWORD *)v11 = MEMORY[0xFFFFF78000000350];
      result = __rdtsc();
      v11[32] = 0;
      v20 = KiClockTimerPerCpuTickScheduling == 0;
      *((_QWORD *)v11 + 3) = result;
      if ( !v20 )
      {
        v26 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 <= 0xFu )
        {
          v73 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v26 == 15 )
          {
            LODWORD(v74) = 0x8000;
          }
          else
          {
            v17 = (unsigned int)v26 + 1;
            v74 = (-1LL << (v26 + 1)) & 0xFFFC;
          }
          v73[5] |= v74;
        }
        if ( CurrentPrcb->ClockTimerState.OneShotState == KClockTimerOneShotArmed )
          CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
        LOBYTE(v17) = 1;
        KiSetNextClockTickDueTime(v17);
        if ( KiIrqlFlags )
        {
          v75 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v75 <= 0xFu && v26 <= 0xFu && v75 >= 2u )
          {
            v76 = KeGetCurrentPrcb();
            v77 = v76->SchedulerAssist;
            v78 = ~(unsigned __int16)(-1LL << (v26 + 1));
            v20 = (v78 & v77[5]) == 0;
            v77[5] &= v78;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(v76);
          }
        }
        result = v26;
        __writecr8(v26);
      }
      return result;
    }
    v21 = (char *)&KiClockTickTraces + 40 * (unsigned int)KiClockTickTraceIndex;
    KiClockTickTraceIndex = ((_BYTE)KiClockTickTraceIndex + 1) & 0xF;
    v20 = KiClockTimerPerCpuTickScheduling == 0;
    *((_QWORD *)v21 + 1) = MEMORY[0xFFFFF78000000008];
    if ( v20 )
    {
      if ( KiClockOwnerOneShotRequestState != 1 )
        goto LABEL_15;
      v28 = KeGetCurrentIrql();
      v91 = v28;
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 <= 0xFu )
      {
        v44 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v28 == 15 )
          LODWORD(v45) = 0x8000;
        else
          v45 = (-1LL << (v28 + 1)) & 0xFFFC;
        v44[5] |= v45;
      }
      KiClockOwnerOneShotRequestState = 2;
      KiClockOwnerOneShotRequest = 0LL;
      if ( !KiIrqlFlags
        || (v46 = KeGetCurrentIrql(), (KiIrqlFlags & 1) == 0)
        || v46 > 0xFu
        || v28 > 0xFu
        || v46 < 2u
        || (v41 = KeGetCurrentPrcb(),
            v47 = v41->SchedulerAssist,
            v48 = ~(unsigned __int16)(-1LL << (v28 + 1)),
            v20 = (v48 & v47[5]) == 0,
            v47[5] &= v48,
            !v20) )
      {
LABEL_36:
        __writecr8(v28);
LABEL_15:
        KiUpdateTime(v12, a2, a3);
        if ( KiClockTimerPerCpuTickScheduling )
        {
          v23 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v23 <= 0xFu )
          {
            v49 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v23 == 15 )
            {
              LODWORD(v50) = 0x8000;
            }
            else
            {
              v22 = (unsigned int)v23 + 1;
              v50 = (-1LL << (v23 + 1)) & 0xFFFC;
            }
            v49[5] |= v50;
          }
          LOBYTE(v22) = 1;
          KiSetNextClockTickDueTime(v22);
          if ( !KiIrqlFlags )
            goto LABEL_18;
          v51 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) == 0 )
            goto LABEL_18;
          if ( v51 > 0xFu )
            goto LABEL_18;
          if ( v23 > 0xFu )
            goto LABEL_18;
          if ( v51 < 2u )
            goto LABEL_18;
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << (v23 + 1));
          v20 = (v54 & v53[5]) == 0;
          v53[5] &= v54;
          if ( !v20 )
            goto LABEL_18;
        }
        else
        {
          if ( KiClockOwnerOneShotRequestState != 2 )
          {
LABEL_19:
            *(_QWORD *)v21 = MEMORY[0xFFFFF78000000350];
            *(_QWORD *)v11 = MEMORY[0xFFFFF78000000350];
            *((_QWORD *)v21 + 3) = __rdtsc();
            *((_DWORD *)v21 + 8) = KeGetPcr()->Prcb.Number;
            v24 = __rdtsc();
            v11[32] = 1;
            *((_QWORD *)v11 + 3) = ((unsigned __int64)HIDWORD(v24) << 32) | (unsigned int)v24;
            v25 = MEMORY[0xFFFFF78000000008];
            if ( KiClockState == 2 )
            {
              KiRestoreClockTickRate(MEMORY[0xFFFFF78000000008], &v93, &v94);
              if ( !KiClockTimerPerCpuTickScheduling )
              {
                _InterlockedExchange(&KiClockState, 0);
                KiEventClockStateChange(0LL, 2LL, &v94, &v93);
              }
            }
            KiClockTimerNextTickTime = v25 + (unsigned int)KeTimeIncrement;
            result = v25 + CurrentPrcb->ClockTimerState.TimeIncrement;
            CurrentPrcb->ClockTimerState.NextTickDueTime = result;
            *((_QWORD *)v21 + 2) = v25;
            *((_QWORD *)v11 + 2) = v25;
            return result;
          }
          v23 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v23 <= 0xFu )
          {
            v55 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v23 == 15 )
              LODWORD(v56) = 0x8000;
            else
              v56 = (-1LL << (v23 + 1)) & 0xFFFC;
            v55[5] |= v56;
          }
          KiSetClockIntervalToMinimumRequested();
          if ( !KiIrqlFlags
            || (v57 = KeGetCurrentIrql(), (KiIrqlFlags & 1) == 0)
            || v57 > 0xFu
            || v23 > 0xFu
            || v57 < 2u
            || (v52 = KeGetCurrentPrcb(),
                v58 = v52->SchedulerAssist,
                v59 = ~(unsigned __int16)(-1LL << (v23 + 1)),
                v20 = (v59 & v58[5]) == 0,
                v58[5] &= v59,
                !v20) )
          {
LABEL_18:
            __writecr8(v23);
            goto LABEL_19;
          }
        }
        KiRemoveSystemWorkPriorityKick(v52);
        goto LABEL_18;
      }
    }
    else
    {
      if ( CurrentPrcb->ClockTimerState.OneShotState != KClockTimerOneShotArmed )
        goto LABEL_15;
      v27 = KeGetCurrentIrql();
      v91 = v27;
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 <= 0xFu )
      {
        v38 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v27 == 15 )
          LODWORD(v39) = 0x8000;
        else
          v39 = (-1LL << (v27 + 1)) & 0xFFFC;
        v38[5] |= v39;
      }
      CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
      KiClockOwnerOneShotRequestState = 2;
      KiClockOwnerOneShotRequest = 0LL;
      KiCancelClockTimer(CurrentPrcb, 2LL);
      v28 = v91;
      if ( !KiIrqlFlags )
        goto LABEL_36;
      v40 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_36;
      if ( v40 > 0xFu )
        goto LABEL_36;
      if ( v91 > 0xFu )
        goto LABEL_36;
      if ( v40 < 2u )
        goto LABEL_36;
      v41 = KeGetCurrentPrcb();
      v42 = v41->SchedulerAssist;
      v43 = ~(unsigned __int16)(-1LL << (v91 + 1));
      v20 = (v43 & v42[5]) == 0;
      v42[5] &= v43;
      if ( !v20 )
        goto LABEL_36;
    }
    KiRemoveSystemWorkPriorityKick(v41);
    v28 = v91;
    goto LABEL_36;
  }
  LODWORD(v31) = 0x8000;
  result = 15LL;
  if ( KiClockTimerPerCpuTickScheduling && CurrentPrcb->ClockTimerState.OneShotState == KClockTimerOneShotArmed )
  {
    v79 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v79 <= 0xFu )
    {
      v80 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v79 != 15 )
      {
        v29 = (struct _KPRCB *)((unsigned int)v79 + 1);
        v31 = (-1LL << (v79 + 1)) & 0xFFFC;
      }
      v80[5] |= v31;
    }
    LOBYTE(v29) = 1;
    CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
    KiSetNextClockTickDueTime(v29);
    if ( KiIrqlFlags )
    {
      v81 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v81 <= 0xFu && v79 <= 0xFu && v81 >= 2u )
      {
        v82 = KeGetCurrentPrcb();
        v83 = v82->SchedulerAssist;
        v84 = ~(unsigned __int16)(-1LL << (v79 + 1));
        v20 = (v84 & v83[5]) == 0;
        v83[5] &= v84;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v82);
      }
    }
    result = v79;
    __writecr8(v79);
    if ( !v9 )
      goto LABEL_181;
    goto LABEL_180;
  }
  if ( KiClockOwnerOneShotRequestState == 1 )
  {
    v85 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v85 <= 0xFu )
    {
      v86 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v85 != 15 )
        v31 = (-1LL << (v85 + 1)) & 0xFFFC;
      v86[5] |= v31;
    }
    KiClockOwnerOneShotRequestState = 2;
    KiSetClockIntervalToMinimumRequested();
    if ( KiIrqlFlags )
    {
      v87 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v87 <= 0xFu && v85 <= 0xFu && v87 >= 2u )
      {
        v88 = KeGetCurrentPrcb();
        v89 = v88->SchedulerAssist;
        v90 = ~(unsigned __int16)(-1LL << (v85 + 1));
        v20 = (v90 & v89[5]) == 0;
        v89[5] &= v90;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v88);
      }
    }
    result = v85;
    __writecr8(v85);
    if ( !v9 )
      goto LABEL_181;
LABEL_180:
    *v9 = 1;
LABEL_181:
    ++qword_140C41818;
  }
  return result;
}
