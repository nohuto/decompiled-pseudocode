/*
 * XREFs of KiCheckForTimerExpiration @ 0x1402247B0
 * Callers:
 *     KeAccumulateTicks @ 0x1402243D0 (KeAccumulateTicks.c)
 * Callees:
 *     RtlBackoff @ 0x140273780 (RtlBackoff.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1402F0908 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402F0984 (KiSetClockIntervalToMinimumRequested.c)
 *     KiGetClockIntervalOneShot @ 0x1402F10CC (KiGetClockIntervalOneShot.c)
 *     EtwTraceKernelEvent @ 0x14035C1F0 (EtwTraceKernelEvent.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiCheckForTimerExpiration(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 SchedulerAssist)
{
  bool v4; // si
  unsigned __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rbp
  bool v9; // dl
  __int64 v10; // rdx
  __int64 v11; // r14
  int v12; // r13d
  _DWORD *v13; // r12
  int v14; // r11d
  unsigned int v15; // edx
  unsigned int v16; // r15d
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r10
  __int64 v20; // rax
  unsigned __int8 CurrentIrql; // r15
  unsigned int ClockIntervalOneShot; // eax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int16 v26; // tt
  unsigned __int8 v27; // al
  int v28; // eax
  bool v29; // zf
  __int16 v30; // tt
  __int16 v31; // cx
  bool v32; // [rsp+30h] [rbp-58h]
  int v33; // [rsp+34h] [rbp-54h] BYREF
  __int128 v34; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v35[2]; // [rsp+48h] [rbp-40h] BYREF

  v34 = 0LL;
  v4 = 0;
  v5 = MEMORY[0xFFFFF78000000008];
  if ( (*(_BYTE *)(a1 + 12588) & 8) == 0 )
  {
    if ( KiSerializeTimerExpiration )
    {
      if ( !*(_BYTE *)(a1 + 33) )
        goto LABEL_4;
      v7 = KiProcessorBlock[0];
    }
    else
    {
      v7 = a1;
    }
    v8 = v7 + 14656;
    if ( v7 != -14656 )
    {
      v9 = *(_QWORD *)(v7 + 31552) != KiLastPseudoHrTimerExpiration;
      a3 = v9;
      if ( (KiVelocityFlags & 0x2000) != 0 )
        a3 = *(_QWORD *)(v7 + 31560) != KiLastNonHrTimerExpiration;
      v32 = *(_QWORD *)(v7 + 31552) != KiLastPseudoHrTimerExpiration;
      if ( (_BYTE)a3 || *(_QWORD *)(v7 + 31552) != KiLastPseudoHrTimerExpiration )
      {
        LODWORD(SchedulerAssist) = 0;
        v10 = MEMORY[0xFFFFF78000000008] >> 18;
        v11 = 0LL;
        v12 = -1;
        v13 = (_DWORD *)(v7 + 31568);
        while ( 1 )
        {
          v14 = *v13 + 255;
          if ( (unsigned int)(v10 - *v13) < 0x100 )
            v14 = v10;
          v15 = *v13 - 1;
          while ( 1 )
          {
            ++v15;
            v16 = v12;
            v17 = *(_QWORD *)(32 * (v11 + (unsigned __int8)v15) + v8 + 536);
            if ( (_DWORD)SchedulerAssist != 1 || (_BYTE)a3 )
              break;
            if ( v5 >= v17 )
            {
              v12 = v15;
              if ( v16 < v15 )
                v12 = v16;
              if ( v5 + (unsigned int)KePseudoHrTimeIncrement > (unsigned int)KeNonHrTimeIncrement + v17 )
              {
                v4 = 1;
                KiLastNonHrTimerExpiration = v5;
                a3 = 1LL;
                v15 = v12;
                goto LABEL_23;
              }
            }
LABEL_20:
            if ( v15 == v14 )
              goto LABEL_21;
          }
          if ( v5 < v17 )
            goto LABEL_20;
          v4 = 1;
LABEL_21:
          if ( !(_DWORD)SchedulerAssist || (_BYTE)a3 )
LABEL_23:
            *(_DWORD *)(v8 + 4LL * (unsigned int)SchedulerAssist + 16912) = v15;
          SchedulerAssist = (unsigned int)(SchedulerAssist + 1);
          ++v13;
          v11 += 256LL;
          LODWORD(v10) = v14;
          if ( (unsigned int)SchedulerAssist >= 2 )
          {
            v9 = v32;
            break;
          }
        }
      }
      if ( !*(_BYTE *)(a1 + 33) )
        goto LABEL_5;
      if ( !(_BYTE)a3
        && v9
        && v5 >= qword_140C31D38
        && v5 + (unsigned int)KePseudoHrTimeIncrement > (unsigned __int64)(unsigned int)KeNonHrTimeIncrement
                                                      + qword_140C31D38 )
      {
        KiLastNonHrTimerExpiration = v5;
LABEL_61:
        v4 = 1;
        goto LABEL_4;
      }
      if ( v4 )
        goto LABEL_4;
      if ( (_BYTE)a3 )
      {
        v4 = KiNextTimer2DueTime <= v5;
        goto LABEL_4;
      }
      if ( v9 && qword_140C31D20 <= v5 || qword_140C31D08 <= v5 )
        goto LABEL_61;
    }
  }
LABEL_4:
  if ( !*(_BYTE *)(a1 + 33) )
    goto LABEL_5;
  v18 = qword_140C31D08;
  v19 = v5 + KeMaximumIncrement;
  if ( qword_140C31D08 > v5 )
  {
    v20 = KiClockOwnerOneShotRequest;
    if ( !KiClockOwnerOneShotRequest )
      v20 = -1LL;
    if ( v20 != qword_140C31D08 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
        a3 = (-1 << (CurrentIrql + 1)) & 0xFFFCu | *(_DWORD *)(SchedulerAssist + 20);
        *(_DWORD *)(SchedulerAssist + 20) = a3;
      }
      if ( v19 <= v18 )
      {
        if ( KiClockOwnerOneShotRequest )
        {
          LOBYTE(a3) = 1;
          PoTraceSystemTimerResolutionKernel(0LL, 1397707336LL, a3);
          KiClockOwnerOneShotRequest = 0LL;
          KiSetClockIntervalToMinimumRequested();
        }
      }
      else
      {
        KiClockOwnerOneShotRequest = v18;
        KiSetClockIntervalToMinimumRequested();
        ClockIntervalOneShot = KiGetClockIntervalOneShot(v18, v5);
        LOBYTE(v23) = 1;
        PoTraceSystemTimerResolutionKernel(ClockIntervalOneShot, 1397707336LL, v23);
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
          {
            SchedulerAssist = (unsigned __int64)KeGetCurrentPrcb();
            a3 = *(_QWORD *)(SchedulerAssist + 33976);
            v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v29 = (v28 & *(_DWORD *)(a3 + 20)) == 0;
            *(_DWORD *)(a3 + 20) &= v28;
            if ( v29 )
              KiRemoveSystemWorkPriorityKick(SchedulerAssist);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
LABEL_5:
    if ( !v4 )
      goto LABEL_6;
  }
  v33 = 0;
  _m_prefetchw((const void *)(a1 + 12588));
  v24 = *(unsigned __int16 *)(a1 + 12588);
  v25 = (unsigned __int16)v24;
  BYTE1(v25) = HIBYTE(*(_WORD *)(a1 + 12588));
  v26 = *(_WORD *)(a1 + 12588);
  if ( v26 != _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 12588), v24 | 8, v24) )
  {
    do
    {
      RtlBackoff(&v33, v24, a3, SchedulerAssist);
      _m_prefetchw((const void *)(a1 + 12588));
      v24 = *(unsigned __int16 *)(a1 + 12588);
      v25 = (unsigned __int16)v24;
      BYTE1(v25) = HIBYTE(*(_WORD *)(a1 + 12588));
      v30 = *(_WORD *)(a1 + 12588);
    }
    while ( v30 != _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 12588), v24 | 8, v24) );
  }
  if ( (v24 & 0x29) == 0 )
  {
    if ( *(_BYTE *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 6) = 1;
    }
    else
    {
      LOBYTE(v25) = 2;
      HalRequestSoftwareInterrupt(v25);
    }
  }
LABEL_6:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x40000) != 0 && KeGetCurrentIrql() == 13 )
  {
    v29 = *(_BYTE *)(a1 + 33) == 0;
    v31 = 0;
    WORD4(v34) = 0;
    *(_QWORD *)&v34 = v5;
    if ( !v29 )
    {
      v31 = 1;
      WORD4(v34) = 1;
    }
    if ( (*(_BYTE *)(a1 + 12588) & 8) != 0 )
      WORD4(v34) = v31 | 8;
    v35[1] = 16LL;
    v35[0] = &v34;
    EtwTraceKernelEvent((unsigned int)v35, 1, 1074003968, 3919, 4196866);
  }
}
