/*
 * XREFs of ViLookasideDelete @ 0x1409E16EC
 * Callers:
 *     VerifierExDeleteLookasideListEx @ 0x1409E1120 (VerifierExDeleteLookasideListEx.c)
 *     VerifierExDeleteNPagedLookasideList @ 0x1409E1150 (VerifierExDeleteNPagedLookasideList.c)
 *     VerifierExDeletePagedLookasideList @ 0x1409E1180 (VerifierExDeletePagedLookasideList.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252644 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x140372304 (VfAvlCleanupLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14037E440 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14037E4A8 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14037E564 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1405A2514 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D0D64 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViLookasideDelete(ULONG_PTR BugCheckParameter2)
{
  _SLIST_ENTRY *v2; // rbx
  __int128 v3; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( ViLookasideInitialized )
  {
    v2 = 0LL;
    VfAvlInitializeLockContext((__int64)&v3, 0);
    if ( VfAvlLookupTreeNode(ViLookasideAvl, (__int64)&v3, BugCheckParameter2, 0LL) )
    {
      v2 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)ViLookasideAvl, (__int64)&v3, BugCheckParameter2, 0LL);
    }
    else if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers && (MmVerifierData & 0x800) != 0 )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0xCBuLL, BugCheckParameter2, 0LL, 0LL);
    }
    VfAvlCleanupLockContext((__int64)&v3);
    if ( v2 )
    {
      if ( dword_140D4B4F8 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v2);
      else
        VfUtilFreePoolCheckIRQL(v2);
    }
  }
}
