/*
 * XREFs of VfCheckForResource @ 0x140AE138C
 * Callers:
 *     ExpCheckForResource @ 0x140608878 (ExpCheckForResource.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x140303240 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x140303394 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140303680 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403039F0 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14045DE58 (VfAvlInitializeLockContext.c)
 *     VfPoolIsInternalFree @ 0x1405CF77C (VfPoolIsInternalFree.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfCheckForResource(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR *v4; // rax
  ULONG_PTR *v5; // rbx
  struct _SLIST_ENTRY *v6; // rbx
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR v9; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( !ViResourceInitialized )
    return 0LL;
  if ( !(unsigned int)VfPoolIsInternalFree() && qword_140D70748 )
  {
    v9 = 0LL;
    VfAvlInitializeLockContext((__int64)&v8, 1);
    v4 = (ULONG_PTR *)VfAvlLookupTreeNode(&ViResourceAvl, (__int64)&v8, BugCheckParameter3, a2);
    v5 = v4;
    if ( v4 )
    {
      if ( !ViResourcesAlreadyLoadedDrivers && (MmVerifierData & 0x800) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0xD2uLL, *v4, BugCheckParameter3, a2);
      v9 = *v5;
    }
    VfAvlCleanupLockContext((__int64)&v8);
    if ( v9 )
    {
      _InterlockedIncrement(&ViResourceStaleNodes);
      VfAvlInitializeLockContext((__int64)&v8, 0);
      v6 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViResourceAvl, (__int64)&v8, (__int64)&v9, 0LL);
      VfAvlCleanupLockContext((__int64)&v8);
      if ( v6 )
      {
        if ( dword_140D70760 == 1 )
          ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v6);
        else
          VfUtilFreePoolCheckIRQL(v6);
      }
      return 0LL;
    }
  }
  return 1LL;
}
