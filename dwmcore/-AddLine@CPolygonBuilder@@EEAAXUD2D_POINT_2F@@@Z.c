void __fastcall CPolygonBuilder::AddLine(CPolygonBuilder *this, struct D2D_POINT_2F a2)
{
  *(struct D2D_POINT_2F *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::reserve_region(
                            (CPolygonBuilder *)((char *)this + 16),
                            (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3,
                            1uLL) = a2;
}
