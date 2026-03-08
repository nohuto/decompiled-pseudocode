/*
 * XREFs of ?IsBoundingBoxOverlappingXY@CVisualDepthGeometry@@AEBA_NAEBV1@@Z @ 0x180008CAC
 * Callers:
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x180008BB8 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisualDepthGeometry::IsBoundingBoxOverlappingXY(
        CVisualDepthGeometry *this,
        const struct CVisualDepthGeometry *a2)
{
  return *((float *)a2 + 5) > *((float *)this + 2)
      && *((float *)this + 5) > *((float *)a2 + 2)
      && *((float *)a2 + 6) > *((float *)this + 3)
      && *((float *)this + 6) > *((float *)a2 + 3);
}
