/*
 * XREFs of VfCheckForLookaside @ 0x140ADF178
 * Callers:
 *     ExpCheckForLookaside @ 0x140608FB8 (ExpCheckForLookaside.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140303680 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403039F0 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14045DE58 (VfAvlInitializeLockContext.c)
 *     VfPoolIsInternalFree @ 0x1405CF77C (VfPoolIsInternalFree.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
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
    v5 = (ULONG_PTR *)VfAvlLookupTreeNode((__int64 *)&ViLookasideAvl, (__int64)&v6, BugCheckParameter3, a2);
    if ( v5 )
    {
      if ( (MmVerifierData & 0x800) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0xCCuLL, *v5, BugCheckParameter3, a2);
    }
    VfAvlCleanupLockContext((__int64)&v6);
  }
  return 1LL;
}
