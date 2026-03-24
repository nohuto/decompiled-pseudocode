/*
 * XREFs of PspProcessDelete @ 0x140613B20
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x140207580 (KeUnstackDetachProcess.c)
 *     KeInsertQueueDpc @ 0x14021FD00 (KeInsertQueueDpc.c)
 *     PspUnlockProcessListExclusive @ 0x140251C28 (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x14025200C (PspLockProcessListExclusive.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140252E40 (IoSetDiskIoAttributionOnProcess.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140253F54 (KiQueryUnbiasedInterruptTime.c)
 *     KeStackAttachProcess @ 0x14025B970 (KeStackAttachProcess.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140298A60 (PsReturnProcessNonPagedPoolQuota.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402C2A00 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     PsDereferencePartition @ 0x140303F4C (PsDereferencePartition.c)
 *     PsGetProcessId @ 0x1403446B0 (PsGetProcessId.c)
 *     KeInitializeDpc @ 0x1403446C0 (KeInitializeDpc.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1403FB540 (ZwDeleteWnfStateName.c)
 *     KeBugCheck @ 0x1403FD550 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     KeUnsecureProcess @ 0x140513A48 (KeUnsecureProcess.c)
 *     ExWnfExitProcess @ 0x1406132EC (ExWnfExitProcess.c)
 *     PoEnergyContextCleanup @ 0x14061410C (PoEnergyContextCleanup.c)
 *     LpcExitProcess @ 0x140614288 (LpcExitProcess.c)
 *     EtwExitProcess @ 0x140614368 (EtwExitProcess.c)
 *     SeDeassignPrimaryToken @ 0x1406143D4 (SeDeassignPrimaryToken.c)
 *     PspRemoveProcessFromJobChain @ 0x1406167F8 (PspRemoveProcessFromJobChain.c)
 *     ExDestroyHandle @ 0x14061A1D8 (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x14061BF20 (ExMapHandleToPointer.c)
 *     PspExitProcess @ 0x14062FC1C (PspExitProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x1406601A4 (MmDeleteProcessAddressSpace.c)
 *     WbRemoveWarbirdProcess @ 0x1406872A4 (WbRemoveWarbirdProcess.c)
 *     ObDereferenceDeviceMap @ 0x140693AD4 (ObDereferenceDeviceMap.c)
 *     PspDereferenceQuotaBlock @ 0x1406D91D0 (PspDereferenceQuotaBlock.c)
 *     SmProcessDeleteNotification @ 0x140929AE4 (SmProcessDeleteNotification.c)
 *     VmpProcessContextCleanup @ 0x14092FB0C (VmpProcessContextCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PspProcessDelete(PRKPROCESS PROCESS)
{
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  struct _LIST_ENTRY *v4; // rcx
  struct _LIST_ENTRY *v5; // rax
  void *v6; // rcx
  __int64 v7; // rdx
  struct _DMA_ADAPTER *v8; // rcx
  unsigned __int64 v9; // rcx
  HANDLE ProcessId; // rax
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  __int64 v12; // rax
  void *v13; // rcx
  __int128 *v14; // r9
  __int64 v15; // r8
  int v16; // r10d
  char v17; // di
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  bool v21; // zf
  __int64 v22; // rdx
  _QWORD *v23; // r11
  const char *v24; // rax
  unsigned int v25; // r10d
  unsigned __int64 v26; // rcx
  __int64 v27; // r9
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int128 *v30; // r10
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // rax
  volatile signed __int32 *v34; // rcx
  void *v35; // rcx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-40h] BYREF

  HIDWORD(PROCESS[1].DirectoryTableBase) &= ~0x4000000u;
  p_Blink = &PROCESS[1].Header.WaitListHead.Blink;
  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  if ( PROCESS[1].Header.WaitListHead.Blink )
  {
    PspLockProcessListExclusive((__int64)CurrentThread);
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
  v6 = (void *)PROCESS[1].ActiveProcessors.Bitmap[2];
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    PROCESS[1].ActiveProcessors.Bitmap[2] = 0LL;
  }
  ObDereferenceDeviceMap(PROCESS);
  if ( PROCESS[2].AffinityPadding[7] )
    ZwDeleteWnfStateName((__int64)&PROCESS[2].AffinityPadding[7], v7);
  v8 = (struct _DMA_ADAPTER *)PROCESS[1].AffinityPadding[9];
  if ( v8 )
  {
    HalPutDmaAdapter(v8);
    PROCESS[1].AffinityPadding[9] = 0LL;
  }
  v9 = PROCESS[1].Affinity.Bitmap[4];
  if ( v9 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)(v9 & 0xFFFFFFFFFFFFFFF8uLL));
    PROCESS[1].Affinity.Bitmap[4] = 0LL;
  }
  ProcessId = PsGetProcessId(PROCESS);
  WbRemoveWarbirdProcess(ProcessId);
  if ( (PROCESS[1].DirectoryTableBase & 0x4000000000000LL) != 0 )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    if ( (PROCESS[1].DirectoryTableBase & 0x400) != 0 )
      (*((void (__fastcall **)(PRKPROCESS))&xmmword_140C1E050 + 1))(PROCESS);
    PspExitProcess(0LL, PROCESS);
    KeUnstackDetachProcess(&ApcState);
    MmDeleteProcessAddressSpace((ULONG_PTR)PROCESS);
  }
  if ( PROCESS[1].Affinity.Bitmap[16] )
  {
    PspRemoveProcessFromJobChain(PROCESS);
    ObDereferenceObjectDeferDeleteWithTag((PVOID)PROCESS[1].Affinity.Bitmap[16], 0x73507350u);
    PROCESS[1].Affinity.Bitmap[16] = 0LL;
    PROCESS[1].Affinity.Bitmap[11] = 0LL;
    *(_QWORD *)&PROCESS[2].Header.Lock = MmBadPointer;
  }
  Next = PROCESS[2].SwapListEntry.Next;
  if ( Next )
    PsDereferencePartition((__int64)Next);
  if ( PROCESS->SecureState.SecureHandle )
    KeUnsecureProcess((__int64)PROCESS);
  if ( PROCESS[1].Header.WaitListHead.Flink )
  {
    --CurrentThread->SpecialApcDisable;
    v12 = ExMapHandleToPointer(PspCidTable, PROCESS[1].Header.WaitListHead.Flink);
    if ( !v12 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, PROCESS[1].Header.WaitListHead.Flink, v12);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( PROCESS[1].Affinity.Bitmap[5] )
    SeDeassignPrimaryToken(PROCESS);
  v13 = (void *)PROCESS[1].AffinityPadding[0];
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    PsReturnProcessNonPagedPoolQuota(PROCESS, 24616LL);
  }
  SmProcessDeleteNotification(PROCESS);
  EtwExitProcess(PROCESS);
  LpcExitProcess(PROCESS);
  ExWnfExitProcess((__int64)PROCESS, 1);
  IoSetDiskIoAttributionOnProcess(0LL, (__int64)PROCESS);
  PoEnergyContextCleanup(PROCESS);
  if ( PROCESS[2].Affinity.Bitmap[5] )
  {
    VmpProcessContextCleanup();
    ExFreePoolWithTag((PVOID)PROCESS[2].Affinity.Bitmap[5], 0);
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140C4C730 )
  {
    v14 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v15 = qword_140C4C720;
    v16 = 64;
    v17 = qword_140C4C728;
    v18 = qword_140C4C720;
    v19 = 8LL;
    do
    {
      v18 = __ROR8__(v18 - *(_QWORD *)v14, qword_140C4C728);
      v14 = (__int128 *)((char *)v14 + 8);
      v16 -= 8;
      --v19;
    }
    while ( v19 );
    for ( ; v16; --v16 )
    {
      v20 = *(unsigned __int8 *)v14;
      v14 = (__int128 *)((char *)v14 + 1);
      v18 = __ROR8__(v18 - v20, qword_140C4C728);
    }
    v21 = qword_140C4C738 == v18;
    v22 = qword_140C4C6F0;
    if ( !v21 && !qword_140C4C6F0 )
    {
      v17 = qword_140C4C728;
      v15 = qword_140C4C720;
      v22 = (unsigned int)__ROR4__(2120, 35);
      qword_140C4C6F0 = (unsigned int)v22;
      xmmword_140C4C6F8 = 0LL;
      qword_140C4C708 = 267LL;
      qword_140C4C710 = (__int64)&KeServiceDescriptorTable;
    }
    v23 = (_QWORD *)KeServiceDescriptorTable;
    v24 = (const char *)KeServiceDescriptorTable;
    v25 = 4 * xmmword_140E018D0;
    v26 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_140E018D0);
    if ( (unsigned __int64)KeServiceDescriptorTable < v26 )
    {
      do
      {
        _mm_prefetch(v24, 0);
        v24 += 64;
      }
      while ( (unsigned __int64)v24 < v26 );
    }
    v27 = v15;
    if ( v25 >= 8 )
    {
      v28 = (unsigned __int64)v25 >> 3;
      do
      {
        v27 = __ROR8__(v27 - *v23++, v17);
        v25 -= 8;
        --v28;
      }
      while ( v28 );
    }
    for ( ; v25; --v25 )
    {
      v29 = *(unsigned __int8 *)v23;
      v23 = (_QWORD *)((char *)v23 + 1);
      v27 = __ROR8__(v27 - v29, v17);
    }
    if ( qword_140C4C740 != v27 && !v22 )
    {
      v17 = qword_140C4C728;
      v15 = qword_140C4C720;
      v22 = (unsigned int)__ROR4__(1111490560, 150);
      qword_140C4C6F0 = (unsigned int)v22;
      xmmword_140C4C6F8 = 0LL;
      qword_140C4C708 = 267LL;
      qword_140C4C710 = KeServiceDescriptorTable;
    }
    v30 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v31 = 4LL;
    v32 = 32;
    do
    {
      v15 = __ROR8__(v15 - *(_QWORD *)v30, v17);
      v30 = (__int128 *)((char *)v30 + 8);
      v32 -= 8;
      --v31;
    }
    while ( v31 );
    for ( ; v32; --v32 )
    {
      v33 = *(unsigned __int8 *)v30;
      v30 = (__int128 *)((char *)v30 + 1);
      v15 = __ROR8__(v15 - v33, v17);
    }
    if ( qword_140C4C748 != v15 && !v22 )
    {
      qword_140C4C708 = 267LL;
      v22 = (unsigned int)__ROR4__(603979780, 186);
      qword_140C4C6F0 = (unsigned int)v22;
      xmmword_140C4C6F8 = 0LL;
      qword_140C4C710 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_140CFCA50 != (_DWORD)xmmword_140E018D0 )
    {
      if ( v22 )
        goto LABEL_53;
      v22 = (unsigned int)__ROR4__(4240, 68);
      qword_140C4C6F0 = (unsigned int)v22;
      xmmword_140C4C6F8 = 0LL;
      qword_140C4C708 = 267LL;
      qword_140C4C710 = KeServiceDescriptorTableShadow;
    }
    if ( !v22 )
    {
LABEL_58:
      qword_140C4C730 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      goto LABEL_59;
    }
LABEL_53:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))DeferredContext.DeferredRoutine != KiSchedulerDpc )
      KeInitializeDpc(&DeferredContext, (PKDEFERRED_ROUTINE)KiSchedulerDpc, &DeferredContext);
    qword_140C4C718 = 1845792LL;
    KeInsertQueueDpc(&DeferredContext, 0LL, 0LL);
    goto LABEL_58;
  }
LABEL_59:
  v34 = (volatile signed __int32 *)PROCESS[1].AffinityPadding[7];
  if ( v34 )
  {
    _InterlockedAdd(v34 + 129, 0xFFFFFFFF);
    PspDereferenceQuotaBlock((PVOID)v34);
  }
  v35 = (void *)PROCESS[1].AffinityPadding[10];
  if ( v35 )
  {
    ExFreePoolWithTag(v35, 0);
    PROCESS[1].AffinityPadding[10] = 0LL;
  }
}
