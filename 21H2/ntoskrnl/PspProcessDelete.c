/*
 * XREFs of PspProcessDelete @ 0x14067D320
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsGetProcessId @ 0x140269640 (PsGetProcessId.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140274B54 (IoSetDiskIoAttributionOnProcess.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     PspUnlockProcessListExclusive @ 0x140285280 (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x140285664 (PspLockProcessListExclusive.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140323130 (PsReturnProcessNonPagedPoolQuota.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14034D0C0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1403FC0A0 (ZwDeleteWnfStateName.c)
 *     KeBugCheck @ 0x1403FE0B0 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KeUnsecureProcess @ 0x140513D48 (KeUnsecureProcess.c)
 *     PspDereferenceQuotaBlock @ 0x140655230 (PspDereferenceQuotaBlock.c)
 *     ObDereferenceDeviceMap @ 0x14067BE28 (ObDereferenceDeviceMap.c)
 *     WbRemoveWarbirdProcess @ 0x14067BEB0 (WbRemoveWarbirdProcess.c)
 *     PspExitProcess @ 0x14067C00C (PspExitProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x14067C848 (MmDeleteProcessAddressSpace.c)
 *     PoEnergyContextCleanup @ 0x14067D90C (PoEnergyContextCleanup.c)
 *     LpcExitProcess @ 0x14067DA88 (LpcExitProcess.c)
 *     EtwExitProcess @ 0x14067DB68 (EtwExitProcess.c)
 *     SeDeassignPrimaryToken @ 0x14067DBD4 (SeDeassignPrimaryToken.c)
 *     PspRemoveProcessFromJobChain @ 0x14067FFF8 (PspRemoveProcessFromJobChain.c)
 *     ExDestroyHandle @ 0x1406839D8 (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x140685770 (ExMapHandleToPointer.c)
 *     ExWnfExitProcess @ 0x1406A293C (ExWnfExitProcess.c)
 *     SmProcessDeleteNotification @ 0x140929BF4 (SmProcessDeleteNotification.c)
 *     VmpProcessContextCleanup @ 0x14092FC1C (VmpProcessContextCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PspProcessDelete(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v1; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  void *v6; // rcx
  struct _DMA_ADAPTER *v7; // rcx
  __int64 v8; // rcx
  int ProcessId; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // rcx
  __int128 *v13; // r9
  __int64 v14; // r8
  int v15; // r10d
  char v16; // di
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // rdx
  _QWORD *v22; // r11
  const char *v23; // rax
  unsigned int v24; // r10d
  unsigned __int64 v25; // rcx
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int128 *v29; // r10
  __int64 v30; // rax
  int v31; // r9d
  __int64 v32; // rax
  volatile signed __int32 *v33; // rcx
  void *v34; // rcx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-40h] BYREF

  *(_DWORD *)(BugCheckParameter2 + 1124) &= ~0x4000000u;
  v1 = (_QWORD *)(BugCheckParameter2 + 1096);
  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter2 + 1096) )
  {
    PspLockProcessListExclusive((__int64)CurrentThread);
    v4 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v5 = (_QWORD *)v1[1], (_QWORD *)*v5 != v1) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
  }
  v6 = *(void **)(BugCheckParameter2 + 1472);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(BugCheckParameter2 + 1472) = 0LL;
  }
  ObDereferenceDeviceMap(BugCheckParameter2);
  if ( *(_QWORD *)(BugCheckParameter2 + 2464) )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)(BugCheckParameter2 + 2464));
  v7 = *(struct _DMA_ADAPTER **)(BugCheckParameter2 + 1400);
  if ( v7 )
  {
    HalPutDmaAdapter(v7);
    *(_QWORD *)(BugCheckParameter2 + 1400) = 0LL;
  }
  v8 = *(_QWORD *)(BugCheckParameter2 + 1200);
  if ( v8 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)(v8 & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(BugCheckParameter2 + 1200) = 0LL;
  }
  ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)BugCheckParameter2);
  WbRemoveWarbirdProcess(ProcessId);
  if ( (*(_DWORD *)(BugCheckParameter2 + 1124) & 0x40000) != 0 )
  {
    KeStackAttachProcess((PRKPROCESS)BugCheckParameter2, &ApcState);
    if ( (*(_DWORD *)(BugCheckParameter2 + 1120) & 0x400) != 0 )
      (*((void (__fastcall **)(ULONG_PTR))&xmmword_140C1E050 + 1))(BugCheckParameter2);
    PspExitProcess(0, BugCheckParameter2);
    KeUnstackDetachProcess(&ApcState);
    MmDeleteProcessAddressSpace(BugCheckParameter2);
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 1296) )
  {
    PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter2);
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(BugCheckParameter2 + 1296), 0x73507350u);
    *(_QWORD *)(BugCheckParameter2 + 1296) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 1256) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 2160) = MmBadPointer;
  }
  v10 = *(_QWORD *)(BugCheckParameter2 + 2520);
  if ( v10 )
    PsDereferencePartition(v10);
  if ( *(_QWORD *)(BugCheckParameter2 + 992) )
    KeUnsecureProcess(BugCheckParameter2);
  if ( *(_QWORD *)(BugCheckParameter2 + 1088) )
  {
    --CurrentThread->SpecialApcDisable;
    v11 = ExMapHandleToPointer(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 1088));
    if ( !v11 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 1088), v11);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 1208) )
    SeDeassignPrimaryToken(BugCheckParameter2);
  v12 = *(void **)(BugCheckParameter2 + 1328);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)BugCheckParameter2, 24616LL);
  }
  SmProcessDeleteNotification(BugCheckParameter2);
  EtwExitProcess(BugCheckParameter2);
  LpcExitProcess(BugCheckParameter2);
  ExWnfExitProcess(BugCheckParameter2, 1LL);
  IoSetDiskIoAttributionOnProcess(0LL, BugCheckParameter2);
  PoEnergyContextCleanup(BugCheckParameter2);
  if ( *(_QWORD *)(BugCheckParameter2 + 2288) )
  {
    VmpProcessContextCleanup();
    ExFreePoolWithTag(*(PVOID *)(BugCheckParameter2 + 2288), 0);
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140C4C770 )
  {
    v13 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v14 = qword_140C4C760;
    v15 = 64;
    v16 = qword_140C4C768;
    v17 = qword_140C4C760;
    v18 = 8LL;
    do
    {
      v17 = __ROR8__(v17 - *(_QWORD *)v13, qword_140C4C768);
      v13 = (__int128 *)((char *)v13 + 8);
      v15 -= 8;
      --v18;
    }
    while ( v18 );
    for ( ; v15; --v15 )
    {
      v19 = *(unsigned __int8 *)v13;
      v13 = (__int128 *)((char *)v13 + 1);
      v17 = __ROR8__(v17 - v19, qword_140C4C768);
    }
    v20 = qword_140C4C778 == v17;
    v21 = qword_140C4C730;
    if ( !v20 && !qword_140C4C730 )
    {
      v16 = qword_140C4C768;
      v14 = qword_140C4C760;
      v21 = (unsigned int)__ROR4__(2120, 35);
      qword_140C4C730 = (unsigned int)v21;
      xmmword_140C4C738 = 0LL;
      qword_140C4C748 = 267LL;
      qword_140C4C750 = (__int64)&KeServiceDescriptorTable;
    }
    v22 = (_QWORD *)KeServiceDescriptorTable;
    v23 = (const char *)KeServiceDescriptorTable;
    v24 = 4 * xmmword_140E018D0;
    v25 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_140E018D0);
    if ( (unsigned __int64)KeServiceDescriptorTable < v25 )
    {
      do
      {
        _mm_prefetch(v23, 0);
        v23 += 64;
      }
      while ( (unsigned __int64)v23 < v25 );
    }
    v26 = v14;
    if ( v24 >= 8 )
    {
      v27 = (unsigned __int64)v24 >> 3;
      do
      {
        v26 = __ROR8__(v26 - *v22++, v16);
        v24 -= 8;
        --v27;
      }
      while ( v27 );
    }
    for ( ; v24; --v24 )
    {
      v28 = *(unsigned __int8 *)v22;
      v22 = (_QWORD *)((char *)v22 + 1);
      v26 = __ROR8__(v26 - v28, v16);
    }
    if ( qword_140C4C780 != v26 && !v21 )
    {
      v16 = qword_140C4C768;
      v14 = qword_140C4C760;
      v21 = (unsigned int)__ROR4__(1111490560, 150);
      qword_140C4C730 = (unsigned int)v21;
      xmmword_140C4C738 = 0LL;
      qword_140C4C748 = 267LL;
      qword_140C4C750 = KeServiceDescriptorTable;
    }
    v29 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v30 = 4LL;
    v31 = 32;
    do
    {
      v14 = __ROR8__(v14 - *(_QWORD *)v29, v16);
      v29 = (__int128 *)((char *)v29 + 8);
      v31 -= 8;
      --v30;
    }
    while ( v30 );
    for ( ; v31; --v31 )
    {
      v32 = *(unsigned __int8 *)v29;
      v29 = (__int128 *)((char *)v29 + 1);
      v14 = __ROR8__(v14 - v32, v16);
    }
    if ( qword_140C4C788 != v14 && !v21 )
    {
      qword_140C4C748 = 267LL;
      v21 = (unsigned int)__ROR4__(603979780, 186);
      qword_140C4C730 = (unsigned int)v21;
      xmmword_140C4C738 = 0LL;
      qword_140C4C750 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_140CFCA50 != (_DWORD)xmmword_140E018D0 )
    {
      if ( v21 )
        goto LABEL_53;
      v21 = (unsigned int)__ROR4__(4240, 68);
      qword_140C4C730 = (unsigned int)v21;
      xmmword_140C4C738 = 0LL;
      qword_140C4C748 = 267LL;
      qword_140C4C750 = KeServiceDescriptorTableShadow;
    }
    if ( !v21 )
    {
LABEL_58:
      qword_140C4C770 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      goto LABEL_59;
    }
LABEL_53:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))DeferredContext.DeferredRoutine != KiSchedulerDpc )
      KeInitializeDpc(&DeferredContext, (PKDEFERRED_ROUTINE)KiSchedulerDpc, &DeferredContext);
    qword_140C4C758 = 1845792LL;
    KeInsertQueueDpc(&DeferredContext, 0LL, 0LL);
    goto LABEL_58;
  }
LABEL_59:
  v33 = *(volatile signed __int32 **)(BugCheckParameter2 + 1384);
  if ( v33 )
  {
    _InterlockedAdd(v33 + 129, 0xFFFFFFFF);
    PspDereferenceQuotaBlock(v33);
  }
  v34 = *(void **)(BugCheckParameter2 + 1408);
  if ( v34 )
  {
    ExFreePoolWithTag(v34, 0);
    *(_QWORD *)(BugCheckParameter2 + 1408) = 0LL;
  }
}
