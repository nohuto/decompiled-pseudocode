/*
 * XREFs of ?DistSquaredToLine@@YAMAEBUfloat2@Numerics@Foundation@Windows@@00@Z @ 0x180009AFC
 * Callers:
 *     ?IsPointOnPolygonBorder@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@@Z @ 0x180009AA0 (-IsPointOnPolygonBorder@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@@Z.c)
 *     ?DoesPolygonHaveEdgeThatContainsAllPoints@CVisualDepthGeometry@@AEBA_NPEBUfloat3@Numerics@Foundation@Windows@@H@Z @ 0x180267540 (-DoesPolygonHaveEdgeThatContainsAllPoints@CVisualDepthGeometry@@AEBA_NPEBUfloat3@Numerics@Founda.c)
 * Callees:
 *     <none>
 */

float __fastcall DistSquaredToLine(
        const struct Windows::Foundation::Numerics::float2 *a1,
        const struct Windows::Foundation::Numerics::float2 *a2,
        const struct Windows::Foundation::Numerics::float2 *a3)
{
  float v3; // xmm4_4
  float v4; // xmm2_4
  float v5; // xmm4_4
  float v6; // xmm3_4

  v3 = *((float *)a3 + 1);
  v4 = (float)((float)((float)(*((float *)a1 + 1) - *((float *)a2 + 1)) * v3)
             + (float)((float)(*(float *)a1 - *(float *)a2) * *(float *)a3))
     / (float)((float)(*(float *)a3 * *(float *)a3) + (float)(v3 * v3));
  v5 = (float)((float)(v3 * v4) + *((float *)a2 + 1)) - *((float *)a1 + 1);
  v6 = (float)((float)(*(float *)a3 * v4) + *(float *)a2) - *(float *)a1;
  return (float)(v5 * v5) + (float)(v6 * v6);
}
