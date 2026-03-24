/*
 * XREFs of ?VidMmUpdateContextAllocationCb@@YAJPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@@Z @ 0x1C0022AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00B54E0 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 */

__int64 __fastcall VidMmUpdateContextAllocationCb(
        struct VIDMM_GLOBAL *a1,
        const struct _DXGKARGCB_UPDATECONTEXTALLOCATION *a2)
{
  return VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(a1, a2, 0);
}
