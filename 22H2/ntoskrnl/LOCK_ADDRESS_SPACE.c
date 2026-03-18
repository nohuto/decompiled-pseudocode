/*
 * XREFs of LOCK_ADDRESS_SPACE @ 0x14029C82C
 * Callers:
 *     MiLockAddressSpaceToo @ 0x14028940C (MiLockAddressSpaceToo.c)
 *     MiDeleteFinalPageTables @ 0x140291494 (MiDeleteFinalPageTables.c)
 *     MiBeginProcessClean @ 0x140342310 (MiBeginProcessClean.c)
 *     MiDeleteEmptyPageTables @ 0x1403571A0 (MiDeleteEmptyPageTables.c)
 *     MiReleaseCommitForResetPages @ 0x140619158 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406192E8 (MiReleaseOutSwappedProcessCommit.c)
 *     MiCopyOnWriteCheckConditions @ 0x140666E90 (MiCopyOnWriteCheckConditions.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406AB290 (MiAllocateFromSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     MiInitializeVadCellBitMap @ 0x1406B2D54 (MiInitializeVadCellBitMap.c)
 *     MiInsertProcessVads @ 0x1406B3068 (MiInsertProcessVads.c)
 *     MiReserveUserMemory @ 0x14071F450 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14071FAC8 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfDataSection @ 0x1407202F0 (MiMapViewOfDataSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748A84 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A30D50 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x140A3CCF8 (MiAllocateEnclaveVad.c)
 *     MiResizeAweBitMap @ 0x140A42180 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x140A42390 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned int v7; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned int v13; // [rsp+40h] [rbp+8h]

  --*(_WORD *)(a1 + 486);
  v2 = (volatile signed __int32 *)(a2 + 1224);
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  _disable();
  LODWORD(result) = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (result = KiAbTryReclaimOrphanedEntries(a1, CurrentThread), (_DWORD)result) )
  {
    _BitScanForward(&v7, result);
    v13 = v7;
    CurrentThread->AbEntrySummary = result & ~(1 << v7);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v11 = *SchedulerAssist;
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v4 = (__int64)(&CurrentThread[1].Process + 12 * v13);
    if ( (unsigned __int64)v2 - qword_140C65AE8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v4 + 8) = SessionId;
    result = (unsigned __int64)v2 & 0x7FFFFFFFFFFFFFFCLL;
    *(_QWORD *)v4 = (unsigned __int64)v2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64(v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, v4, v2);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  *(_BYTE *)(a1 + 1384) |= 1u;
  return result;
}
