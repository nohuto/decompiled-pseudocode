void __fastcall CMatrixStack2D::Clear(CMatrixStack2D *this)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3);
  if ( v2 )
    detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this,
      0LL,
      v2);
  v3 = detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::reserve_region(
         this,
         0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3));
  *(_QWORD *)v3 = 1065353216LL;
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 12) = 1065353216LL;
  *(_DWORD *)(v3 + 20) = 0;
}
