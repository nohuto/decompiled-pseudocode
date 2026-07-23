/*
 * XREFs of VfCheckForLookaside @ 0x1409E2518
 * Callers:
 *     ExpCheckForLookaside @ 0x1405B6C78 (ExpCheckForLookaside.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x140371674 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14037E744 (VfAvlLookupTreeNode.c)
 *     VfPoolIsInternalFree @ 0x1405A27CC (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x1405A2804 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfCheckForLookaside(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR *v5; // rax
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0LL;
  if ( !ViLookasideInitialized )
    return 0LL;
  if ( !(unsigned int)VfPoolIsInternalFree() )
  {
    VfAvlInitializeLockContext((__int64)&v6, 1);
    v5 = (ULONG_PTR *)VfAvlLookupTreeNode(ViLookasideAvl, (__int64)&v6, BugCheckParameter3, a2);
    if ( v5 )
    {
      if ( (MmVerifierData & 0x800) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0xCCuLL, *v5, BugCheckParameter3, a2);
    }
    VfAvlCleanupLockContext((__int64)&v6);
  }
  return 1LL;
}
