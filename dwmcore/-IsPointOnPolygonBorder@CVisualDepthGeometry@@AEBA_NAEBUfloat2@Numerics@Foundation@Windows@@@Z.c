char __fastcall CVisualDepthGeometry::IsPointOnPolygonBorder(
        CVisualDepthGeometry *this,
        const struct Windows::Foundation::Numerics::float2 *a2)
{
  __m128 v2; // xmm0
  const struct Windows::Foundation::Numerics::float2 *v3; // r11
  CVisualDepthGeometry *v4; // r10
  int v5; // r9d
  int v6; // r9d
  float v7; // xmm5_4

  v3 = a2;
  v4 = this;
  v5 = 0;
  while ( 1 )
  {
    v2.m128_f32[0] = DistSquaredToLine(
                       v3,
                       (CVisualDepthGeometry *)((char *)v4 + 16 * v5 + 84),
                       (CVisualDepthGeometry *)((char *)v4 + 16 * v5 + 92));
    v2 = _mm_and_ps(v2, (__m128)_xmm);
    if ( v7 > v2.m128_f32[0] )
      break;
    v5 = v6 + 1;
    if ( v5 >= 4 )
      return 0;
  }
  return 1;
}
