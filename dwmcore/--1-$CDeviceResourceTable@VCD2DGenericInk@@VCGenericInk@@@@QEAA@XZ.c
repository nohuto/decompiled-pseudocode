void __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk>(
        struct IDeviceResourceNotify *a1)
{
  void **v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbp
  void *v5; // rcx
  bool v6; // zf

  v1 = (void **)((char *)a1 + 16);
  *(_QWORD *)a1 = &CDeviceResourceTable<CD2DGenericInk,CGenericInk>::`vftable';
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_QWORD *)a1 + 3);
  while ( v3 != v4 )
  {
    CD2DResource::RemoveResourceNotifier((CD2DResource *)(*(_QWORD *)v3 + 104LL), a1);
    v3 += 8LL;
  }
  detail::vector_facade<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear(v1);
  detail::vector_facade<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear(v1);
  v5 = *v1;
  v6 = *v1 == v1 + 3;
  *v1 = 0LL;
  if ( v6 )
    v5 = 0LL;
  operator delete(v5);
}
