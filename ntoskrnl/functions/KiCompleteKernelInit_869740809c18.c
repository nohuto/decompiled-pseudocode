__int64 __fastcall KiCompleteKernelInit(__int64 a1, __int64 a2, int a3)
{
  char v3; // bl
  unsigned __int8 CurrentIrql; // cl
  int v8; // eax
  __int64 v9; // rdx
  int HeteroConfigBuffer; // eax
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rax
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v14 = 0LL;
  if ( !a3 )
  {
    *(_DWORD *)(a1 + 13224) = KiMaximumDpcQueueDepth;
    *(_DWORD *)(a1 + 13232) = KiMinimumDpcRate;
    *(_DWORD *)(a1 + 33108) = KiAdjustDpcThreshold;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v13) = 4;
    if ( CurrentIrql != 2 )
      v13 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v13;
  }
  _enable();
  KeAttachProcess(PsInitialSystemProcess);
  if ( !a3 )
  {
    qword_140C42198 = 0LL;
    qword_140C42190 = (__int64)&qword_140C42188;
    qword_140C42188 = (__int64)&qword_140C42188;
    KeInitializeTimer2((__int64)&KiForegroundState, (__int64)KiForegroundTimerCallback, 0LL, 8LL);
    KeInitializeDpc((PRKDPC)&stru_140C42108, (PKDEFERRED_ROUTINE)KiProcessPendingForegroundBoosts, 0LL);
    KeInitializeDpc((PRKDPC)&stru_140C42148, (PKDEFERRED_ROUTINE)KiTriggerForegroundBoostDpc, 0LL);
    KeInitializeDpc(
      (PRKDPC)&KiUpdateVpThreadPriorityDpc,
      (PKDEFERRED_ROUTINE)KiUpdateVpBackingThreadPriorityDpcRoutine,
      0LL);
    BYTE1(KiUpdateVpThreadPriorityDpc) = 2;
    qword_140C421A8 = (__int64)&KiUpdateVpThreadPriorityListHead;
    KiUpdateVpThreadPriorityListHead = (__int64)&KiUpdateVpThreadPriorityListHead;
    KiUpdateVpThreadPriorityLock = 0LL;
    HeteroConfigBuffer = KiAllocateHeteroConfigBuffer();
    if ( HeteroConfigBuffer < 0 )
      KeBugCheckEx(0x31u, HeteroConfigBuffer, 0xDuLL, 0LL, 0LL);
  }
  v8 = KiInitializeThreadCycleTable(a1);
  if ( v8 < 0 )
    KeBugCheckEx(0x31u, v8, 0xCuLL, 0LL, 0LL);
  _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(a1 + 192) + 80LL), *(unsigned __int8 *)(a1 + 209));
  _interlockedbittestandset64(
    (volatile signed __int32 *)(*(_QWORD *)(a1 + 192) + 104LL),
    *(unsigned __int8 *)(a1 + 209));
  KiAcquirePrcbLocksForIsolationUnit(a1, 0, &v14);
  *(_BYTE *)(a1 + 35) = 1;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v3 = 1;
    KiSetProcessorIdle(a1, 1, 1);
  }
  KiUpdateThreadPriority(a1, v9, a2, 0, v3);
  KiReleasePrcbLocksForIsolationUnit(&v14);
  KiAddCpuToSystemCpuPartition(a1);
  return KiCreateCpuSetForProcessor(a1);
}
