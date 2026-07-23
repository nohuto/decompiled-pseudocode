/*
 * XREFs of VfTargetDriversGetNode @ 0x1405A1FCC
 * Callers:
 *     VfTargetDriversGetVerifierData @ 0x1409D7E40 (VfTargetDriversGetVerifierData.c)
 *     ViThunkApplyThunksCurrentSession @ 0x1409D9EBC (ViThunkApplyThunksCurrentSession.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x140371674 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14037E744 (VfAvlLookupTreeNode.c)
 */

PVOID __fastcall VfTargetDriversGetNode(unsigned __int64 a1)
{
  PVOID v1; // rbx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  if ( !VfSafeMode && ViTargetInitialized )
  {
    v3 = 0LL;
    v1 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v3, a1, 1LL);
    VfAvlCleanupLockContext((__int64)&v3);
  }
  return v1;
}
