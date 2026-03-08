/*
 * XREFs of ?ContainsPoint@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@_N@Z @ 0x1800079DC
 * Callers:
 *     ?FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x180009998 (-FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@.c)
 *     ?FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundation@Windows@@PEAH@Z @ 0x1802675D4 (-FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundati.c)
 * Callees:
 *     <none>
 */

char __fastcall CVisualDepthGeometry::ContainsPoint(
        CVisualDepthGeometry *this,
        const struct Windows::Foundation::Numerics::float2 *a2,
        char a3)
{
  char result; // al
  char v4; // r10
  __int64 v5; // r11
  char v6; // r9
  float *v7; // rcx
  float v8; // xmm1_4

  result = 0;
  v4 = 1;
  v5 = 0LL;
  v6 = 1;
  v7 = (float *)((char *)this + 88);
  while ( v4 || v6 )
  {
    v8 = (float)((float)(*((float *)a2 + 1) - *v7) * v7[1]) - (float)((float)(*(float *)a2 - *(v7 - 1)) * v7[2]);
    if ( v4 && v8 < 0.0 )
      v4 = 0;
    if ( v6 && v8 > 0.0 )
      v6 = 0;
    if ( !a3 && COERCE_FLOAT(LODWORD(v8) & _xmm) < 0.0000011920929 )
      break;
    ++v5;
    v7 += 4;
    if ( v5 >= 4 )
    {
      if ( v6 || v4 )
        return 1;
      return result;
    }
  }
  return result;
}
