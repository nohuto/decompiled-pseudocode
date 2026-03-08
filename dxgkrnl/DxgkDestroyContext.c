/*
 * XREFs of DxgkDestroyContext @ 0x1C017B270
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C017BABC (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
 */

__int64 __fastcall DxgkDestroyContext(const struct _D3DKMT_DESTROYCONTEXT *a1)
{
  return DxgkDestroyContextImpl(a1, 1u);
}
