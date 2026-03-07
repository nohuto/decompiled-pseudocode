void __fastcall CPolygonBuilder::EndFigure(CPolygonBuilder *this, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  float *v4; // r8

  v2 = *((_QWORD *)this + 3);
  v3 = (_QWORD *)((char *)this + 16);
  v4 = (float *)*((_QWORD *)this + 2);
  if ( *(float *)(v2 - 8) == *v4 && *(float *)(v2 - 4) == v4[1] )
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 16,
      (*((_QWORD *)this + 3) - 8LL - (__int64)v4) >> 3,
      1LL);
  if ( (unsigned __int64)((__int64)(v3[1] - *v3) >> 3) < 3 )
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear(
      v3,
      a2);
}
