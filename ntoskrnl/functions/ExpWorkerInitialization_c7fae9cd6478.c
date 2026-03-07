__int64 ExpWorkerInitialization()
{
  int v0; // eax
  unsigned int v1; // eax
  unsigned __int16 i; // bx
  char *v3; // rcx
  __int64 result; // rax
  unsigned int v5; // ebp
  _QWORD *v6; // r8
  const char *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ebx
  unsigned int v11; // ecx
  __int64 v12; // rdi
  __int64 *v13; // rdx
  signed __int64 *v14; // rsi
  signed __int64 v15; // rax
  signed __int64 v16; // rdx
  signed __int64 v17; // rtt
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v23; // rsi
  __int64 v24; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v26; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  int SessionId; // eax
  struct _KTHREAD *v32; // rcx
  bool v33; // zf
  __int64 v34; // rax
  unsigned int v35; // [rsp+50h] [rbp+8h]

  ExpWorkerSwapinMutex.Event.Header.Size = 6;
  ExpWorkerSwapinMutex.Owner = 0LL;
  ExpWorkerSwapinMutex.Event.Header.WaitListHead.Blink = &ExpWorkerSwapinMutex.Event.Header.WaitListHead;
  ExpWorkerSwapinMutex.Event.Header.WaitListHead.Flink = &ExpWorkerSwapinMutex.Event.Header.WaitListHead;
  v0 = ExpMaximumKernelWorkerThreads;
  ExpWorkerSwapinMutex.Count = 1;
  ExpWorkerSwapinMutex.Contention = 0;
  LOWORD(ExpWorkerSwapinMutex.Event.Header.Lock) = 1;
  ExpWorkerSwapinMutex.Event.Header.SignalState = 0;
  ExpWorkersCanSwap = 1;
  if ( ExpMaximumKernelWorkerThreads > 0x4000 )
  {
    v0 = 0x4000;
    ExpMaximumKernelWorkerThreads = 0x4000;
  }
  if ( v0 < 32 )
    ExpMaximumKernelWorkerThreads = 32;
  v1 = ExpWorkerThreadTimeoutInSeconds;
  if ( (unsigned int)ExpWorkerThreadTimeoutInSeconds > 0xE10 )
  {
    v1 = 3600;
    ExpWorkerThreadTimeoutInSeconds = 3600;
  }
  if ( v1 < 0x3C )
    ExpWorkerThreadTimeoutInSeconds = 60;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v3 = (char *)KeNodeBlock[i];
    if ( v3 == (char *)&KiNodeInit + 304 * i )
      v3 = 0LL;
    ExpNodeInitialize((__int64)v3);
  }
  result = ExpPartitionInitialize((__int64)PspSystemPartition);
  if ( (int)result >= 0 )
  {
    result = ExpPartitionStart(*((_QWORD *)PspSystemPartition + 2));
    v5 = result;
    if ( (int)result >= 0 )
    {
      ExpLegacyWorkerInitialization();
      _mm_lfence();
      if ( !qword_140C64750 )
      {
        v18 = __rdtsc();
        v19 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v18) << 32) | (unsigned int)v18) >> 4)) ^ 0xBD6LL;
        if ( !v19 )
          v19 = 1LL;
        qword_140C64750 = v19;
        v20 = __rdtsc();
        v21 = 0LL;
        qword_140C64758 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) >> 4)) ^ 0x5EBLL;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v23 = KeGetCurrentThread();
        v24 = (__int64)ObpTypeObjectType + 184;
        _disable();
        AbEntrySummary = v23->AbEntrySummary;
        if ( v23->AbEntrySummary
          || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)ObpTypeObjectType + 184, (__int64)v23)) != 0 )
        {
          _BitScanForward(&v26, AbEntrySummary);
          v35 = v26;
          v23->AbEntrySummary = AbEntrySummary & ~(1 << v26);
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v29 = *SchedulerAssist;
            do
            {
              v30 = v29;
              v29 = _InterlockedCompareExchange(SchedulerAssist, v29 & 0xFFDFFFFF, v29);
            }
            while ( v30 != v29 );
            if ( (v29 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          _enable();
          v21 = (__int64)(&v23[1].Process + 12 * v35);
          if ( (unsigned __int64)(v24 - qword_140C65668) >= 0x8000000000LL )
            SessionId = -1;
          else
            SessionId = MmGetSessionIdEx((__int64)v23->ApcState.Process);
          *(_DWORD *)(v21 + 8) = SessionId;
          *(_QWORD *)v21 = v24 & 0x7FFFFFFFFFFFFFFCLL;
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)v24, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v24, v21, v24);
        if ( v21 )
          *(_BYTE *)(v21 + 18) = 1;
        v11 = 0;
        v10 = 64;
        v12 = *((unsigned int *)ObpTypeObjectType + 11);
        qword_140C64768 = v12;
        if ( (_DWORD)v12 )
        {
          v13 = ObpObjectTypes;
          while ( *v13 )
          {
            if ( (*(_BYTE *)(*v13 + 66) & 0x40) != 0 )
              _bittestandset64(qword_140C64770, v11);
            ++v11;
            ++v13;
            if ( v11 >= (unsigned int)v12 )
              goto LABEL_36;
          }
          LODWORD(v12) = v11;
          qword_140C64768 = v11;
        }
LABEL_36:
        v14 = (signed __int64 *)((char *)ObpTypeObjectType + 184);
        _m_prefetchw((char *)ObpTypeObjectType + 184);
        v15 = *v14;
        v16 = *v14 - 16;
        if ( (*v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v16 = 0LL;
        if ( (v15 & 2) != 0 || (v17 = *v14, v17 != _InterlockedCompareExchange64(v14, v16, v15)) )
          ExfReleasePushLock(v14);
        KeAbPostRelease((ULONG_PTR)v14);
        v32 = KeGetCurrentThread();
        v33 = v32->SpecialApcDisable++ == -1;
        if ( v33 && ($C71981A45BEB2B45F82C232A7085991E *)v32->ApcState.ApcListHead[0].Flink != &v32->152 )
          KiCheckForKernelApcDelivery();
        if ( (_DWORD)v12 )
        {
          qword_140C64790 = ObpObjectTypes[41929663 * (__rdtsc() >> 4) % (unsigned int)v12];
          v6 = (_QWORD *)(qword_140C64790 + 112);
          v7 = (const char *)(qword_140C64790 + 112);
          if ( qword_140C64790 + 112 < (unsigned __int64)(qword_140C64790 + 176) )
          {
            do
            {
              _mm_prefetch(v7, 0);
              v7 += 64;
            }
            while ( (unsigned __int64)v7 < qword_140C64790 + 176 );
          }
          v8 = qword_140C64750;
          v9 = 8LL;
          do
          {
            v8 = __ROR8__(v8 - *v6++, qword_140C64758);
            v10 -= 8;
            --v9;
          }
          while ( v9 );
          for ( ; v10; --v10 )
          {
            v34 = *(unsigned __int8 *)v6;
            v6 = (_QWORD *)((char *)v6 + 1);
            v8 = __ROR8__(v8 - v34, qword_140C64758);
          }
          qword_140C64798 = v8;
          qword_140C64760 = KiQueryUnbiasedInterruptTime()
                          + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                          + 288000000000LL;
        }
        else
        {
          qword_140C64750 = 0LL;
        }
      }
      LODWORD(ExpDebuggerDpc) = 275;
      qword_140C2D138 = (__int64)ExpDebuggerDpcRoutine;
      ExpDebuggerWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpDebuggerWorker;
      qword_140C2D140 = 0LL;
      qword_140C2D158 = 0LL;
      qword_140C2D130 = 0LL;
      ExpDebuggerWorkItem.Parameter = 0LL;
      ExpDebuggerWorkItem.List.Flink = 0LL;
      ExpDebuggerWork = 1;
      ExQueueDebuggerWorker();
      return v5;
    }
  }
  return result;
}
