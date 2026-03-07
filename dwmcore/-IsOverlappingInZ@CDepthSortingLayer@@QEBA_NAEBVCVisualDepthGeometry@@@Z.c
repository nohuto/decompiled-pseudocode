bool __fastcall CDepthSortingLayer::IsOverlappingInZ(CDepthSortingLayer *this, const struct CVisualDepthGeometry *a2)
{
  return *((float *)this + 7) >= *((float *)a2 + 4) && *((float *)a2 + 7) >= *((float *)this + 6);
}
