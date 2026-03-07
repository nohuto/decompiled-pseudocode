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
