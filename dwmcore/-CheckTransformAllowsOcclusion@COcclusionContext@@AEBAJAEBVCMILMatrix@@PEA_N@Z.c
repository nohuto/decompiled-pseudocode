/*
 * XREFs of ?CheckTransformAllowsOcclusion@COcclusionContext@@AEBAJAEBVCMILMatrix@@PEA_N@Z @ 0x1800B2248
 * Callers:
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x1800B21C0 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800B25B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 */

__int64 __fastcall COcclusionContext::CheckTransformAllowsOcclusion(
        COcclusionContext *this,
        const struct CMILMatrix *a2,
        bool *a3)
{
  *a3 = CMILMatrix::Is2DAxisAlignedPreserving(a2);
  return 0LL;
}
