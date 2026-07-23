/*
 * XREFs of ExReleaseCacheAwarePushLockSharedEx @ 0x1402CACA0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     KiAbThreadClearAcquiredLockEntry @ 0x1402CB4B0 (KiAbThreadClearAcquiredLockEntry.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseCacheAwarePushLockSharedEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  __int64 result; // rax
  ULONG_PTR v5; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // r8
  unsigned __int8 v8; // r14
  __int64 v9; // rax
  unsigned int v10; // r8d
  __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 v13; // rdx

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL);
  if ( result != 17 )
    result = ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
  if ( (v2 & 2) == 0 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 16);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v8 = ++CurrentThread->AbAllocationRegionCount;
    v9 = KiAbThreadClearAcquiredLockEntry(CurrentThread, v5, SessionId);
    v11 = v9;
    if ( v9 )
    {
      *(_BYTE *)(v9 + 32) |= 2u;
      if ( *(__int64 *)(v9 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v9);
      v12 = *(_DWORD *)(v11 + 88) & 0xFFFE0000;
      *(_BYTE *)(v11 + 25) &= ~1u;
      *(_DWORD *)(v11 + 88) = v12;
      *(_QWORD *)(v11 + 32) = 0LL;
      v13 = (signed __int64)(v11 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v8 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v13;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v13);
    }
    else if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    {
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5, v10, 0LL);
    }
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
    return KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
  return result;
}
