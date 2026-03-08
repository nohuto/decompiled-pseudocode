/*
 * XREFs of ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180073600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonRenderingEffect::EmitGeometry(
        CCommonRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        __m128 *a3)
{
  return CRenderingEffect::EmitGeometryImpl(a2, a3, 0);
}
