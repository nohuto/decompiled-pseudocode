/*
 * XREFs of ViLookasideAdd @ 0x1409E15C4
 * Callers:
 *     VerifierExInitializeLookasideListEx @ 0x1409E11B0 (VerifierExInitializeLookasideListEx.c)
 *     ViLookasideTrackList @ 0x1409E17CC (ViLookasideTrackList.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252644 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x140372304 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x140372350 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x1403724D0 (VfAvlReserveNode.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14037E440 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14037E4A8 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14037E564 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1405A2514 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D0D64 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViLookasideAdd(ULONG_PTR BugCheckParameter2)
{
  char *v2; // rsi
  _SLIST_ENTRY *v3; // rbx
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( ViLookasideInitialized )
  {
    v2 = VfAvlReserveNode(ViLookasideAvl, BugCheckParameter2, 0LL);
    if ( v2 )
    {
      v3 = 0LL;
      VfAvlInitializeLockContext((__int64)&v4, 0);
      if ( VfAvlLookupTreeNode(ViLookasideAvl, (__int64)&v4, BugCheckParameter2, 0LL) )
      {
        if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers && (MmVerifierData & 0x800) != 0 )
          VerifierBugCheckIfAppropriate(0xC4u, 0xCAuLL, BugCheckParameter2, 0LL, 0LL);
        v3 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)ViLookasideAvl, (__int64)&v4, BugCheckParameter2, 0LL);
      }
      VfAvlInsertReservedTreeNode((__int64)ViLookasideAvl, (__int64)&v4, v2);
      VfAvlCleanupLockContext((__int64)&v4);
      if ( v3 )
      {
        if ( dword_140D4B4F8 == 1 )
          ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v3);
        else
          VfUtilFreePoolCheckIRQL(v3);
      }
    }
    else
    {
      _InterlockedExchange(&ViLookasideAllocationFailures, 1);
    }
  }
}
