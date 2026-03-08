/*
 * XREFs of MiLockVad @ 0x14034CF60
 * Callers:
 *     MiDeleteEmptyPageTables @ 0x1402EB5E0 (MiDeleteEmptyPageTables.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiObtainReferencedSecureVad @ 0x14034C5AC (MiObtainReferencedSecureVad.c)
 *     MiReleaseCommitForResetPages @ 0x140616CA8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140616E38 (MiReleaseOutSwappedProcessCommit.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140619C68 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiInsertViewOfPhysicalSection @ 0x14062E820 (MiInsertViewOfPhysicalSection.c)
 *     MiCanDeleteEnclave @ 0x140644B94 (MiCanDeleteEnclave.c)
 *     MiWaitForVadDeletion @ 0x14065E678 (MiWaitForVadDeletion.c)
 *     MiFindPlaceholderVadToReplace @ 0x14065E720 (MiFindPlaceholderVadToReplace.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406A3620 (MiAllocateFromSubAllocatedRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x140725C90 (MiMapLockedPagesInUserSpace.c)
 *     MiCommitInitialVadMetadataBits @ 0x1407285AC (MiCommitInitialVadMetadataBits.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140756084 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1407D4924 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MiLockVadRange @ 0x1407D74B8 (MiLockVadRange.c)
 *     MiMapViewOfPhysicalSection @ 0x140A2E020 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A2F378 (MiCoalescePlaceholderAllocations.c)
 *     MiApplyImageHotPatchRequest @ 0x140A32920 (MiApplyImageHotPatchRequest.c)
 *     MiDeleteVadHotPatchState @ 0x140A33D1C (MiDeleteVadHotPatchState.c)
 *     MiPrepareToHotPatchVad @ 0x140A3827C (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x140A383A8 (MiProcessPatchImageCfg.c)
 *     MiAllocateEnclaveVad @ 0x140A3A010 (MiAllocateEnclaveVad.c)
 *     MiInitializeVsmEnclave @ 0x140A3B328 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3B820 (MiLoadSectionIntoVsmEnclave.c)
 *     MiTerminateEnclave @ 0x140A3BC78 (MiTerminateEnclave.c)
 *     MiDeleteInsertedCloneVads @ 0x140A46058 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockVad(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
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
  v2 = a2 + 40;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
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
    v3 = (__int64)(&CurrentThread[1].Process + 12 * v13);
    if ( (unsigned __int64)(v2 - qword_140C65668) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v3 + 8) = SessionId;
    result = v2 & 0x7FFFFFFFFFFFFFFCLL;
    *(_QWORD *)v3 = v2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v2, v3, v2);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  *(_BYTE *)(a1 + 1384) |= 0x80u;
  return result;
}
