/*
 * XREFs of ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1800E10A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBrushRenderingEffect::EmitGeometry(
        CBrushRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        __m128 *a3)
{
  return CRenderingEffect::EmitGeometryImpl(a2, a3, (*(_DWORD *)(*((_QWORD *)this + 2) + 80LL) & 4) != 0);
}
