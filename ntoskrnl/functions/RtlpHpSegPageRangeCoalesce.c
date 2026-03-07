__int64 __fastcall RtlpHpSegPageRangeCoalesce(__int64 a1, __int64 a2, unsigned int a3, int a4, unsigned __int8 *a5)
{
  __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned int v11; // r14d
  __int64 v12; // rsi
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbp
  __int64 v17; // rcx
  char v19; // dl
  __int64 v20; // rcx
  _BYTE *v21; // r14
  unsigned __int64 v22; // rbp
  struct _KTHREAD *CurrentThread; // rcx
  bool v24; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  int v29; // [rsp+60h] [rbp+8h] BYREF

  v29 = 0;
  while ( 1 )
  {
    v9 = 0LL;
    v10 = (a2 - (a2 & *(_QWORD *)a1)) >> 5;
    v11 = (unsigned __int16)~*(_WORD *)(a2 + 28);
    if ( (unsigned int)v10 + (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28)) < 0x100 )
    {
      v9 = a2 + 32LL * (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28));
      if ( (*(_BYTE *)(v9 + 24) & 1) != 0 )
        v9 = 0LL;
    }
    if ( (unsigned int)v10 > *(unsigned __int8 *)(a1 + 10) )
    {
      v12 = a2 - 32;
      if ( (*(_BYTE *)(a2 - 8) & 2) == 0 )
        v12 += -32LL * *(unsigned __int8 *)(v12 + 31);
      if ( (*(_BYTE *)(v12 + 24) & 1) == 0 )
      {
        RtlpHpSegFreeRangeRemove(a1, v12);
        *(_BYTE *)(v12 + 31) += *(_BYTE *)(a2 + 31);
        v11 += (unsigned __int16)~*(_WORD *)(v12 + 28);
        *(_WORD *)(v12 + 28) = ~(_WORD)v11;
        *(_BYTE *)(a2 + 24) &= (*(_BYTE *)(a2 + 31) <= 1u) - 4;
        a2 = v12;
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(v12 + 31) - 1) + v12 + 31) = *(_BYTE *)(v12 + 31) - 1;
      }
    }
    *(_BYTE *)(a2 + 24) |= 0x11u;
    if ( v9 )
    {
      RtlpHpSegFreeRangeRemove(a1, v9);
      if ( *(_BYTE *)(a2 + 31) != 1 )
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1) + a2 + 24) &= ~1u;
      *(_BYTE *)(a2 + 31) += *(_BYTE *)(v9 + 31);
      v11 += (unsigned __int16)~*(_WORD *)(v9 + 28);
      *(_WORD *)(a2 + 28) = ~(_WORD)v11;
      *(_BYTE *)(v9 + 24) &= ~2u;
      v19 = *(_BYTE *)(a2 + 31) - 1;
      v20 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
      *(_BYTE *)(v20 + a2 + 24) |= 1u;
      *(_BYTE *)(v20 + a2 + 31) = v19;
    }
    if ( !v11 )
      break;
    if ( !a4 && (*(_BYTE *)(a1 + 13) & 8) == 0 )
    {
      v13 = *(__int16 *)(a1 + 22);
      v14 = *(_QWORD *)(v13 + a1 + 8) >> *(_BYTE *)(a1 + 11);
      if ( v14 <= 8 )
        v14 = 8LL;
      v15 = *(_QWORD *)(v13 + a1 + 8) >> *(_BYTE *)(a1 + 12);
      if ( v15 <= 8 )
        v15 = 8LL;
      v16 = v11 + *(_QWORD *)(v13 + a1 + 16) + *(_QWORD *)(v13 + a1 + 24);
      if ( (v16 <= v14 || (int)RtlpHpScheduleCompaction(*(_QWORD *)(a1 + 56), v14, v13, v11) >= 0) && v16 <= v15 )
        break;
    }
    v21 = a5;
    v22 = *a5;
    if ( (a3 & 1) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v22 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
            v24 = (v28 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v28;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v22);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
        KeAbPostRelease(a1 + 64);
        CurrentThread = KeGetCurrentThread();
        v24 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v24
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
    }
    RtlpHpSegPageRangeCommit(a1, a2, 0, -(*(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 9)), 0, &v29);
    *v21 = RtlpHpSegLockAcquire(a1, a3);
    *(_BYTE *)(a2 + 24) &= ~0x10u;
  }
  v17 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
  *(_BYTE *)(v17 + a2 + 24) &= ~1u;
  *(_BYTE *)(a2 + 24) &= 0xEEu;
  return a2;
}
