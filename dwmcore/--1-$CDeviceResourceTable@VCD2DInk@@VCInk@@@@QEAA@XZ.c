void __fastcall CDeviceResourceTable<CD2DInk,CInk>::~CDeviceResourceTable<CD2DInk,CInk>(_QWORD *a1)
{
  void **v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rcx
  void *v6; // rcx
  bool v7; // zf

  v1 = (void **)(a1 + 2);
  *a1 = &CDeviceResourceTable<CD2DEffect,CFilterEffect>::`vftable';
  v3 = a1[2];
  v4 = a1[3];
  while ( v3 != v4 )
  {
    v5 = *(_QWORD *)v3 + 16LL + *(int *)(*(_QWORD *)(*(_QWORD *)v3 + 16LL) + 8LL);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 48LL))(v5, a1);
    v3 += 8LL;
  }
  detail::vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear(v1);
  detail::vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear(v1);
  v6 = *v1;
  v7 = *v1 == v1 + 3;
  *v1 = 0LL;
  if ( v7 )
    v6 = 0LL;
  operator delete(v6);
}
