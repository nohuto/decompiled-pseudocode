/*
 * XREFs of MiFinishVadDeletion @ 0x140297440
 * Callers:
 *     MiDeleteVad @ 0x14021BFB0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x14027DF5C (MiDeletePartialVad.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x14021D130 (ExpAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiUnlockVad @ 0x140294CD8 (MiUnlockVad.c)
 *     MiDereferenceVad @ 0x140297ADC (MiDereferenceVad.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KeSignalGate @ 0x14031BEE0 (KeSignalGate.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14055BD10 (MiUnlockAndDereferenceNestedVad.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5AE8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiRemoveVadCharges @ 0x14063A910 (MiRemoveVadCharges.c)
 *     MiReturnVadQuota @ 0x14063BEB0 (MiReturnVadQuota.c)
 *     MiDeleteImageHotPatchState @ 0x1408C9B6C (MiDeleteImageHotPatchState.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiFinishVadDeletion(unsigned int *P, __int64 a2, unsigned __int64 a3, char a4)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v5; // r10d
  unsigned int v8; // edx
  _KPROCESS *Process; // rbx
  int v10; // ecx
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned int v13; // ecx
  ULONG_PTR v14; // r14
  struct _KTHREAD *v15; // rdi
  ULONG_PTR SessionId; // r9
  unsigned __int8 v17; // r13
  unsigned int v18; // edx
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rbx
  unsigned __int8 v22; // al
  __int64 v23; // rcx
  __int64 v24; // r8
  _DWORD *SchedulerAssist; // r9
  _QWORD *v26; // r13
  __int64 **v27; // r12
  _KPROCESS *v28; // rbx
  LONG *v29; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 *v31; // rcx
  unsigned int v32; // ecx
  int v33; // eax
  struct _KTHREAD *v34; // r14
  struct _KTHREAD *v35; // rdi
  ULONG_PTR v36; // r9
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 *v42; // rdx
  _QWORD *v43; // rbx
  int v44; // [rsp+3Ch] [rbp-5Ch]
  __int64 v45; // [rsp+40h] [rbp-58h]
  unsigned __int64 v46; // [rsp+48h] [rbp-50h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+A0h] [rbp+8h]
  int v48; // [rsp+A8h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v5 = P[12];
  v45 = (__int64)CurrentThread;
  v8 = 0;
  Process = CurrentThread->ApcState.Process;
  if ( (v5 & 4) != 0 )
  {
    v10 = 1;
    v48 = 1;
    if ( (v5 & 0x100000) == 0 )
    {
      v11 = P[13];
      LODWORD(v11) = v11 & 0x7FFFFFFF;
      if ( (v11 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) < 0x7FFFFFFFDLL )
        v8 = 1;
      v10 = 1;
    }
  }
  else
  {
    v10 = 0;
    v48 = 0;
  }
  if ( a3 <= Process[1].ActiveProcessors.Bitmap[5] && (a4 & 1) == 0 )
  {
    Process[1].Affinity.Bitmap[1] -= a3 - a2 + 1;
    v5 = P[12];
  }
  v12 = Process[1].ActiveProcessorsPadding[8];
  v46 = v12;
  if ( (v5 & 0x100000) == 0 && (v5 & 0x70) == 0x20 && (v5 & 0x200000) != 0 )
    --*(_QWORD *)(v12 + 384);
  if ( v10 == 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 280));
    v13 = P[12];
    if ( MiVadPageSizes[(v13 >> 18) & 3] == 16 )
    {
      if ( (v13 & 0x100000) != 0 )
        --*(_QWORD *)(v12 + 424);
      else
        --*(_QWORD *)(v12 + 432);
    }
    MiReturnVadQuota(P, Process, v8);
    MiRemoveVadCharges(P, Process);
  }
  LOBYTE(CurrentThread[1].Queue) &= ~1u;
  v14 = (ULONG_PTR)&Process[1].Affinity.Bitmap[7];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[7], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].Affinity.Bitmap[7]);
  v15 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(&Process[1].Affinity.Bitmap[7]) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v15->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v15->SpecialApcDisable;
  v17 = ++v15->AbAllocationRegionCount;
  v18 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
  v19 = !_BitScanReverse((unsigned int *)&v20, v18);
  if ( v19 )
    goto LABEL_79;
  while ( 1 )
  {
    v21 = (__int64)&v15->LockEntries[v20];
    v18 &= ~(1 << v20);
    if ( (*(_BYTE *)(v21 + 26) & 1) != 0
      && (*(_DWORD *)(v21 + 32) & 1) == 0
      && (*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v14 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v21 + 40) == (_DWORD)SessionId )
    {
      *(_BYTE *)(v21 + 26) &= ~1u;
      if ( *(_QWORD *)(v21 + 32) )
        break;
    }
    v19 = !_BitScanReverse((unsigned int *)&v20, v18);
    if ( v19 )
      goto LABEL_79;
  }
  if ( !v21 )
  {
LABEL_79:
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, v14, SessionId, 0LL);
  }
  else
  {
    *(_BYTE *)(v21 + 32) |= 2u;
    if ( *(__int64 *)(v21 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v21);
    *(_DWORD *)(v21 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v21 + 25) &= ~1u;
    *(_QWORD *)(v21 + 32) = 0LL;
    v22 = 1 << ((signed __int64)(v21 - (unsigned __int64)v15->LockEntries) / 96);
    if ( v17 == 1 )
      v15->AbEntrySummary |= v22;
    else
      _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, v22);
  }
  --v15->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v15);
  v19 = v15->SpecialApcDisable++ == -1;
  if ( v19 && ($C459BD0D405E8E46662177FB3D0A143F *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery(v23);
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v23);
  v26 = 0LL;
  if ( v48 == 1 )
  {
    v27 = (__int64 **)(P + 14);
    v28 = KeGetCurrentThread()->ApcState.Process;
    if ( (v28[1].IdealProcessorPadding[10] & 7) == 2 )
      v29 = &dword_140C4F780;
    else
      v29 = (LONG *)&v28[1].IdealNode[2];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v24 = (unsigned int)SchedulerAssist[5];
      SchedulerAssist[5] = v24 | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v29, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(v29, CurrentIrql, v24, (__int64)SchedulerAssist);
    v29[1] = 0;
    v31 = *v27;
    if ( *v27 )
    {
      do
      {
        v42 = (__int64 *)*v31;
        if ( (v31[8] & 1) != 0 )
        {
          *v31 = (__int64)v26;
          v26 = v31;
          *v27 = v42;
        }
        else
        {
          v27 = (__int64 **)v31;
        }
        v31 = v42;
      }
      while ( v42 );
    }
    MiUnlockWorkingSetExclusive((__int64)&v28[1].ActiveProcessorsPadding[6], CurrentIrql);
    *((_QWORD *)P + 2) = -1LL;
    if ( v26 )
      --*(_WORD *)(v45 + 484);
    v32 = P[12];
    if ( (v32 & 0x100000) == 0 && (v32 & 0x70) == 0x20 && (v32 & 0x400000) != 0 )
    {
      MiUnlockVad(v45, (__int64)P);
      MiDeleteImageHotPatchState(P);
      --*(_WORD *)(v45 + 486);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 10), 0LL);
      *(_BYTE *)(v45 + 1304) |= 0x80u;
    }
  }
  if ( (a4 & 2) != 0 )
  {
    MiUnlockAndDereferenceNestedVad(P);
  }
  else
  {
    v33 = MiDereferenceVad(P);
    v34 = KeGetCurrentThread();
    v44 = v33;
    LOBYTE(v34[1].Queue) &= ~0x80u;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)P + 5);
    v35 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(P + 10) == 1 )
      v36 = (unsigned int)MmGetSessionIdEx(v35->ApcState.Process);
    else
      v36 = 0xFFFFFFFFLL;
    --v35->SpecialApcDisable;
    ++v35->AbAllocationRegionCount;
    v37 = ((char)v35->AbEntrySummary | (char)v35->AbOrphanedEntrySummary) ^ 0x3F;
    AbAllocationRegionCount = v35->AbAllocationRegionCount;
    v19 = !_BitScanReverse((unsigned int *)&v38, v37);
    if ( v19 )
      goto LABEL_82;
    while ( 1 )
    {
      v39 = (__int64)&v35->LockEntries[v38];
      v37 &= ~(1 << v38);
      if ( (*(_BYTE *)(v39 + 26) & 1) != 0
        && (*(_DWORD *)(v39 + 32) & 1) == 0
        && (*(_QWORD *)(v39 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)(P + 10) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v39 + 40) == (_DWORD)v36 )
      {
        *(_BYTE *)(v39 + 26) &= ~1u;
        if ( *(_QWORD *)(v39 + 32) )
          break;
      }
      v19 = !_BitScanReverse((unsigned int *)&v38, v37);
      if ( v19 )
        goto LABEL_82;
    }
    if ( !v39 )
    {
LABEL_82:
      if ( (*((_DWORD *)&v35->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v35, (ULONG_PTR)(P + 10), v36, 0LL);
    }
    else
    {
      *(_BYTE *)(v39 + 32) |= 2u;
      if ( *(__int64 *)(v39 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v39);
      *(_DWORD *)(v39 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v39 + 25) &= ~1u;
      *(_QWORD *)(v39 + 32) = 0LL;
      v40 = (signed __int64)(v39 - (unsigned __int64)v35->LockEntries) / 96;
      if ( AbAllocationRegionCount == 1 )
        v35->AbEntrySummary |= 1 << v40;
      else
        _InterlockedOr8((volatile signed __int8 *)&v35->AbOrphanedEntrySummary, 1 << v40);
    }
    --v35->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v35);
    v19 = v35->SpecialApcDisable++ == -1;
    if ( v19 && ($C459BD0D405E8E46662177FB3D0A143F *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
      KiCheckForKernelApcDelivery(v41);
    v19 = v34->SpecialApcDisable++ == -1;
    if ( v19 && ($C459BD0D405E8E46662177FB3D0A143F *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
      KiCheckForKernelApcDelivery(v41);
    if ( v44 == 1 )
      ExFreePoolWithTag(P, 0);
  }
  if ( v26 )
  {
    do
    {
      v43 = (_QWORD *)*v26;
      KeSignalGate(v26 + 1, 1LL);
      v26 = v43;
    }
    while ( v43 );
    KeLeaveCriticalRegionThread(v45);
  }
  if ( v48 == 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v46 + 280), 0xFFFFFFFF) == 1 )
    KeSetEvent(*(PRKEVENT *)(v46 + 312), 0, 0);
}
