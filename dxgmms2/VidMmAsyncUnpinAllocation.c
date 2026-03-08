/*
 * XREFs of VidMmAsyncUnpinAllocation @ 0x1C002D140
 * Callers:
 *     <none>
 * Callees:
 *     ?AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C00E0890 (-AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall VidMmAsyncUnpinAllocation(VIDMM_GLOBAL *a1, struct DXGALLOCATION *a2)
{
  return VIDMM_GLOBAL::AsyncUnpinAllocation(a1, a2);
}
