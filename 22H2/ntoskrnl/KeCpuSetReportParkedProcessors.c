/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x14035EDA0
 * Callers:
 *     PpmParkReportMask @ 0x14030F3B0 (PpmParkReportMask.c)
 *     KeSetSystemAllowedCpuSets @ 0x14035F238 (KeSetSystemAllowedCpuSets.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140229570 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KiEndThreadCycleAccumulation @ 0x14022D9F0 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x1402306D0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14035E53C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRequestSoftwareInterrupt @ 0x14035E984 (KiRequestSoftwareInterrupt.c)
 *     RtlWriteAcquireTickLock @ 0x14035F214 (RtlWriteAcquireTickLock.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140405AF0 (KiSwapContext.c)
 *     memmove @ 0x140413540 (memmove.c)
 */

unsigned __int8 __fastcall KeCpuSetReportParkedProcessors(unsigned __int16 *a1, unsigned __int8 a2)
{
  unsigned int v2; // r15d
  unsigned __int8 v3; // r14
  unsigned __int64 v5; // rdx
  int v6; // eax
  unsigned __int16 v7; // di
  int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // r10
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int16 i; // dx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int8 result; // al
  ULONG_PTR CurrentThread; // rdi
  bool v22; // zf
  __int64 v23; // r10
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // r8
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r15
  __int64 v30; // rcx
  unsigned __int64 v31; // r11
  int v32; // ebx
  __int64 v33; // rcx
  unsigned __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  struct _KPRCB *v38; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v40; // eax
  _DWORD *v41; // rcx
  int v42; // eax
  _KTHREAD *NextThread; // rsi
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r8
  struct _KPRCB *v47; // rcx
  _DWORD *v48; // rdx
  struct _KPRCB *v49; // r10
  _DWORD *v50; // r9
  int v51; // eax
  int v53; // [rsp+24h] [rbp-A5h]
  unsigned int v54; // [rsp+28h] [rbp-A1h]
  _QWORD *v55; // [rsp+30h] [rbp-99h] BYREF
  int v56; // [rsp+38h] [rbp-91h]
  _DWORD v57[41]; // [rsp+3Ch] [rbp-8Dh] BYREF

  v2 = (unsigned __int16)KiActiveGroups;
  v3 = a2;
  v56 = 0;
  v54 = (unsigned __int16)KiActiveGroups;
  _m_prefetchw(KiCpuSetAffinities);
  _m_prefetchw(KiCpuSetAffinitiesShadow);
  if ( a1 )
    KxAcquireSpinLock(&KiCpuSetLock);
  v5 = 0x140000000uLL;
  v6 = 0;
  v53 = 0;
  v7 = 0;
  if ( v2 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = qword_140CFC848[v7];
      if ( a1 )
      {
        if ( v7 >= *a1 )
          v23 = 0LL;
        else
          v23 = *(_QWORD *)&a1[4 * v7 + 4];
        v10 = v9 ^ v23;
        *(_QWORD *)&v57[2 * v7 + 1] = v10;
        if ( KiNonParkedCpuSets[v7] == v10 )
          goto LABEL_53;
      }
      else
      {
        v10 = KiNonParkedCpuSets[v7];
        *(_QWORD *)&v57[2 * v7 + 1] = v10;
      }
      v53 = 1;
      v11 = v9 & v10;
      v6 = 1;
      v12 = v9 ^ v9 & v10;
      if ( (v9 & v10) != 0 )
      {
        do
        {
          _BitScanForward64(&v13, v11);
          v56 = v13;
          v11 ^= 1LL << v13;
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v8 << 6) + v13)) = 1LL << v13;
        }
        while ( v11 );
        v2 = v54;
        v5 = 0x140000000uLL;
        v6 = 1;
      }
      if ( v12 )
      {
        v24 = qword_140CFDA88[2 * v7];
        v25 = v24 & -(__int64)((v10 & (v9 ^ v24)) != 0 && (v10 & v24) != 0);
        v26 = (v9 ^ v24) & -(__int64)((v10 & (v9 ^ v24)) != 0 && (v10 & v24) != 0);
        v27 = v9 ^ KiSystemAllowedCpuSets[2 * v7];
        v55 = (_QWORD *)v26;
        v5 = v27 & v10;
        if ( v27 )
        {
          if ( v5 )
          {
            v28 = v12 & v27;
            v12 ^= v28;
            if ( v28 )
            {
              v29 = (unsigned __int64)v55;
              do
              {
                _BitScanForward64((unsigned __int64 *)&v30, v28);
                v28 &= ~(1LL << v30);
                if ( _bittest64(&v25, (unsigned int)v30) )
                {
                  v31 = v5 & v25;
                  if ( (v5 & v25) == 0 )
                    v31 = v5;
                }
                else
                {
                  v31 = v5;
                  if ( (v5 & v29) != 0 )
                    v31 = v5 & v29;
                }
                *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v8 << 6) + v30)) = v31;
              }
              while ( v28 );
              v2 = v54;
              v26 = (__int64)v55;
            }
          }
        }
        if ( v12 )
        {
          v5 = v9 & ~v5;
          if ( (v10 & v5) == 0 )
            v5 = v9;
          v32 = v8 << 6;
          do
          {
            _BitScanForward64((unsigned __int64 *)&v33, v12);
            v34 = v5;
            v12 &= ~(1LL << v33);
            if ( _bittest64(&v25, (unsigned int)v33) )
            {
              v34 = v25 & v5;
              if ( (v5 & v10 & v25) == 0 )
                v34 = v5;
            }
            else if ( (v10 & v26 & v5) != 0 )
            {
              v34 = v5 & v26;
            }
            *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)(v32 + v33)) = v34;
          }
          while ( v12 );
        }
