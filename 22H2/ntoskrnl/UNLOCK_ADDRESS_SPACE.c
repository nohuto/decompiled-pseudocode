/*
 * XREFs of UNLOCK_ADDRESS_SPACE @ 0x140294EE0
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1402EA0BC (MiDeleteFinalPageTables.c)
 *     MiBeginProcessClean @ 0x140350150 (MiBeginProcessClean.c)
 *     MiDeleteEmptyPageTables @ 0x1403F4610 (MiDeleteEmptyPageTables.c)
 *     MiReleaseCommitForResetPages @ 0x14052C494 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052C648 (MiReleaseOutSwappedProcessCommit.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055BE38 (MiCopyOnWriteCheckConditions.c)
 *     MiFindNextEnclaveBoundary @ 0x1405F7640 (MiFindNextEnclaveBoundary.c)
 *     MiMapViewOfImageSection @ 0x14061D2D0 (MiMapViewOfImageSection.c)
 *     MiUnlockVadRange @ 0x140620550 (MiUnlockVadRange.c)
 *     MiReserveUserMemory @ 0x140637BF0 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14063896C (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfDataSection @ 0x140639820 (MiMapViewOfDataSection.c)
 *     MmFreeVirtualMemory @ 0x14063AD20 (MmFreeVirtualMemory.c)
 *     MiPrepareVadDelete @ 0x14063BF98 (MiPrepareVadDelete.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406C4F40 (MiAllocateFromSubAllocatedRegion.c)
 *     MiInitializeVadBitMap @ 0x1406FBDC4 (MiInitializeVadBitMap.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076ACC0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C33C8 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x1408D1EA8 (MiAllocateEnclaveVad.c)
 *     MiResizeAweBitMap @ 0x1408D6534 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x1408D6850 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

char __fastcall UNLOCK_ADDRESS_SPACE(__int64 a1, __int64 a2)
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
  $C459BD0D405E8E46662177FB3D0A143F *v12; // rax
  __int64 v13; // rcx

  *(_BYTE *)(a1 + 1304) &= ~1u;
  v2 = a2 + 1224;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1224));
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
  LOBYTE(v12) = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 )
  {
    v12 = &CurrentThread->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v12->ApcState.ApcListHead[0].Flink != v12 )
      LOBYTE(v12) = KiCheckForKernelApcDelivery(v13);
  }
  v8 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
  if ( v8 )
  {
    v12 = ($C459BD0D405E8E46662177FB3D0A143F *)(a1 + 152);
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v12->ApcState.ApcListHead[0].Flink != v12 )
      LOBYTE(v12) = KiCheckForKernelApcDelivery(v13);
  }
  return (char)v12;
}
