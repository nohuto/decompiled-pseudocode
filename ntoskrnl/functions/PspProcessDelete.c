void __fastcall PspProcessDelete(PEPROCESS Process)
{
  struct _LIST_ENTRY **p_Blink; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  struct _LIST_ENTRY *v4; // rcx
  struct _LIST_ENTRY *v5; // rax
  void *v6; // rcx
  __int64 v7; // rdx
  void *v8; // rcx
  unsigned __int64 v9; // rcx
  HANDLE ProcessId; // rax
  struct _KEVENT *v11; // rdx
  __int64 v12; // rax
  bool v13; // zf
  void *v14; // rcx
  int v15; // edi
  __int64 ProcessPartition; // rax
  __int64 v17; // rcx
  int v18; // r8d
  __int128 *v19; // r9
  __int64 v20; // r8
  int v21; // r10d
  char v22; // di
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // r11
  const char *v28; // rax
  unsigned int v29; // r10d
  unsigned __int64 v30; // rcx
  __int64 v31; // r9
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int128 *v34; // r10
  __int64 v35; // rax
  int v36; // r9d
  __int64 v37; // rax
  volatile signed __int32 *v38; // rcx
  void *PerProcessorCycleTimes; // rcx
  void *v40; // rcx
  $115DCDF994C6370D29323EAB0E0C9502 v41; // [rsp+30h] [rbp-68h] BYREF

  HIDWORD(Process[1].DirectoryTableBase) &= ~0x4000000u;
  p_Blink = &Process[1].Header.WaitListHead.Blink;
  memset(&v41, 0, sizeof(v41));
  CurrentThread = KeGetCurrentThread();
  if ( Process[1].Header.WaitListHead.Blink )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
    v4 = *p_Blink;
    if ( (struct _LIST_ENTRY **)(*p_Blink)->Blink != p_Blink
      || (v5 = p_Blink[1], (struct _LIST_ENTRY **)v5->Flink != p_Blink) )
    {
      __fastfail(3u);
    }
    v5->Flink = v4;
    v4->Blink = v5;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
  }
  v6 = (void *)Process[1].ActiveProcessors.StaticBitmap[2];
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    Process[1].ActiveProcessors.StaticBitmap[2] = 0LL;
  }
  ObClearProcessDeviceMap((__int64)Process);
  if ( Process[2].Affinity.StaticBitmap[27] )
    ZwDeleteWnfStateName((__int64)&Process[2].Affinity.StaticBitmap[27], v7);
  v8 = (void *)Process[1].Affinity.StaticBitmap[29];
  if ( v8 )
  {
    ObfDereferenceObject(v8);
    Process[1].Affinity.StaticBitmap[29] = 0LL;
  }
  v9 = Process[1].Affinity.StaticBitmap[4];
  if ( v9 )
  {
    ObfDereferenceObject((PVOID)(v9 & 0xFFFFFFFFFFFFFFF8uLL));
    Process[1].Affinity.StaticBitmap[4] = 0LL;
  }
  if ( *(_QWORD *)&Process[2].IdealProcessor[14] )
    PspDetachProcessFromSyscallProvider(Process);
  ProcessId = PsGetProcessId(Process);
  WbRemoveWarbirdProcess(ProcessId);
  if ( _bittest((const signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x12u) )
  {
    KiStackAttachProcess(Process, 0, (__int64)&v41);
    if ( (Process[1].DirectoryTableBase & 0x400) != 0 )
      (*((void (__fastcall **)(PEPROCESS))&xmmword_140C37D30 + 1))(Process);
    PspExitProcess(0LL, Process);
    KiUnstackDetachProcess(&v41);
    MmDeleteProcessAddressSpace((ULONG_PTR)Process);
  }
  if ( Process[1].Affinity.StaticBitmap[16] )
  {
    PspRemoveProcessFromJobChain(Process, 0LL, 1u, 0);
    ObDereferenceObjectDeferDeleteWithTag((PVOID)Process[1].Affinity.StaticBitmap[16], 0x73507350u);
    Process[1].Affinity.StaticBitmap[16] = 0LL;
    Process[1].Affinity.StaticBitmap[11] = 0LL;
    *(_QWORD *)&Process[2].Header.Lock = MmBadPointer;
  }
  if ( Process->SecureState.SecureHandle )
    KeUnsecureProcess((__int64)Process);
  if ( Process[1].Header.WaitListHead.Flink )
  {
    --CurrentThread->SpecialApcDisable;
    v12 = ExMapHandleToPointer(PspCidTable, Process[1].Header.WaitListHead.Flink);
    if ( !v12 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, Process[1].Header.WaitListHead.Flink, v12);
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( Process[1].Affinity.StaticBitmap[5] )
    SeDeassignPrimaryToken(Process);
  v14 = (void *)Process[1].Affinity.StaticBitmap[20];
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    PsReturnProcessNonPagedPoolQuota(Process, 24616LL);
  }
  if ( Process[2].SwapListEntry.Next )
  {
    v15 = 0;
    if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x40000000) == 0
      || SmCompressionProcessHoldsPartitionReference((__int64)Process) )
    {
      v15 = 1;
    }
    if ( _bittest((const signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x12u) )
    {
      ProcessPartition = SmpGetProcessPartition((__int64)Process);
      if ( v18 )
      {
        if ( !SmCompressionProcessHoldsPartitionReference(v17) )
          KeSetEvent(v11 + 84, 0, 0);
      }
      else
      {
        SmpKeyedStoreDeleteInitiate(ProcessPartition + 2072, ProcessPartition, Process);
      }
    }
    if ( v15 )
      PsDereferencePartition((__int64)Process[2].SwapListEntry.Next);
  }
  EtwExitProcess((__int64)Process, (__int64)v11);
  LpcExitProcess(Process);
  ExWnfExitProcess((__int64)Process, 1);
  IoSetDiskIoAttributionOnProcess(0LL, (__int64)Process);
  PoEnergyContextCleanup((__int64)Process);
  if ( Process[2].Affinity.StaticBitmap[5] )
  {
    VmpProcessContextCleanup();
    ExFreePoolWithTag((PVOID)Process[2].Affinity.StaticBitmap[5], 0);
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140C64820 )
  {
    v19 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v20 = qword_140C64810;
    v21 = 64;
    v22 = qword_140C64818;
    v23 = qword_140C64810;
    v24 = 8LL;
    do
    {
      v23 = __ROR8__(v23 - *(_QWORD *)v19, qword_140C64818);
      v19 = (__int128 *)((char *)v19 + 8);
      v21 -= 8;
      --v24;
    }
    while ( v24 );
    for ( ; v21; --v21 )
    {
      v25 = *(unsigned __int8 *)v19;
      v19 = (__int128 *)((char *)v19 + 1);
      v23 = __ROR8__(v23 - v25, qword_140C64818);
    }
    v13 = qword_140C64828 == v23;
    v26 = qword_140C647E0;
    if ( !v13 && !qword_140C647E0 )
    {
      v22 = qword_140C64818;
      v20 = qword_140C64810;
      v26 = (unsigned int)__ROR4__(2120, 35);
      qword_140C647E0 = (unsigned int)v26;
      xmmword_140C647E8 = 0LL;
      qword_140C647F8 = 267LL;
      qword_140C64800 = (__int64)&KeServiceDescriptorTable;
    }
    v27 = (_QWORD *)KeServiceDescriptorTable;
    v28 = (const char *)KeServiceDescriptorTable;
    v29 = 4 * xmmword_140E018D0;
    v30 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_140E018D0);
    if ( (unsigned __int64)KeServiceDescriptorTable < v30 )
    {
      do
      {
        _mm_prefetch(v28, 0);
        v28 += 64;
      }
      while ( (unsigned __int64)v28 < v30 );
    }
    v31 = v20;
    if ( v29 >= 8 )
    {
      v32 = (unsigned __int64)v29 >> 3;
      do
      {
        v31 = __ROR8__(v31 - *v27++, v22);
        v29 -= 8;
        --v32;
      }
      while ( v32 );
    }
    for ( ; v29; --v29 )
    {
      v33 = *(unsigned __int8 *)v27;
      v27 = (_QWORD *)((char *)v27 + 1);
      v31 = __ROR8__(v31 - v33, v22);
    }
    if ( qword_140C64830 != v31 && !v26 )
    {
      v22 = qword_140C64818;
      v20 = qword_140C64810;
      v26 = (unsigned int)__ROR4__(1111490560, 150);
      qword_140C647E0 = (unsigned int)v26;
      xmmword_140C647E8 = 0LL;
      qword_140C647F8 = 267LL;
      qword_140C64800 = KeServiceDescriptorTable;
    }
    v34 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v35 = 4LL;
    v36 = 32;
    do
    {
      v20 = __ROR8__(v20 - *(_QWORD *)v34, v22);
      v34 = (__int128 *)((char *)v34 + 8);
      v36 -= 8;
      --v35;
    }
    while ( v35 );
    for ( ; v36; --v36 )
    {
      v37 = *(unsigned __int8 *)v34;
      v34 = (__int128 *)((char *)v34 + 1);
      v20 = __ROR8__(v20 - v37, v22);
    }
    if ( qword_140C64838 != v20 && !v26 )
    {
      qword_140C647F8 = 267LL;
      v26 = (unsigned int)__ROR4__(603979780, 186);
      qword_140C647E0 = (unsigned int)v26;
      xmmword_140C647E8 = 0LL;
      qword_140C64800 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_140D1F150 != (_DWORD)xmmword_140E018D0 )
    {
      if ( v26 )
        goto LABEL_63;
      v26 = (unsigned int)__ROR4__(4240, 68);
      qword_140C647E0 = (unsigned int)v26;
      xmmword_140C647E8 = 0LL;
      qword_140C647F8 = 267LL;
      qword_140C64800 = KeServiceDescriptorTableShadow;
    }
    if ( !v26 )
    {
LABEL_68:
      qword_140C64820 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      goto LABEL_69;
    }
LABEL_63:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))DeferredContext.DeferredRoutine != KiSchedulerDpc )
      KeInitializeDpc(&DeferredContext, (PKDEFERRED_ROUTINE)KiSchedulerDpc, &DeferredContext);
    qword_140C64808 = 1845792LL;
    KeInsertQueueDpc(&DeferredContext, 0LL, 0LL);
    goto LABEL_68;
  }
LABEL_69:
  v38 = (volatile signed __int32 *)Process[1].Affinity.StaticBitmap[27];
  if ( v38 )
  {
    _InterlockedAdd(v38 + 129, 0xFFFFFFFF);
    PspDereferenceQuotaBlock(v38);
  }
  PerProcessorCycleTimes = Process->PerProcessorCycleTimes;
  if ( PerProcessorCycleTimes )
    ExSaFree((unsigned int)PerProcessorCycleTimes);
  KiRemoveAndFreeCpuPartitionAssignmentProcess((__int64)Process);
  v40 = (void *)Process[1].Affinity.StaticBitmap[30];
  if ( v40 )
  {
    ExFreePoolWithTag(v40, 0);
    Process[1].Affinity.StaticBitmap[30] = 0LL;
  }
}
