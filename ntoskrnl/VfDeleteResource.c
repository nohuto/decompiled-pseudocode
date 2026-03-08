/*
 * XREFs of VfDeleteResource @ 0x140AE14D0
 * Callers:
 *     VfMiscExDeleteResourceLite_Entry @ 0x140ADCAB0 (VfMiscExDeleteResourceLite_Entry.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x140303240 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x140303394 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140303680 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403039F0 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14045DE58 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfDeleteResource(ULONG_PTR BugCheckParameter2)
{
  struct _SLIST_ENTRY *v2; // rbx
  __int128 v3; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( ViResourceInitialized && qword_140D70748 )
  {
    v2 = 0LL;
    VfAvlInitializeLockContext((__int64)&v3, 0);
    if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)&v3, BugCheckParameter2, 0LL) )
    {
      v2 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViResourceAvl, (__int64)&v3, BugCheckParameter2, 0LL);
    }
    else if ( !ViResourceNotTracked && !ViResourcesAlreadyLoadedDrivers )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0xD1uLL, BugCheckParameter2, 0LL, 0LL);
    }
    VfAvlCleanupLockContext((__int64)&v3);
    if ( v2 )
    {
      if ( dword_140D70760 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v2);
      else
        VfUtilFreePoolCheckIRQL(v2);
    }
  }
}
