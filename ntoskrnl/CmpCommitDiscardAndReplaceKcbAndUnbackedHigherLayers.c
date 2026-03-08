/*
 * XREFs of CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A1CBE4
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A254B8 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpCommitDiscardReplacePost @ 0x140A1CC50 (CmpCommitDiscardReplacePost.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1CE0C (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        int a3)
{
  CmpEnumerateAllHigherLayerKcbs(
    BugCheckParameter2,
    (unsigned int)CmpCleanupDiscardReplacePre,
    (unsigned int)CmpCommitDiscardReplacePost,
    a3,
    a2,
    1,
    0);
  return CmpCommitDiscardReplacePost(BugCheckParameter2);
}
