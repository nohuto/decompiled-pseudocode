/*
 * XREFs of VfTargetDriversGetNode @ 0x140303628
 * Callers:
 *     VfDifCaptureDriverEntry @ 0x1403035E8 (VfDifCaptureDriverEntry.c)
 *     VfTargetDriversGetVerifierData @ 0x140AC8528 (VfTargetDriversGetVerifierData.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140AD83AC (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140AD86BC (ViThunkApplyWdmThunksCurrentSession.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140303680 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403039F0 (VfAvlCleanupLockContext.c)
 */

__int64 __fastcall VfTargetDriversGetNode(__int64 a1)
{
  __int64 v1; // rbx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  if ( !VfSafeMode && ViTargetInitialized )
  {
    v3 = 0LL;
    v1 = ((__int64 (__fastcall *)(void *, __int128 *, __int64, __int64))VfAvlLookupTreeNode)(
           &ViTargetDriversAvl,
           &v3,
           a1,
           1LL);
    VfAvlCleanupLockContext(&v3);
  }
  return v1;
}
