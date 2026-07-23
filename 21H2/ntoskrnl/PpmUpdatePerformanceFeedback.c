/*
 * XREFs of PpmUpdatePerformanceFeedback @ 0x1402C8970
 * Callers:
 *     PpmContinueActiveTimeAccumulation @ 0x14026996C (PpmContinueActiveTimeAccumulation.c)
 *     PpmSnapPerformanceAccumulation @ 0x1402C5A90 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 *     PpmPerfApplyProcessorState @ 0x140398C8C (PpmPerfApplyProcessorState.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140363010 (KxWaitForSpinLockAndAcquire.c)
 *     HvlGetPpmStatsForProcessor @ 0x14038E064 (HvlGetPpmStatsForProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KiAcquireSpinLockInstrumented @ 0x140516ACC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140516BD8 (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall PpmUpdatePerformanceFeedback(__int64 a1, unsigned __int8 a2, char a3, char a4, __int64 *a5)
{
  unsigned int v5; // r14d
  bool v7; // zf
  char v11; // si
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rbx
  int v14; // r10d
  __int64 v15; // rcx
  char v16; // r8
  unsigned int i; // eax
  char v18; // r9
  __int16 v19; // bp
  bool v20; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v23; // r15
  _QWORD *v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rcx
  void (__fastcall *v27)(__int64, unsigned int *); // rax
  __int64 v28; // r10
  __int64 v29; // r8
  unsigned __int64 v30; // r9
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // edx
  int v36; // r9d
  unsigned int v37; // ecx
  unsigned int v38; // r8d
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  __int64 *v41; // rbx
  __int64 v43; // r10
  int v44; // eax
  _DWORD *v45; // rcx
  int v46; // eax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // [rsp+30h] [rbp-78h] BYREF
  __int64 v51; // [rsp+38h] [rbp-70h] BYREF
  __int64 v52; // [rsp+40h] [rbp-68h] BYREF
  __int64 v53; // [rsp+48h] [rbp-60h]
  __int64 PpmStatsForProcessor; // [rsp+50h] [rbp-58h]
  __int64 v55; // [rsp+58h] [rbp-50h] BYREF
  __int64 v56; // [rsp+60h] [rbp-48h]
  int v57; // [rsp+A0h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned __int64 v59; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v60; // [rsp+B8h] [rbp+10h] BYREF

  v5 = 0;
  v7 = *(_DWORD *)(a1 + 32984) == 3;
  v60 = 0;
  PpmStatsForProcessor = 0LL;
  v51 = 0LL;
  v56 = 0LL;
  if ( v7 )
  {
    v11 = 1;
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 33616) + 8LL * DWORD2(xmmword_140CED590)) >> 1;
  }
  else
  {
    v11 = 0;
    v12 = 0LL;
  }
  v53 = v12;
  v13 = (volatile signed __int32 *)(a1 + 32840);
  if ( a2
    || *(_QWORD *)(a1 + 32896)
    || *(_QWORD *)(a1 + 32920)
    && (*(_DWORD *)(a1 + 32392) != *(_DWORD *)(a1 + 32936) || *(_DWORD *)(a1 + 32388) != *(_DWORD *)(a1 + 32940))
    || a3 && v12 != *(_QWORD *)(a1 + 32944) )
  {
    v14 = 2;
    v15 = a1 + 32864;
    v16 = 0;
    for ( i = 0; i < 2; ++i )
    {
      if ( *(_QWORD *)v15 )
      {
        v18 = *(_BYTE *)(*(_QWORD *)v15 + 32LL);
        if ( v18 && a3 )
          return 0;
        if ( v18 )
          v16 = 1;
        if ( v14 == 2 )
          v14 = i;
      }
      v15 += 8LL;
    }
    if ( v16 || a2 || !a4 )
    {
      v19 = v57;
      _disable();
      v20 = (v19 & 0x200) != 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(a1 + 32840);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v44 = SchedulerAssist[6];
            SchedulerAssist[6] = v44 + 1;
            if ( v44 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64(v13, 0LL) )
        {
          v45 = CurrentPrcb->SchedulerAssist;
          if ( v45 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v46 = v45[6] - 1;
              v45[6] = v46;
              if ( !v46 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          KxWaitForSpinLockAndAcquire(a1 + 32840);
        }
      }
      v23 = _InterlockedExchange64((volatile __int64 *)(a1 + 32896), 0LL);
      if ( v11 )
      {
        v52 = 0LL;
        PpmStatsForProcessor = HvlGetPpmStatsForProcessor(a1, &v52, &v51);
        v56 = v52;
        v23 = PpmStatsForProcessor - v52 - *(_QWORD *)(a1 + 32952);
        *(_QWORD *)(a1 + 32952) = PpmStatsForProcessor - v52;
      }
      *(_QWORD *)(a1 + 32888) += v23;
      v24 = (_QWORD *)(a1 + 32904);
      do
      {
        v25 = *(v24 - 5);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 40);
          v7 = *(_BYTE *)(v25 + 33) == 0;
          v50 = 0LL;
          v59 = 0LL;
          v27 = *(void (__fastcall **)(__int64, unsigned int *))v25;
          if ( v7 )
          {
            v27(v26, &v60);
            v33 = v60;
          }
          else
          {
            ((void (__fastcall *)(__int64, _QWORD, unsigned __int64 *, __int64 *))v27)(v26, a2, &v59, &v50);
            v28 = *(_QWORD *)(v25 + 16);
            if ( v59 != v28 )
            {
              v29 = *(_QWORD *)(v25 + 8);
              v30 = v59 - v28;
              v32 = (v50 - v29) * *(unsigned __int8 *)(v25 + 35);
              v59 = v30;
              v50 -= v29;
              v31 = v50;
              *(_DWORD *)(v25 + 24) = v32 / v30;
              *(_QWORD *)(v25 + 16) = v30 + v28;
              *(_QWORD *)(v25 + 8) = v29 + v31;
            }
            v33 = *(_DWORD *)(v25 + 24);
            v60 = v33;
          }
          v34 = v23 * v33;
          *v24 += v34;
          if ( v5 == *(unsigned __int8 *)(a1 + 32976) )
            *(_QWORD *)(a1 + 32920) += v34;
        }
        ++v5;
        ++v24;
      }
      while ( v5 < 2 );
      if ( *(_BYTE *)(a1 + 32976) == 2 )
        *(_QWORD *)(a1 + 32920) += 100 * v23;
      v35 = *(_DWORD *)(a1 + 32392);
      v36 = *(_DWORD *)(a1 + 32388);
      v37 = v36 - *(_DWORD *)(a1 + 32940);
      v38 = v37 + v35 - *(_DWORD *)(a1 + 32936);
      if ( v38 )
      {
        v43 = *(_QWORD *)(a1 + 32920);
        *(_QWORD *)(a1 + 32920) = 0LL;
        *(_DWORD *)(a1 + 32936) = v35;
        *(_DWORD *)(a1 + 32940) = v36;
        if ( v37 )
        {
          if ( v38 != 1 )
            v37 /= v38;
          v60 = v37;
          *(_QWORD *)(a1 + 32928) += v43 * v37;
        }
      }
      *(_QWORD *)(a1 + 32944) = v53;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(a1 + 32840, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
      v39 = KeGetCurrentPrcb();
      v40 = v39->SchedulerAssist;
      if ( v40 )
      {
        if ( v39->NestingLevel <= 1u )
        {
          v47 = v40[6] - 1;
          v40[6] = v47;
          if ( !v47 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
      if ( v20 )
        _enable();
    }
  }
  v41 = a5;
  if ( a5 )
  {
    v48 = PpmStatsForProcessor;
    if ( PpmStatsForProcessor )
    {
      v49 = v56;
    }
    else
    {
      v55 = 0LL;
      v48 = HvlGetPpmStatsForProcessor(a1, &v55, &v51);
      v49 = v55;
    }
    *v41 = v48;
    v41[2] = v51;
    v41[1] = v49;
  }
  return 1;
}
