/*
 * XREFs of ExpSaAllocatorFree @ 0x140393C54
 * Callers:
 *     ExSaFree @ 0x140393BDC (ExSaFree.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140273540 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     ExpSaPageGroupFreeMemory @ 0x140393E5C (ExpSaPageGroupFreeMemory.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F889C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ExpSaAllocatorOptimizeList @ 0x1405BA304 (ExpSaAllocatorOptimizeList.c)
 */

char __fastcall ExpSaAllocatorFree(ULONG_PTR BugCheckParameter2, __int64 *a2, __int64 a3, unsigned int a4)
{
  char v7; // r13
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 AbEntrySummary; // cl
  __int64 v10; // rax
  __int64 v11; // r15
  int SessionId; // eax
  __int64 v13; // rcx
  bool v14; // zf
  int v15; // eax
  $C459BD0D405E8E46662177FB3D0A143F *v16; // rax
  struct _KTHREAD *v17; // r14
  unsigned __int8 v18; // cl
  unsigned __int8 v19; // al
  __int64 v20; // rax
  __int64 v21; // r15
  int v22; // eax
  __int64 v23; // rcx
  __int64 *v24; // rax
  __int64 **v25; // rcx
  __int64 **v26; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KTHREAD *v28; // rbx
  ULONG_PTR v29; // r9
  unsigned __int8 v30; // r15
  unsigned int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v37; // [rsp+30h] [rbp-20h] BYREF
  int v38; // [rsp+34h] [rbp-1Ch]
  int v39; // [rsp+38h] [rbp-18h] BYREF
  int v40; // [rsp+3Ch] [rbp-14h]
  _DWORD v41[4]; // [rsp+40h] [rbp-10h] BYREF

  if ( *((_DWORD *)a2 + 10) != 1 )
  {
    v41[0] = 0;
    v7 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( ++CurrentThread->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
    AbEntrySummary = CurrentThread->AbEntrySummary;
    v40 = 0;
    if ( !AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        v11 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
        goto LABEL_25;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
    }
    _BitScanForward((unsigned int *)&v10, AbEntrySummary);
    v40 = v10;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v10);
    v11 = (__int64)&CurrentThread->LockEntries[v10];
    if ( v11 )
    {
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && *((_BYTE *)&MiState[1537] + ((BugCheckParameter2 >> 39) & 0x1FF)) == 1 )
      {
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      }
      else
      {
        SessionId = -1;
      }
      *(_DWORD *)(v11 + 40) = SessionId;
      *(_QWORD *)(v11 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_9;
    }
LABEL_25:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_9:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, v41);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v13);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v11, BugCheckParameter2);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    goto LABEL_16;
  }
  v39 = 0;
  v7 = 1;
  v17 = KeGetCurrentThread();
  --v17->SpecialApcDisable;
  if ( ++v17->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v17, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  v18 = v17->AbEntrySummary;
  v38 = 0;
  if ( !v18 )
  {
    if ( !v17->AbOrphanedEntrySummary )
    {
      v21 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v17, BugCheckParameter2);
      goto LABEL_38;
    }
    v19 = v17->AbOrphanedEntrySummary;
    v17->AbOrphanedEntrySummary = 0;
    v18 = v19 | v17->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v20, v18);
  v38 = v20;
  v17->AbEntrySummary = v18 & ~(1 << v20);
  v21 = (__int64)&v17->LockEntries[v20];
  if ( v21 )
  {
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
      && *((_BYTE *)&MiState[1537] + ((BugCheckParameter2 >> 39) & 0x1FF)) == 1 )
    {
      v22 = MmGetSessionIdEx((__int64)v17->ApcState.Process);
    }
    else
    {
      v22 = -1;
    }
    *(_DWORD *)(v21 + 40) = v22;
    *(_QWORD *)(v21 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_41;
  }
LABEL_38:
  _interlockedbittestandset((volatile signed __int32 *)&v17->116 + 1, 0x10u);
LABEL_41:
  --v17->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v17, BugCheckParameter2, &v39);
  v14 = v17->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery(v23);
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v21, BugCheckParameter2);
  if ( v21 )
    *(_BYTE *)(v21 + 26) |= 1u;
  *((_DWORD *)a2 + 10) = 0;
  v24 = (__int64 *)*a2;
  if ( *(__int64 **)(*a2 + 8) != a2
    || (v25 = (__int64 **)a2[1], *v25 != a2)
    || (*v25 = v24,
        v24[1] = (__int64)v25,
        v26 = *(__int64 ***)(BugCheckParameter2 + 16),
        *v26 != (__int64 *)(BugCheckParameter2 + 8)) )
  {
    __fastfail(3u);
  }
  *a2 = BugCheckParameter2 + 8;
  a2[1] = (__int64)v26;
  *v26 = a2;
  *(_QWORD *)(BugCheckParameter2 + 16) = a2;
LABEL_16:
  if ( (unsigned __int8)ExpSaPageGroupFreeMemory(a2, a3, a4) )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 64));
    LOBYTE(v15) = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u) | 2;
  }
  else
  {
    v15 = *(_DWORD *)(BugCheckParameter2 + 64);
  }
  if ( (v15 & 2) != 0 )
  {
    if ( v7 || _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) == 17 )
      goto LABEL_61;
    v7 = 0;
  }
  if ( !v7 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
    LOBYTE(v16) = KeAbPostRelease(BugCheckParameter2);
    return (char)v16;
  }
LABEL_61:
  ExpSaAllocatorOptimizeList(BugCheckParameter2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  v37 = 0;
  v28 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    v29 = (unsigned int)MmGetSessionIdEx((__int64)v28->ApcState.Process);
  else
    v29 = 0xFFFFFFFFLL;
  --v28->SpecialApcDisable;
  v30 = ++v28->AbAllocationRegionCount;
  v31 = ((char)v28->AbEntrySummary | (char)v28->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v32, v31);
    if ( v14 )
      goto LABEL_68;
    v33 = (__int64)&v28->LockEntries[v32];
    v31 &= ~(1 << v32);
    if ( (*(_BYTE *)(v33 + 26) & 1) != 0
      && (*(_DWORD *)(v33 + 32) & 1) == 0
      && (*(_QWORD *)(v33 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v33 + 40) == (_DWORD)v29 )
    {
      *(_BYTE *)(v33 + 26) &= ~1u;
      if ( *(_QWORD *)(v33 + 32) )
        break;
    }
  }
  if ( !v33 )
  {
LABEL_68:
    if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v28, BugCheckParameter2, v29, 0LL);
    goto LABEL_80;
  }
  *(_BYTE *)(v33 + 32) |= 2u;
  if ( *(__int64 *)(v33 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v33);
  v37 = *(_DWORD *)(v33 + 88) & 0x1FFFF;
  *(_DWORD *)(v33 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v33 + 25) &= ~1u;
  *(_QWORD *)(v33 + 32) = 0LL;
  v34 = (signed __int64)(v33 - (unsigned __int64)v28->LockEntries) / 96;
  if ( v30 == 1 )
    v28->AbEntrySummary |= 1 << v34;
  else
    _InterlockedOr8((volatile signed __int8 *)&v28->AbOrphanedEntrySummary, 1 << v34);
LABEL_80:
  --v28->AbAllocationRegionCount;
  LOBYTE(v16) = KiAbThreadRemoveBoosts((ULONG_PTR)v28, BugCheckParameter2, &v37);
  v14 = v28->SpecialApcDisable++ == -1;
  if ( v14 )
  {
    v16 = &v28->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != v16 )
      LOBYTE(v16) = KiCheckForKernelApcDelivery(v35);
  }
  return (char)v16;
}
