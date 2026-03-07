__int64 __fastcall WheaRegisterErrorSourceOverride(int *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  volatile signed __int32 *v6; // rdi
  __int64 v7; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v9; // r15
  unsigned int AbEntrySummary; // eax
  unsigned int v11; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  int SessionId; // eax
  int v17; // esi
  int v18; // eax
  signed __int32 v20[8]; // [rsp+0h] [rbp-100h] BYREF
  _DWORD v21[256]; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v22; // [rsp+430h] [rbp+330h]

  v3 = *a1;
  if ( (unsigned int)v3 > 0x12 || (_DWORD)v3 == 16 )
  {
    return (unsigned int)-1073741585;
  }
  else if ( *(_QWORD *)(a2 + 8)
         && *(_QWORD *)(a2 + 16)
         && *(_QWORD *)(a2 + 24)
         && *(_QWORD *)(a2 + 32)
         && *(_QWORD *)(a2 + 40) )
  {
    v6 = (volatile signed __int32 *)&WheapSourceConfigOverride[8 * v3];
    v7 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = KeGetCurrentThread();
    _disable();
    AbEntrySummary = v9->AbEntrySummary;
    if ( v9->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&WheapSourceConfigOverride[8 * v3], (__int64)v9)) != 0 )
    {
      _BitScanForward(&v11, AbEntrySummary);
      v22 = v11;
      v9->AbEntrySummary = AbEntrySummary & ~(1 << v11);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v14 = *SchedulerAssist;
        do
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange(SchedulerAssist, v14 & 0xFFDFFFFF, v14);
        }
        while ( v15 != v14 );
        if ( (v14 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
      v7 = (__int64)(&v9[1].Process + 12 * v22);
      if ( (unsigned __int64)v6 - qword_140C65668 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v7 + 8) = SessionId;
      *(_QWORD *)v7 = (unsigned __int64)v6 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64(v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(&WheapSourceConfigOverride[8 * v3], v7, (__int64)&WheapSourceConfigOverride[8 * v3]);
    if ( v7 )
      *(_BYTE *)(v7 + 18) = 1;
    if ( *((_BYTE *)v6 + 8) )
    {
      v17 = -1073740024;
    }
    else
    {
      *((_DWORD *)v6 + 3) = *(_DWORD *)a2;
      *((_QWORD *)v6 + 2) = *(_QWORD *)(a2 + 8);
      *((_QWORD *)v6 + 3) = *(_QWORD *)(a2 + 16);
      *((_QWORD *)v6 + 4) = *(_QWORD *)(a2 + 24);
      *((_QWORD *)v6 + 5) = *(_QWORD *)(a2 + 32);
      *((_QWORD *)v6 + 6) = *(_QWORD *)(a2 + 40);
      _InterlockedOr(v20, 0);
      *((_BYTE *)v6 + 8) = 1;
      memset(v21, 0, 0x3CCuLL);
      v21[5] = a1[2];
      v21[6] = a1[3];
      v18 = a1[1];
      v21[3] = 1;
      v21[9] = 1;
      v21[4] = v18;
      v21[0] = 972;
      v21[1] = 10;
      v21[2] = v3;
      v21[7] = 0;
      v17 = WheaAddErrorSource(v21, 0LL);
      if ( v17 < 0 )
      {
        *((_QWORD *)v6 + 2) = PdcCreateWatchdogAroundClientCall;
        *((_QWORD *)v6 + 3) = xHalPciEarlyRestore;
        *((_QWORD *)v6 + 4) = WheapDefaultErrSrcCreateRecord;
        *((_QWORD *)v6 + 5) = PdcCreateWatchdogAroundClientCall;
        *((_QWORD *)v6 + 6) = xHalTimerWatchdogStop;
        *((_QWORD *)v6 + 7) = 0LL;
      }
      else
      {
        WheapOverrideHandler[v3] = a3;
        v17 = 0;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapSourceConfigOverride[8 * v3]);
    KeAbPostRelease((ULONG_PTR)&WheapSourceConfigOverride[8 * v3]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return (unsigned int)v17;
}
