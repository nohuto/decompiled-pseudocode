/*
 * XREFs of ExpSaPageGroupDescriptorFree @ 0x1405BA41C
 * Callers:
 *     ExpSaAllocatorOptimizeList @ 0x1405BA304 (ExpSaAllocatorOptimizeList.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140344740 (KeQueryMaximumProcessorCountEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F889C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ExpSaBinaryArrayRemove @ 0x1405BA3D4 (ExpSaBinaryArrayRemove.c)
 */

PSLIST_ENTRY __fastcall ExpSaPageGroupDescriptorFree(ULONG_PTR BugCheckParameter2)
{
  ULONG MaximumProcessorCount; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // r14
  unsigned __int8 AbEntrySummary; // cl
  unsigned int v6; // r15d
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v8; // rax
  __int64 v9; // rsi
  int SessionId; // eax
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v14; // rsi
  unsigned int v15; // edx
  unsigned int v16; // ecx
  __int64 v17; // r9
  int v18; // r8d
  __int64 v19; // rcx
  ULONG_PTR v20; // rbx
  struct _KTHREAD *v21; // rbx
  unsigned __int8 v22; // r14
  unsigned int v23; // edx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  _DWORD v29[4]; // [rsp+30h] [rbp-10h] BYREF
  int v30; // [rsp+90h] [rbp+50h] BYREF
  int v31; // [rsp+98h] [rbp+58h]

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v29[0] = 0;
  CurrentThread = KeGetCurrentThread();
  v4 = MaximumProcessorCount;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(
      0x192u,
      (ULONG_PTR)CurrentThread,
      (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock,
      KeGetCurrentIrql(),
      0LL);
  v31 = 0;
  AbEntrySummary = CurrentThread->AbEntrySummary;
  v6 = -1;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v9 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)CurrentThread, (__int64)&ExSaPageGroupDescriptorArrayLock);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v8, AbEntrySummary);
  v31 = v8;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v8);
  v9 = (__int64)&CurrentThread->LockEntries[v8];
  if ( v9 )
  {
    if ( (unsigned __int64)&ExSaPageGroupDescriptorArrayLock >= 0xFFFF800000000000uLL
      && byte_140C4F9C8[(((unsigned __int64)&ExSaPageGroupDescriptorArrayLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v9 + 40) = SessionId;
    *(_QWORD *)(v9 + 32) = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_15;
  }
LABEL_7:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_15:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&ExSaPageGroupDescriptorArrayLock, v29);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v11);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v9, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( (_DWORD)v4 )
  {
    v14 = 0LL;
    do
    {
      v15 = *(_DWORD *)(BugCheckParameter2 + 32);
      _BitScanReverse(&v16, v15);
      v17 = *(_QWORD *)(v14 + ExSaPageArrays);
      v18 = 1 << v16;
      v19 = v16 - 2;
      v29[1] = v19;
      v20 = *(_QWORD *)(*(_QWORD *)(v17 + 8 * v19) + 8LL * (v15 ^ v18) + 8);
      ExpSaBinaryArrayRemove(v17, v15);
      ExFreeHeapPool(v20);
      v14 += 8LL;
      --v4;
    }
    while ( v4 );
    v6 = -1;
  }
  ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, *(_DWORD *)(BugCheckParameter2 + 32));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock);
  v30 = 0;
  v21 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExSaPageGroupDescriptorArrayLock) == 1 )
    v6 = MmGetSessionIdEx((__int64)v21->ApcState.Process);
  --v21->SpecialApcDisable;
  v22 = ++v21->AbAllocationRegionCount;
  v23 = ((char)v21->AbEntrySummary | (char)v21->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v12 = !_BitScanReverse((unsigned int *)&v25, v23);
    if ( v12 )
      goto LABEL_37;
    v24 = (__int64)&v21->LockEntries[v25];
    v23 &= ~(1 << v25);
    if ( (*(_BYTE *)(v24 + 26) & 1) != 0
      && (*(_DWORD *)(v24 + 32) & 1) == 0
      && (*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v24 + 40) == v6 )
    {
      *(_BYTE *)(v24 + 26) &= ~1u;
      if ( *(_QWORD *)(v24 + 32) )
        break;
    }
  }
  if ( !v24 )
  {
LABEL_37:
    if ( (*((_DWORD *)&v21->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v21, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, v6, 0LL);
    goto LABEL_44;
  }
  *(_BYTE *)(v24 + 32) |= 2u;
  if ( *(__int64 *)(v24 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v24);
  v30 = *(_DWORD *)(v24 + 88) & 0x1FFFF;
  *(_DWORD *)(v24 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v24 + 25) &= ~1u;
  *(_QWORD *)(v24 + 32) = 0LL;
  v26 = (signed __int64)(v24 - (unsigned __int64)v21->LockEntries) / 96;
  if ( v22 == 1 )
    v21->AbEntrySummary |= 1 << v26;
  else
    _InterlockedOr8((volatile signed __int8 *)&v21->AbOrphanedEntrySummary, 1 << v26);
LABEL_44:
  --v21->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v21, (__int64)&ExSaPageGroupDescriptorArrayLock, &v30);
  v12 = v21->SpecialApcDisable++ == -1;
  if ( v12 && ($C459BD0D405E8E46662177FB3D0A143F *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
    KiCheckForKernelApcDelivery(v27);
  return ExFreeHeapPool(BugCheckParameter2);
}
