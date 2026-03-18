/*
 * XREFs of MiLockVad @ 0x14029C6B0
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x1402159F4 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVadEx @ 0x140274B90 (MiObtainReferencedVadEx.c)
 *     MiDeleteEmptyPageTables @ 0x1403571A0 (MiDeleteEmptyPageTables.c)
 *     MiReleaseCommitForResetPages @ 0x140619158 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406192E8 (MiReleaseOutSwappedProcessCommit.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14061C114 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiInsertViewOfPhysicalSection @ 0x140630CA0 (MiInsertViewOfPhysicalSection.c)
 *     MiCanDeleteEnclave @ 0x1406471B8 (MiCanDeleteEnclave.c)
 *     MiWaitForVadDeletion @ 0x140660CC8 (MiWaitForVadDeletion.c)
 *     MiFindPlaceholderVadToReplace @ 0x140660D70 (MiFindPlaceholderVadToReplace.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406AB290 (MiAllocateFromSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     MiAllocateVirtualMemory @ 0x1406F72D0 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 *     MiReserveUserMemory @ 0x14071F450 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14071FAC8 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfDataSection @ 0x1407202F0 (MiMapViewOfDataSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748A84 (MiMapLockedPagesInUserSpace.c)
 *     MiCommitInitialVadMetadataBits @ 0x1407A436C (MiCommitInitialVadMetadataBits.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CD0F4 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfPhysicalSection @ 0x140A30D50 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A320A8 (MiCoalescePlaceholderAllocations.c)
 *     MiApplyImageHotPatchRequest @ 0x140A35650 (MiApplyImageHotPatchRequest.c)
 *     MiDeleteVadHotPatchState @ 0x140A36A4C (MiDeleteVadHotPatchState.c)
 *     MiPrepareToHotPatchVad @ 0x140A3AF5C (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x140A3B088 (MiProcessPatchImageCfg.c)
 *     MiAllocateEnclaveVad @ 0x140A3CCF8 (MiAllocateEnclaveVad.c)
 *     MiInitializeVsmEnclave @ 0x140A3E010 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3E508 (MiLoadSectionIntoVsmEnclave.c)
 *     MiTerminateEnclave @ 0x140A3E960 (MiTerminateEnclave.c)
 *     MiDeleteInsertedCloneVads @ 0x140A48D28 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockVad(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rdi
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 result; // rax
  unsigned int v7; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned int v13; // [rsp+40h] [rbp+8h]

  --*(_WORD *)(a1 + 486);
  v2 = (volatile signed __int32 *)(a2 + 40);
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
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
    v3 = (__int64)(&CurrentThread[1].Process + 12 * v13);
    if ( (unsigned __int64)v2 - qword_140C65AE8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v3 + 8) = SessionId;
    result = (unsigned __int64)v2 & 0x7FFFFFFFFFFFFFFCLL;
    *(_QWORD *)v3 = (unsigned __int64)v2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64(v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, v3, v2);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  *(_BYTE *)(a1 + 1384) |= 0x80u;
  return result;
}
