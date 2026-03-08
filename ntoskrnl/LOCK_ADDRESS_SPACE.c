/*
 * XREFs of LOCK_ADDRESS_SPACE @ 0x14034CA58
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1402A54F4 (MiDeleteFinalPageTables.c)
 *     MiBeginProcessClean @ 0x1402DB7FC (MiBeginProcessClean.c)
 *     MiDeleteEmptyPageTables @ 0x1402EB5E0 (MiDeleteEmptyPageTables.c)
 *     MiLockAddressSpaceToo @ 0x140332B7C (MiLockAddressSpaceToo.c)
 *     MiReleaseCommitForResetPages @ 0x140616CA8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140616E38 (MiReleaseOutSwappedProcessCommit.c)
 *     MiCopyOnWriteCheckConditions @ 0x140664840 (MiCopyOnWriteCheckConditions.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406A3620 (MiAllocateFromSubAllocatedRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x140725C90 (MiMapLockedPagesInUserSpace.c)
 *     MiInitializeVadCellBitMap @ 0x140729460 (MiInitializeVadCellBitMap.c)
 *     MiInsertProcessVads @ 0x140729774 (MiInsertProcessVads.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1407D4924 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MiLockVadRange @ 0x1407D74B8 (MiLockVadRange.c)
 *     MiMapViewOfPhysicalSection @ 0x140A2E020 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x140A3A010 (MiAllocateEnclaveVad.c)
 *     MiResizeAweBitMap @ 0x140A3F4A0 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x140A3F6B0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
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
  v2 = a2 + 1224;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  _disable();
  LODWORD(result) = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (result = KiAbTryReclaimOrphanedEntries(v2, CurrentThread), (_DWORD)result) )
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
    if ( (unsigned __int64)(v2 - qword_140C65668) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v4 + 8) = SessionId;
    result = v2 & 0x7FFFFFFFFFFFFFFCLL;
    *(_QWORD *)v4 = v2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v2, v4, v2);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  *(_BYTE *)(a1 + 1384) |= 1u;
  return result;
}
