__int64 __fastcall RtlpHpSegMgrCommitInitiate(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        char a4,
        PEX_SPIN_LOCK SpinLock,
        KIRQL *a6)
{
  unsigned __int16 v6; // di
  int v7; // ebp
  KIRQL v8; // r12
  __int16 v11; // bx
  unsigned __int16 v12; // bx
  __int16 v13; // si
  bool v14; // zf
  signed __int16 v15; // ax
  unsigned int v16; // edx
  unsigned __int16 v18; // bx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  __int64 v24; // [rsp+60h] [rbp+8h]
  char v25; // [rsp+78h] [rbp+20h]

  v25 = a4;
  v24 = a1;
  v6 = *a2;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    while ( a3 > 0 )
    {
      if ( (v6 & 0x4000) == 0 )
      {
        if ( (v6 & 0x7FF) != 0 )
        {
LABEL_5:
          v11 = v6;
LABEL_6:
          a1 = v24;
          v12 = a3 + v11;
          v13 = v6 >> 15;
          goto LABEL_7;
        }
        if ( (a4 & 3) != 0 )
        {
          if ( (a4 & 2) == 0 )
            goto LABEL_5;
          v18 = v6;
        }
        else
        {
          if ( !(unsigned int)RtlpHpSegMgrApplyLargePagePolicy(a1, 0x4000LL, 2047LL) )
            goto LABEL_5;
          v18 = v6;
        }
        v11 = v18 | 0x4000;
        goto LABEL_6;
      }
      _mm_pause();
      v6 = *a2;
    }
    v13 = v6 >> 15;
    if ( (v6 & 0x8000u) == 0 )
    {
      v16 = -1073741567;
      goto LABEL_13;
    }
    v12 = a3 + (v6 & 0x7FF) ? a3 + v6 : v6 | 0x4000;
LABEL_7:
    if ( (v12 & 0x4000) != 0 )
    {
      v7 = 1;
      v8 = RtlpHpAcquireLockExclusive(SpinLock, *(_DWORD *)(a1 + 40) & 1);
    }
    v15 = _InterlockedCompareExchange16(a2, v12, v6);
    v14 = v6 == (unsigned __int16)v15;
    v6 = v15;
    if ( v14 )
      break;
    if ( v7 )
    {
      if ( (*(_DWORD *)(v24 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (v8 + 1));
            v14 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v8);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)SpinLock);
        KeAbPostRelease((ULONG_PTR)SpinLock);
        CurrentThread = KeGetCurrentThread();
        v14 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v14
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      v7 = 0;
    }
    a1 = v24;
    a4 = v25;
  }
  if ( a3 <= 0 )
  {
    v16 = (v12 >> 13) & 2 | 0xC0000100;
  }
  else if ( v13 )
  {
    v16 = -1073741568;
  }
  else
  {
    v16 = ((v12 & 0x4000) != 0) - 1073741567;
  }
LABEL_13:
  if ( v7 )
    *a6 = v8;
  return v16;
}
