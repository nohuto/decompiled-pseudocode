/*
 * XREFs of ?AreVisualsAbutting@CVisualDepthGeometry@@AEBA_NAEBV1@PEBUfloat3@Numerics@Foundation@Windows@@H@Z @ 0x1802674E0
 * Callers:
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x180008BB8 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 * Callees:
 *     ?DoesPolygonHaveEdgeThatContainsAllPoints@CVisualDepthGeometry@@AEBA_NPEBUfloat3@Numerics@Foundation@Windows@@H@Z @ 0x180267540 (-DoesPolygonHaveEdgeThatContainsAllPoints@CVisualDepthGeometry@@AEBA_NPEBUfloat3@Numerics@Founda.c)
 */

char __fastcall CVisualDepthGeometry::AreVisualsAbutting(
        CVisualDepthGeometry *this,
        const struct CVisualDepthGeometry *a2,
        const struct Windows::Foundation::Numerics::float3 *a3,
        int a4)
{
  char v7; // bl

  v7 = 0;
  if ( CVisualDepthGeometry::DoesPolygonHaveEdgeThatContainsAllPoints(this, a3, a4)
    || CVisualDepthGeometry::DoesPolygonHaveEdgeThatContainsAllPoints(a2, a3, a4) )
  {
    return 1;
  }
  return v7;
}
