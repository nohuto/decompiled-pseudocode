/*
 * XREFs of VfTargetDriversGetNode @ 0x1402D86CC
 * Callers:
 *     VfDifCaptureDriverEntry @ 0x1402D8724 (VfDifCaptureDriverEntry.c)
 *     VfTargetDriversGetVerifierData @ 0x140A8ABF8 (VfTargetDriversGetVerifierData.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140A93724 (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140A93A60 (ViThunkApplyWdmThunksCurrentSession.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1402D81DC (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x1402D8518 (VfAvlLookupTreeNode.c)
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
