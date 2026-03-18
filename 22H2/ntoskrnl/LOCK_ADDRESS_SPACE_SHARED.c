/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x1402751A0
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x1402159F4 (MiObtainReferencedSecureVad.c)
 *     MmOutSwapWorkingSet @ 0x140341B10 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14061C114 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x140652CBC (MmOutSwapVirtualAddresses.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14071FAC8 (MmCleanProcessAddressSpace.c)
 *     MmGetImageInformation @ 0x14077E790 (MmGetImageInformation.c)
 *     MiCommitInitialVadMetadataBits @ 0x1407A436C (MiCommitInitialVadMetadataBits.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1407A5200 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiHotPatchProcess @ 0x140A37534 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x140A3C580 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x140A3C65C (MmIsFileMapped.c)
 *     MiAllocateUserPhysicalPages @ 0x140A403C8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x140A49658 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x140A49B10 (MiFreeLargePageView.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int AbEntrySummary; // eax
  unsigned int v7; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  __int64 result; // rax
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  unsigned int v14; // [rsp+40h] [rbp+8h]

  --*(_WORD *)(a1 + 486);
  v2 = (volatile signed __int64 *)(a2 + 1224);
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1, CurrentThread)) != 0 )
  {
    _BitScanForward(&v7, AbEntrySummary);
    v14 = v7;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v12 = *SchedulerAssist;
      do
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
      }
      while ( v13 != v12 );
      if ( (v12 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v3 = (__int64)(&CurrentThread[1].Process + 12 * v14);
    if ( (unsigned __int64)v2 - qword_140C65AE8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v3 + 8) = SessionId;
    *(_QWORD *)v3 = (unsigned __int64)v2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(v2, 0LL, v3, v2);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  *(_BYTE *)(a1 + 1384) |= 2u;
  return result;
}
