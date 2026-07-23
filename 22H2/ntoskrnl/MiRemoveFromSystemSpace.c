/*
 * XREFs of MiRemoveFromSystemSpace @ 0x1402854CC
 * Callers:
 *     MiInsertInSystemSpace @ 0x14027B460 (MiInsertInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14066BB40 (MiUnmapImageInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x14068F560 (MmUnmapViewInSystemSpace.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x140234490 (RtlAvlRemoveNode.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiRemoveMappedPtes @ 0x140288B80 (MiRemoveMappedPtes.c)
 *     MiManageSubsectionView @ 0x140291780 (MiManageSubsectionView.c)
 *     MiGetSessionVm @ 0x14029281C (MiGetSessionVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     MiUnmapLargePages @ 0x140394BE4 (MiUnmapLargePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiDereferencePerSessionProtos @ 0x14069F60C (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveFromSystemSpace(_QWORD *a1, ULONG_PTR a2, int a3)
{
  _QWORD *v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v8; // r14
  _QWORD *v9; // rdx
  unsigned int SessionId; // r13d
  LONG *SharedVm; // rbx
  KIRQL v12; // al
  unsigned __int8 v13; // di
  unsigned __int64 i; // rbx
  unsigned __int64 v15; // r8
  struct _DMA_ADAPTER *v16; // r12
  __int64 v17; // r15
  ULONG_PTR v18; // rbp
  struct _KTHREAD *v19; // rdi
  unsigned int v20; // edx
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  void *v29; // rcx
  volatile LONG *v30; // rdi
  KIRQL v31; // al
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v36; // eax
  char *AnyMultiplexedVm; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v38; // [rsp+40h] [rbp-E8h]
  struct _KTHREAD *v39; // [rsp+48h] [rbp-E0h]
  _QWORD v40[27]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int8 v42; // [rsp+138h] [rbp+10h]

  v4 = a1;
  memset(v40, 0, 0x90uLL);
  CurrentThread = KeGetCurrentThread();
  v39 = CurrentThread;
  v8 = (_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( v4 == (_QWORD *)&unk_140C4CD68 )
  {
    v38 = 0LL;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  }
  else
  {
    AnyMultiplexedVm = (char *)MiGetSessionVm(v5, &unk_140C4CD68, v6);
    v38 = CurrentThread->ApcState.Process[1].AffinityPadding[5];
  }
  SessionId = -1;
  if ( (a2 & 0x3FFFFFFF) == 0 && v4 == v9 )
  {
    v30 = (volatile LONG *)((char *)&unk_140C4CDB0 + 16 * (unsigned __int8)(a2 >> 30));
    v31 = ExAcquireSpinLockExclusive(v30 + 3);
    i = *(_QWORD *)v30;
    v32 = v31;
    while ( i )
    {
      v33 = *(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 >= v33 + *(_QWORD *)(i + 32) )
      {
        i = *(_QWORD *)(i + 8);
      }
      else
      {
        if ( a2 >= v33 )
        {
          RtlAvlRemoveNode((unsigned __int64 *)v30, (unsigned __int64 *)i);
          --*((_DWORD *)v30 + 2);
          break;
        }
        i = *(_QWORD *)i;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v30 + 3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v32 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
          v21 = (v36 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v36;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v32);
    if ( i )
    {
      v16 = *(struct _DMA_ADAPTER **)(i + 64);
      v17 = **(_QWORD **)(i + 48);
      goto LABEL_28;
    }
    v4 = a1;
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v4[1], 0LL);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v12 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v13 = v12;
  for ( i = v4[2]; ; i = *(_QWORD *)i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, a2, 1uLL, 0LL, 0LL);
      v15 = *(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 < v15 + *(_QWORD *)(i + 32) )
        break;
      i = *(_QWORD *)(i + 8);
    }
    if ( a2 >= v15 )
      break;
  }
  --*((_DWORD *)v4 + 6);
  RtlAvlRemoveNode(v4 + 2, (unsigned __int64 *)i);
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v13);
  v16 = *(struct _DMA_ADAPTER **)(i + 64);
  v17 = **(_QWORD **)(i + 48);
  v40[0] = v17;
  MiManageSubsectionView(v40, i + 72, 4LL);
  v18 = v4[1];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v18);
  v19 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v18) == 1 )
    SessionId = MmGetSessionIdEx(v19->ApcState.Process);
  --v19->SpecialApcDisable;
  v42 = ++v19->AbAllocationRegionCount;
  v20 = ((char)v19->AbEntrySummary | (char)v19->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v21 = !_BitScanReverse((unsigned int *)&v22, v20);
    if ( v21 )
      break;
    v23 = (__int64)&v19->LockEntries[v22];
    v20 &= ~(1 << v22);
    if ( (*(_BYTE *)(v23 + 26) & 1) != 0
      && (*(_DWORD *)(v23 + 32) & 1) == 0
      && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v18 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v23 + 40) == SessionId )
    {
      *(_BYTE *)(v23 + 26) &= ~1u;
      if ( *(_QWORD *)(v23 + 32) )
      {
        if ( v23 )
        {
          *(_BYTE *)(v23 + 32) |= 2u;
          if ( *(__int64 *)(v23 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23);
          *(_DWORD *)(v23 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v23 + 25) &= ~1u;
          *(_QWORD *)(v23 + 32) = 0LL;
          v24 = (signed __int64)(v23 - (unsigned __int64)v19->LockEntries) / 96;
          if ( v42 == 1 )
            v19->AbEntrySummary |= 1 << v24;
          else
            _InterlockedOr8((volatile signed __int8 *)&v19->AbOrphanedEntrySummary, 1 << v24);
          goto LABEL_24;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v19->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v19, v18, SessionId, 0LL);
LABEL_24:
  --v19->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v19);
  v21 = v19->SpecialApcDisable++ == -1;
  if ( v21 && ($C459BD0D405E8E46662177FB3D0A143F *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
    KiCheckForKernelApcDelivery(v25);
  KiLeaveGuardedRegionUnsafe(v39);
LABEL_28:
  if ( v16 )
    HalPutDmaAdapter(v16);
  if ( (*(_DWORD *)(i + 56) & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v17 + 92), 0xFFFFFFFF);
  if ( a3 == 1 )
    MiRemoveMappedPtes(i, AnyMultiplexedVm);
  v27 = *(unsigned int *)(i + 100);
  if ( (_DWORD)v27 != 0x7FFFF )
    MiDereferencePerSessionProtos(v17, v27);
  v28 = ((*(_QWORD *)(i + 32) >> 12) + 15LL) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (*(_BYTE *)(i + 56) & 0x18) == 0x18 )
  {
    if ( a1 == (_QWORD *)&unk_140C4CD68 )
      v29 = &unk_140C4EAF8;
    else
      v29 = (void *)(v38 + 880);
    MiReleasePtes((__int64)v29, v8, v28);
  }
  else
  {
    MiUnmapLargePages(*(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL, v28 << 12, 9LL, SchedulerAssist);
  }
  ExFreePoolWithTag((PVOID)i, 0);
}
