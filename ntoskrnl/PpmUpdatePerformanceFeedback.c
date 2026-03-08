/*
 * XREFs of PpmUpdatePerformanceFeedback @ 0x14022E540
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     PpmSnapPerformanceAccumulation @ 0x140234F00 (PpmSnapPerformanceAccumulation.c)
 *     PpmContinueActiveTimeAccumulation @ 0x140236CD0 (PpmContinueActiveTimeAccumulation.c)
 *     PpmPerfApplyProcessorState @ 0x1402ED59C (PpmPerfApplyProcessorState.c)
 * Callees:
 *     PpmPerfFeedbackCounterRead @ 0x1402301C0 (PpmPerfFeedbackCounterRead.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     HvlGetPpmStatsForProcessor @ 0x1403C3040 (HvlGetPpmStatsForProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056F278 (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall PpmUpdatePerformanceFeedback(__int64 a1, unsigned __int8 a2, char a3, char a4, __int64 *a5)
{
  unsigned int v5; // r15d
  __int64 v8; // rcx
  __int64 v9; // rdx
  char v11; // r14
  __int64 v12; // rbp
  char v13; // r8
  __int64 v14; // rax
  __int64 *v15; // rbx
  volatile signed __int32 *SchedulerAssist; // rcx
  bool v18; // r12
  __int64 v19; // r13
  _QWORD *v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // edx
  int v24; // r8d
  unsigned int v25; // eax
  unsigned int v26; // r9d
  __int64 v27; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v29; // r8
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  __int64 v32; // rax
  __int64 v33; // [rsp+20h] [rbp-58h]
  __int64 v34; // [rsp+28h] [rbp-50h] BYREF
  __int64 v35; // [rsp+30h] [rbp-48h] BYREF
  __int64 v36[7]; // [rsp+38h] [rbp-40h] BYREF
  int v37; // [rsp+70h] [rbp-8h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  __int64 PpmStatsForProcessor; // [rsp+80h] [rbp+8h]
  unsigned int v40; // [rsp+88h] [rbp+10h] BYREF

  v5 = 0;
  v40 = 0;
  v8 = 0LL;
  v34 = 0LL;
  v9 = 0LL;
  PpmStatsForProcessor = 0LL;
  v33 = 0LL;
  if ( *(_DWORD *)(a1 + 33824) == 3 )
  {
    v11 = 1;
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 34512) + 8LL * DWORD2(xmmword_140D17680)) >> 1;
  }
  else
  {
    v11 = 0;
    v12 = 0LL;
  }
  if ( a2
    || (*(_QWORD *)(a1 + 33736)
     || *(_QWORD *)(a1 + 33760)
     && (*(_DWORD *)(a1 + 33096) != *(_DWORD *)(a1 + 33776) || *(_DWORD *)(a1 + 33092) != *(_DWORD *)(a1 + 33780))
     || a3 && v12 != *(_QWORD *)(a1 + 33784))
    && (!a4 || !*(_BYTE *)(a1 + 33818)) )
  {
    v13 = 0;
    v14 = a1 + 33704;
    do
    {
      if ( *(_QWORD *)v14 && *(_BYTE *)(*(_QWORD *)v14 + 32LL) )
      {
        if ( a3 )
          return 0;
        v13 = 1;
      }
      LODWORD(v8) = v8 + 1;
      v14 += 8LL;
    }
    while ( (unsigned int)v8 < 2 );
    if ( v13 || a2 || !a4 )
    {
      _disable();
      SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      if ( SchedulerAssist )
        _InterlockedOr(SchedulerAssist, 0x200000u);
      v18 = (v37 & 0x200) != 0;
      KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 33680));
      v19 = _InterlockedExchange64((volatile __int64 *)(a1 + 33736), 0LL);
      if ( v11 )
      {
        v35 = 0LL;
        PpmStatsForProcessor = HvlGetPpmStatsForProcessor(a1, &v35, &v34);
        v33 = v35;
        v19 = PpmStatsForProcessor - v35 - *(_QWORD *)(a1 + 33792);
        *(_QWORD *)(a1 + 33792) = PpmStatsForProcessor - v35;
      }
      *(_QWORD *)(a1 + 33728) += v19;
      v20 = (_QWORD *)(a1 + 33744);
      do
      {
        v21 = *(v20 - 5);
        if ( v21 )
        {
          PpmPerfFeedbackCounterRead(v21, a2, &v40);
          v22 = v19 * v40;
          *v20 += v22;
          if ( v5 == *(unsigned __int8 *)(a1 + 33816) )
            *(_QWORD *)(a1 + 33760) += v22;
        }
        ++v5;
        ++v20;
      }
      while ( v5 < 2 );
      if ( *(_BYTE *)(a1 + 33816) == 2 )
        *(_QWORD *)(a1 + 33760) += 100 * v19;
      v23 = *(_DWORD *)(a1 + 33096);
      v24 = *(_DWORD *)(a1 + 33092);
      v25 = v24 - *(_DWORD *)(a1 + 33780);
      v26 = v25 + v23 - *(_DWORD *)(a1 + 33776);
      if ( v26 )
      {
        v27 = *(_QWORD *)(a1 + 33760);
        *(_QWORD *)(a1 + 33760) = 0LL;
        *(_DWORD *)(a1 + 33776) = v23;
        *(_DWORD *)(a1 + 33780) = v24;
        if ( v25 )
        {
          v40 = v25 / v26;
          *(_QWORD *)(a1 + 33768) += v27 * (v25 / v26);
        }
      }
      *(_QWORD *)(a1 + 33784) = v12;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(a1 + 33680, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 33680), 0LL);
      if ( v18 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v29 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( v29 )
        {
          _m_prefetchw(v29);
          v30 = *v29;
          do
          {
            v31 = v30;
            v30 = _InterlockedCompareExchange(v29, v30 & 0xFFDFFFFF, v30);
          }
          while ( v31 != v30 );
          if ( (v30 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
      }
      v8 = PpmStatsForProcessor;
      v9 = v33;
    }
    else
    {
      v8 = 0LL;
      v9 = 0LL;
    }
  }
  v15 = a5;
  if ( a5 )
  {
    if ( !v8 )
    {
      v36[0] = 0LL;
      v32 = HvlGetPpmStatsForProcessor(a1, v36, &v34);
      v9 = v36[0];
      v8 = v32;
    }
    *v15 = v8;
    v15[2] = v34;
    v15[1] = v9;
  }
  return 1;
}
