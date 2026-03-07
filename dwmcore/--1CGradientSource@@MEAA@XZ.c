void __fastcall CGradientSource::~CGradientSource(CGradientSource *this)
{
  __int64 v1; // rax
  void **v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbp
  void *v6; // rcx
  bool v7; // zf
  __int64 v8; // rcx

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
    *(_QWORD *)(v1 + 48) = 0LL;
  v3 = (void **)((char *)this + 24);
  v4 = *((_QWORD *)this + 3);
  v5 = *((_QWORD *)this + 4);
  while ( v4 != v5 )
  {
    v8 = *(_QWORD *)v4 + 16LL + *(int *)(*(_QWORD *)(*(_QWORD *)v4 + 16LL) + 8LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 48LL))(
      v8,
      ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    v4 += 8LL;
  }
  if ( ((_BYTE *)v3[1] - (_BYTE *)*v3) >> 3 )
    detail::vector_facade<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
      v3,
      0LL);
  v6 = *v3;
  v7 = *v3 == v3 + 3;
  *v3 = 0LL;
  if ( v7 )
    v6 = 0LL;
  operator delete(v6);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)this + 16);
}
