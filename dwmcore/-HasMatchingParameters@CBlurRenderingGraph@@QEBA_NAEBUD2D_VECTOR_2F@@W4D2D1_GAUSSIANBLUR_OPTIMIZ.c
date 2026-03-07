bool __fastcall CBlurRenderingGraph::HasMatchingParameters(
        CBlurRenderingGraph *this,
        const struct D2D_VECTOR_2F *a2,
        enum D2D1_GAUSSIANBLUR_OPTIMIZATION a3)
{
  return *((_DWORD *)this + 396) == a3
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 394) - a2->x) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 395) - a2->y) & _xmm) <= 0.0000011920929;
}
