/*
 * XREFs of CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A1F944
 * Callers:
 *     CmDeleteLayeredKey @ 0x14061695C (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x14071009C (CmDeleteKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A28218 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpCommitDiscardReplacePost @ 0x140A1F9B0 (CmpCommitDiscardReplacePost.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1FB6C (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(
        ULONG_PTR BugCheckParameter4,
        __int64 a2,
        int a3)
{
  CmpEnumerateAllHigherLayerKcbs(
    BugCheckParameter4,
    (unsigned int)CmpCleanupDiscardReplacePre,
    (unsigned int)CmpCommitDiscardReplacePost,
    a3,
    a2,
    1,
    0);
  return CmpCommitDiscardReplacePost(BugCheckParameter4);
}
