/*
 * XREFs of UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14025A688
 * Callers:
 *     MiMapViewOfImageSection @ 0x14061D2D0 (MiMapViewOfImageSection.c)
 *     MiLockVadRange @ 0x14061E040 (MiLockVadRange.c)
 *     MiReserveUserMemory @ 0x140637BF0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140639820 (MiMapViewOfDataSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076ACC0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C33C8 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408C87F4 (MiCoalescePlaceholderAllocations.c)
 *     MiAllocateEnclaveVad @ 0x1408D1EA8 (MiAllocateEnclaveVad.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall UNLOCK_ADDRESS_SPACE_UNORDERED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // r14
  unsigned int v7; // r8d
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx

  *(_BYTE *)(a1 + 1304) &= ~1u;
  v2 = a2 + 1224;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 1224);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v6 = ++CurrentThread->AbAllocationRegionCount;
  v7 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v8 = !_BitScanReverse((unsigned int *)&v9, v7);
    if ( v8 )
      break;
    v10 = (__int64)&CurrentThread->LockEntries[v9];
    v7 &= ~(1 << v9);
    if ( (*(_BYTE *)(v10 + 26) & 1) != 0
      && (*(_DWORD *)(v10 + 32) & 1) == 0
      && (*(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v10 + 40) == SessionId )
    {
      *(_BYTE *)(v10 + 26) &= ~1u;
      if ( *(_QWORD *)(v10 + 32) )
      {
        if ( v10 )
        {
          *(_BYTE *)(v10 + 32) |= 2u;
          if ( *(__int64 *)(v10 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v10);
          *(_DWORD *)(v10 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v10 + 25) &= ~1u;
          *(_QWORD *)(v10 + 32) = 0LL;
          v11 = (signed __int64)(v10 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v6 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v11;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v11);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
LABEL_17:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v12);
  return KiLeaveGuardedRegionUnsafe(a1);
}
