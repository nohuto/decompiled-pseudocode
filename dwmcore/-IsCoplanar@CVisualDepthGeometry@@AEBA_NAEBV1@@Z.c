bool __fastcall CVisualDepthGeometry::IsCoplanar(CVisualDepthGeometry *this, const struct CVisualDepthGeometry *a2)
{
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 40) - *((float *)a2 + 40)) & _xmm) <= 0.000039999999
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 41) - *((float *)a2 + 41)) & _xmm) <= 0.000039999999
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 42) - *((float *)a2 + 42)) & _xmm) <= 0.000039999999
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 43) - *((float *)a2 + 43)) & _xmm) <= 0.000039999999;
}
