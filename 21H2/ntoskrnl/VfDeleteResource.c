/*
 * XREFs of VfDeleteResource @ 0x140AA1590
 * Callers:
 *     VfMiscExDeleteResourceLite_Entry @ 0x140AA3C40 (VfMiscExDeleteResourceLite_Entry.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x1402D81DC (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x1402D8518 (VfAvlLookupTreeNode.c)
 *     VfUtilFreePoolCheckIRQL @ 0x1402DB870 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x1402DB8D8 (VfAvlDeleteTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14045F6C8 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfDeleteResource(ULONG_PTR BugCheckParameter2)
{
  struct _SLIST_ENTRY *v2; // rbx
  __int128 v3; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( ViResourceInitialized && qword_140D577D0 )
  {
    v2 = 0LL;
    VfAvlInitializeLockContext((__int64)&v3, 0);
    if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)&v3, BugCheckParameter2, 0LL) )
    {
      v2 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViResourceAvl, (__int64)&v3, BugCheckParameter2, 0LL);
    }
    else if ( !ViResourceNotTracked && !ViResourcesAlreadyLoadedDrivers )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0xD1uLL, BugCheckParameter2, 0LL, 0LL);
    }
    VfAvlCleanupLockContext((__int64)&v3);
    if ( v2 )
    {
      if ( dword_140D577E8 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v2);
      else
        VfUtilFreePoolCheckIRQL(v2);
    }
  }
}
