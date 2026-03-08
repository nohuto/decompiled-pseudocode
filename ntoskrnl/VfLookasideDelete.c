/*
 * XREFs of VfLookasideDelete @ 0x140ADF35C
 * Callers:
 *     VfMiscExDeleteLookasideListEx_Entry @ 0x140ADCA90 (VfMiscExDeleteLookasideListEx_Entry.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x140303240 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x140303394 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140303680 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403039F0 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14045DE58 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfLookasideDelete(ULONG_PTR BugCheckParameter2)
{
  struct _SLIST_ENTRY *v2; // rbx
  __int128 v3; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( ViLookasideInitialized )
  {
    v2 = 0LL;
    VfAvlInitializeLockContext((__int64)&v3, 0);
    if ( VfAvlLookupTreeNode((__int64 *)&ViLookasideAvl, (__int64)&v3, BugCheckParameter2, 0LL) )
    {
      v2 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64 *)&ViLookasideAvl, (__int64)&v3, BugCheckParameter2, 0LL);
    }
    else if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers && (VfRuleClasses & 0x800) != 0 )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0xCBuLL, BugCheckParameter2, 0LL, 0LL);
    }
    VfAvlCleanupLockContext((__int64)&v3);
    if ( v2 )
    {
      if ( dword_140D70788 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v2);
      else
        VfUtilFreePoolCheckIRQL(v2);
    }
  }
}
