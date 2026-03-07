__int64 __fastcall CBrushRenderingEffect::EmitGeometry(
        CBrushRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        __m128 *a3)
{
  return CRenderingEffect::EmitGeometryImpl(a2, a3, (*(_DWORD *)(*((_QWORD *)this + 2) + 80LL) & 4) != 0);
}
