/*
 * XREFs of VfLookasideAdd @ 0x140ADF240
 * Callers:
 *     VfMiscExInitializePagedLookasideList_Exit @ 0x140ADCB60 (VfMiscExInitializePagedLookasideList_Exit.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x140303240 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x140303394 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140303680 (VfAvlLookupTreeNode.c)
 *     VfAvlReserveNode @ 0x140303910 (VfAvlReserveNode.c)
 *     VfAvlCleanupLockContext @ 0x1403039F0 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x140303A48 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14045DE58 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfLookasideAdd(ULONG_PTR BugCheckParameter2)
{
  char *v2; // rsi
  struct _SLIST_ENTRY *v3; // rbx
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( ViLookasideInitialized )
  {
    v2 = VfAvlReserveNode((__int64 *)&ViLookasideAvl, BugCheckParameter2, 0LL);
    if ( v2 )
    {
      v3 = 0LL;
      VfAvlInitializeLockContext((__int64)&v4, 0);
      if ( VfAvlLookupTreeNode((__int64 *)&ViLookasideAvl, (__int64)&v4, BugCheckParameter2, 0LL) )
      {
        if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers )
          VerifierBugCheckIfAppropriate(0xC4u, 0xCAuLL, BugCheckParameter2, 0LL, 0LL);
        v3 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode(
                                      (__int64 *)&ViLookasideAvl,
                                      (__int64)&v4,
                                      BugCheckParameter2,
                                      0LL);
      }
      VfAvlInsertReservedTreeNode((__int64)&ViLookasideAvl, (__int64)&v4, v2);
      VfAvlCleanupLockContext((__int64)&v4);
      if ( v3 )
      {
        if ( dword_140D70788 == 1 )
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
