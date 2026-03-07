__int64 __fastcall WheaInitialize(__int64 a1, unsigned int a2)
{
  ULONG_PTR v2; // r12
  int v4; // eax
  int PerProcessorInfo; // eax
  int v6; // eax
  unsigned int v7; // esi
  int *v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  int v12; // eax
  int v13; // eax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v15; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v17; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // rbx
  int SessionId; // eax
  int v22; // eax
  unsigned int i; // ebx
  __int64 Prcb; // rax
  __int64 j; // rbx
  __int64 v26; // rbx
  int v27; // r15d
  bool v28; // zf
  int v29; // eax
  int v30; // eax
  char v31; // al
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-30h]
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-30h]
  _QWORD v46[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v47; // [rsp+40h] [rbp-10h]
  unsigned int v48; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v49; // [rsp+A0h] [rbp+50h]
  PVOID Address; // [rsp+A8h] [rbp+58h] BYREF

  v2 = a2;
  Address = 0LL;
  v46[0] = 0LL;
  v48 = 0;
  if ( a2 )
  {
    qword_140C2C6F8 = (__int64)&WheapPrevErrList;
    WheapPrevErrList = (__int64)&WheapPrevErrList;
    v12 = PshedInitialize(a1, v46);
    if ( v12 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v12, 0LL, 0LL);
    WheapInitializeWorkQueue();
    WheapInitWnfCallbacks();
    v13 = WheapQueryPshedForErrorSources(&v48, &Address);
    if ( v13 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v13, v2, 0LL);
    CurrentThread = KeGetCurrentThread();
    v15 = 0LL;
    v49 = 0;
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&WheapConfigTableLock, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward(&v17, AbEntrySummary);
      v49 = v17;
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v17);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
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
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
      v15 = (__int64)(&CurrentThread[1].Process + 12 * v49);
      if ( (unsigned __int64)&WheapConfigTableLock - qword_140C65668 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      *(_DWORD *)(v15 + 8) = SessionId;
      *(_QWORD *)v15 = (unsigned __int64)&WheapConfigTableLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&WheapConfigTableLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&WheapConfigTableLock, v15, (__int64)&WheapConfigTableLock);
    if ( v15 )
      *(_BYTE *)(v15 + 18) = 1;
    v22 = WheapInitializeErrorSourceTable(v48, (unsigned int *)Address);
    if ( v22 < 0 )
      KeBugCheckEx(0x122u, 7uLL, v22, 0LL, 0LL);
    PshedFreeMemory(Address);
    for ( i = 0;
          i < (unsigned int)KeNumberProcessors_0;
          *(_QWORD *)(*(_QWORD *)(Prcb + 34464) + 8LL) = &WheapErrorSourceTable )
    {
      Prcb = KeGetPrcb(i++);
      **(_DWORD **)(Prcb + 34464) = v48;
      *(_QWORD *)(*(_QWORD *)(Prcb + 34464) + 16LL) = &WheapWorkQueue;
    }
    for ( j = qword_140CF76E8; (__int64 *)j != &qword_140CF76E8; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 104) == 7 )
      {
        *(_DWORD *)(j + 108) = 2;
        v30 = WheapCallErrorSourceInitialize(j, v2);
        if ( v30 < 0 )
        {
          BugCheckParameter4 = *(int *)(j + 104);
          *(_DWORD *)(j + 108) = 1;
          KeBugCheckEx(0x122u, 6uLL, v30, v2, BugCheckParameter4);
        }
      }
    }
    v47 = 0LL;
    if ( KeGetCurrentPrcb()->CpuVendor == 1 )
    {
      _RAX = 0x80000000LL;
      __asm { cpuid }
      *(_QWORD *)&v47 = __PAIR64__(_RBX, _RAX);
      *((_QWORD *)&v47 + 1) = __PAIR64__(_RDX, _RCX);
      if ( (unsigned int)_RAX >= 0x80000008 )
      {
        _RAX = 2147483656LL;
        __asm { cpuid }
        *(_QWORD *)&v47 = __PAIR64__(_RBX, _RAX);
        *((_QWORD *)&v47 + 1) = __PAIR64__(_RDX, _RCX);
        if ( (_RBX & 1) != 0 )
          WheapClearPoisonSupported = 1;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2648LL) & 4) == 0 && PshedIsSystemWheaEnabled() )
      WheapCheckForAndReportErrorsFromPreviousSession();
    v26 = qword_140CF76E8;
    v27 = 1;
    while ( (__int64 *)v26 != &qword_140CF76E8 )
    {
      v28 = *(_DWORD *)(v26 + 104) == 7;
      *(_DWORD *)(v26 + 124) = v27;
      if ( !v28 && !*(_BYTE *)(v26 + 88) && *(_DWORD *)(v26 + 108) == 1 )
      {
        *(_DWORD *)(v26 + 108) = 2;
        v29 = WheapCallErrorSourceInitialize(v26, v2);
        if ( v29 < 0 )
        {
          BugCheckParameter4a = *(int *)(v26 + 104);
          *(_DWORD *)(v26 + 108) = 1;
          KeBugCheckEx(0x122u, 6uLL, v29, v2, BugCheckParameter4a);
        }
      }
      v26 = *(_QWORD *)v26;
      ++v27;
    }
    WheapLogInitEvent();
    *(_QWORD *)&WheapDispatchPtr.Type = WheaWmiDispatch;
    IoWMIRegistrationControl(&WheapDispatchPtr, 0x80000001);
    WheapInitializationComplete = 1;
    v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)&WheapConfigTableLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v31 & 2) != 0 && (v31 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapConfigTableLock);
    KeAbPostRelease((ULONG_PTR)&WheapConfigTableLock);
  }
  else
  {
    WheapStatus = 0LL;
    dword_140C2C798 = 0;
    WheapErrorRecordId = MEMORY[0xFFFFF78000000014];
    WheapLoadPolicy();
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 2) == 0 )
      WheapPreviousSessionFailure = 1;
    v4 = PshedInitialize(a1, v46);
    if ( v4 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v4, 0LL, 0LL);
    PerProcessorInfo = WheapCreatePerProcessorInfo();
    if ( PerProcessorInfo < 0 )
      KeBugCheckEx(0x122u, 4uLL, PerProcessorInfo, 0LL, 0LL);
    v6 = WheapQueryPshedForErrorSources(&v48, &Address);
    if ( v6 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v6, 0LL, 0LL);
    WheapErrorSourceTable = 1279410516LL;
    stru_140CF76F8.Header.WaitListHead.Blink = &stru_140CF76F8.Header.WaitListHead;
    qword_140CF76F0 = (__int64)&qword_140CF76E8;
    qword_140CF76E8 = (__int64)&qword_140CF76E8;
    stru_140CF76F8.Header.WaitListHead.Flink = &stru_140CF76F8.Header.WaitListHead;
    dword_140CF76E0 = 1;
    LOWORD(stru_140CF76F8.Header.Lock) = 1;
    stru_140CF76F8.Header.Size = 6;
    stru_140CF76F8.Header.SignalState = 1;
    WheapInitializeEventing();
    v7 = 0;
    v8 = (int *)Address;
    if ( v48 )
    {
      do
      {
        v9 = qword_140D16A08[8 * (__int64)v8[2]](0LL, v8, 0LL);
        if ( v9 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v9, 0LL, v8[2]);
        v10 = (unsigned int)*v8;
        ++v7;
        v8[3] = 2;
        v8 = (int *)((char *)v8 + v10);
      }
      while ( v7 < v48 );
      v8 = (int *)Address;
    }
    PshedFreeMemory(v8);
  }
  return 0LL;
}
