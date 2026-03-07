void __fastcall CPolygonBuilder::BeginFigure(CPolygonBuilder *this, struct D2D_POINT_2F a2, enum D2D1_FIGURE_BEGIN a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // r8

  v3 = (_QWORD *)((char *)this + 16);
  v5 = (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3;
  if ( v5 )
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 2,
      0LL,
      v5);
  *(struct D2D_POINT_2F *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::reserve_region(
                            v3,
                            (__int64)(v3[1] - *v3) >> 3,
                            1LL) = a2;
}
