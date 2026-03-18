/*
 * XREFs of PpmUpdatePerformanceFeedback @ 0x1403072A0
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x14023B798 (PpmPerfApplyProcessorState.c)
 *     PpmContinueActiveTimeAccumulation @ 0x140293988 (PpmContinueActiveTimeAccumulation.c)
 *     PpmSnapPerformanceAccumulation @ 0x1403051E0 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140211E70 (KxWaitForSpinLockAndAcquire.c)
 *     HvlGetPpmStatsForProcessor @ 0x14039AEA4 (HvlGetPpmStatsForProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KiAcquireSpinLockInstrumented @ 0x14045A310 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056E8CC (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall PpmUpdatePerformanceFeedback(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 *a5)
{
  unsigned int v5; // r14d
  __int64 v8; // rcx
  __int64 v9; // rdx
  bool v10; // zf
  char v11; // r11
  char v12; // bp
  char v13; // si
  __int64 v14; // r12
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rcx
  unsigned int i; // eax
  unsigned int v18; // ebp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v21; // r15
  _QWORD *v22; // rsi
  unsigned __int8 v23; // bp
  __int64 v24; // rdi
  __int64 v25; // rcx
  void (__fastcall *v26)(__int64, unsigned int *, __int64, unsigned __int64); // rax
  __int64 v27; // r10
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rcx
  char v32; // bp
  int v33; // edx
  unsigned int v34; // ecx
  unsigned int v35; // r8d
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  __int64 *v38; // rbx
  __int64 v40; // r10
  int v41; // eax
  _DWORD *v42; // rcx
  int v43; // eax
  int v44; // eax
  __int64 v45; // rax
  unsigned __int64 v46; // [rsp+30h] [rbp-78h] BYREF
  __int64 v47; // [rsp+38h] [rbp-70h] BYREF
  __int64 PpmStatsForProcessor; // [rsp+40h] [rbp-68h]
  __int64 v49; // [rsp+48h] [rbp-60h]
  __int64 v50; // [rsp+50h] [rbp-58h] BYREF
  __int64 v51; // [rsp+58h] [rbp-50h] BYREF
  __int64 v52[8]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v53; // [rsp+A0h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v55; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int8 v56; // [rsp+B8h] [rbp+10h]

  v56 = a2;
  v5 = 0;
  v55 = 0;
  v8 = 0LL;
  v50 = 0LL;
  v9 = 0LL;
  PpmStatsForProcessor = 0LL;
  v10 = *(_DWORD *)(a1 + 33824) == 3;
  v11 = a4;
  v12 = a3;
  v49 = 0LL;
  if ( v10 )
  {
    v13 = 1;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 34512) + 8LL * DWORD2(xmmword_140CF7090)) >> 1;
  }
  else
  {
    v13 = 0;
    v14 = 0LL;
  }
  v15 = (volatile signed __int32 *)(a1 + 33680);
  if ( a2
    || (*(_QWORD *)(a1 + 33736)
     || *(_QWORD *)(a1 + 33760)
     && (*(_DWORD *)(a1 + 33096) != *(_DWORD *)(a1 + 33776) || *(_DWORD *)(a1 + 33092) != *(_DWORD *)(a1 + 33780))
     || (_BYTE)a3 && v14 != *(_QWORD *)(a1 + 33784))
    && (!(_BYTE)a4 || !*(_BYTE *)(a1 + 33818)) )
  {
    LOBYTE(a3) = 0;
    v16 = a1 + 33704;
    a4 = 2LL;
    for ( i = 0; i < 2; ++i )
    {
      if ( *(_QWORD *)v16 )
      {
        if ( *(_BYTE *)(*(_QWORD *)v16 + 32LL) )
        {
          if ( v12 )
            return 0;
          LOBYTE(a3) = 1;
        }
        if ( (_DWORD)a4 == 2 )
          a4 = i;
      }
      v16 += 8LL;
    }
    if ( (_BYTE)a3 || a2 || !v11 )
    {
      v18 = v53;
      _disable();
      v18 >>= 9;
      LOBYTE(v18) = v18 & 1;
      v53 = v18;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(a1 + 33680);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v41 = SchedulerAssist[6];
            SchedulerAssist[6] = v41 + 1;
            if ( v41 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64(v15, 0LL) )
        {
          v42 = CurrentPrcb->SchedulerAssist;
          if ( v42 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v43 = v42[6] - 1;
              v42[6] = v43;
              if ( !v43 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 33680));
        }
      }
      v21 = _InterlockedExchange64((volatile __int64 *)(a1 + 33736), 0LL);
      if ( v13 )
      {
        v51 = 0LL;
        PpmStatsForProcessor = HvlGetPpmStatsForProcessor(a1, &v51, &v50, a4);
        v49 = v51;
        v21 = PpmStatsForProcessor - v51 - *(_QWORD *)(a1 + 33792);
        *(_QWORD *)(a1 + 33792) = PpmStatsForProcessor - v51;
      }
      *(_QWORD *)(a1 + 33728) += v21;
      v22 = (_QWORD *)(a1 + 33744);
      v23 = v56;
      do
      {
        v24 = *(v22 - 5);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 40);
          v10 = *(_BYTE *)(v24 + 33) == 0;
          v47 = 0LL;
          v46 = 0LL;
          v26 = *(void (__fastcall **)(__int64, unsigned int *, __int64, unsigned __int64))v24;
          if ( v10 )
          {
            v26(v25, &v55, a3, a4);
            v30 = v55;
          }
          else
          {
            v26(v25, (unsigned int *)v23, (__int64)&v46, (unsigned __int64)&v47);
            v27 = *(_QWORD *)(v24 + 16);
            a4 = v46;
            if ( v46 != v27 )
            {
              a3 = *(_QWORD *)(v24 + 8);
              a4 = v46 - v27;
              v29 = (v47 - a3) * *(unsigned __int8 *)(v24 + 35);
              v46 = a4;
              v47 -= a3;
              v28 = v47;
              *(_DWORD *)(v24 + 24) = v29 / a4;
              *(_QWORD *)(v24 + 16) = v27 + a4;
              *(_QWORD *)(v24 + 8) = a3 + v28;
            }
            v30 = *(_DWORD *)(v24 + 24);
            v55 = v30;
          }
          v31 = v21 * v30;
          *v22 += v31;
          if ( v5 == *(unsigned __int8 *)(a1 + 33816) )
            *(_QWORD *)(a1 + 33760) += v31;
        }
        ++v5;
        ++v22;
      }
      while ( v5 < 2 );
      v32 = v53;
      if ( *(_BYTE *)(a1 + 33816) == 2 )
        *(_QWORD *)(a1 + 33760) += 100 * v21;
      v33 = *(_DWORD *)(a1 + 33096);
      a4 = *(unsigned int *)(a1 + 33092);
      v34 = *(_DWORD *)(a1 + 33092) - *(_DWORD *)(a1 + 33780);
      v35 = v34 + v33 - *(_DWORD *)(a1 + 33776);
      if ( v35 )
      {
        v40 = *(_QWORD *)(a1 + 33760);
        *(_QWORD *)(a1 + 33760) = 0LL;
        *(_DWORD *)(a1 + 33776) = v33;
        *(_DWORD *)(a1 + 33780) = a4;
        if ( v34 )
        {
          if ( v35 != 1 )
            v34 /= v35;
          v55 = v34;
          *(_QWORD *)(a1 + 33768) += v40 * v34;
        }
      }
      *(_QWORD *)(a1 + 33784) = v14;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(a1 + 33680, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
      v36 = KeGetCurrentPrcb();
      v37 = v36->SchedulerAssist;
      if ( v37 )
      {
        if ( v36->NestingLevel <= 1u )
        {
          v44 = v37[6] - 1;
          v37[6] = v44;
          if ( !v44 )
            KiRemoveSystemWorkPriorityKick(v36);
        }
      }
      if ( v32 )
        _enable();
      v8 = PpmStatsForProcessor;
      v9 = v49;
    }
    else
    {
      v8 = 0LL;
      v9 = 0LL;
    }
  }
  v38 = a5;
  if ( a5 )
  {
    if ( !v8 )
    {
      v52[0] = 0LL;
      v45 = HvlGetPpmStatsForProcessor(a1, v52, &v50, a4);
      v9 = v52[0];
      v8 = v45;
    }
    v38[2] = v50;
    *v38 = v8;
    v38[1] = v9;
  }
  return 1;
}