LABEL_53:
        v6 = v53;
      }
      v8 = ++v7;
      if ( v7 >= v2 )
      {
        v3 = a2;
        break;
      }
      v5 = 0x140000000uLL;
    }
  }
  v55 = 0LL;
  if ( v6 )
  {
    RtlWriteAcquireTickLock(&KiCpuSetSequence, v5);
    for ( i = 0; i < v2; KiNonParkedCpuSets[v15] = *(_QWORD *)&v57[2 * v15 + 1] )
      v15 = i++;
    memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
    ++KiCpuSetSequence;
    KiUpdateGlobalCpuSetConfiguration((__int64)&v55, v16, v17, v18);
  }
  KxReleaseSpinLock(&KiCpuSetLock);
  CurrentPrcb = KeGetCurrentPrcb();
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v55);
  if ( v3 >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
        return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
  }
  else
  {
    CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v38 = KeGetCurrentPrcb();
      v57[0] = 0;
      while ( 1 )
      {
        SchedulerAssist = v38->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v38->NestingLevel <= 1u )
          {
            v40 = SchedulerAssist[6];
            SchedulerAssist[6] = v40 + 1;
            if ( v40 == -1 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v41 = v38->SchedulerAssist;
        if ( v41 )
        {
          if ( v38->NestingLevel <= 1u )
          {
            v42 = v41[6] - 1;
            v41[6] = v42;
            if ( !v42 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
        do
          KeYieldProcessorEx(v57, v35, v36, v37);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v44 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v44 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = v3;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v44, v45);
      LOBYTE(v46) = v3;
      v22 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v46) == 0;
    }
    else
    {
      v22 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v22 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v47 = KeGetCurrentPrcb();
          v48 = v47->SchedulerAssist;
          v22 = (v48[5] & 0xFFFF0003) == 0;
          v48[5] &= 0xFFFF0003;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v47);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v49 = KeGetCurrentPrcb();
      v50 = v49->SchedulerAssist;
      v51 = ~(unsigned __int16)(-1LL << (v3 + 1));
      v22 = (v51 & v50[5]) == 0;
      v50[5] &= v51;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(v49);
    }
    result = v3;
    __writecr8(v3);
  }
  return result;
}
