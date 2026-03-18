/*
 * XREFs of VfTargetRecoverIoCallbacks @ 0x1405FEF04
 * Callers:
 *     VfSuspectRemoveDifVolatileVerification @ 0x140A9AEC0 (VfSuspectRemoveDifVolatileVerification.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1402D81DC (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x1402D8518 (VfAvlLookupTreeNode.c)
 *     VfDifRecoverIoCallbacks @ 0x1405FE9EC (VfDifRecoverIoCallbacks.c)
 */

char __fastcall VfTargetRecoverIoCallbacks(unsigned __int64 a1)
{
  _QWORD *v1; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( !VfSafeMode )
  {
    v1 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v3, a1, 1LL);
    if ( v1 )
      VfDifRecoverIoCallbacks(v1[6]);
  }
  return VfAvlCleanupLockContext((__int64)&v3);
}
