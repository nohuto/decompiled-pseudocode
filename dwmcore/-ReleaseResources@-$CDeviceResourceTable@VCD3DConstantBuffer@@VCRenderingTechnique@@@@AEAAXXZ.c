void __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::ReleaseResources(
        struct IDeviceResourceNotify *a1)
{
  __int64 *v1; // rdi
  CD3DResource **v3; // rbx
  CD3DResource **v4; // rbp
  __int64 v5; // r8

  v1 = (__int64 *)((char *)a1 + 16);
  v3 = (CD3DResource **)*((_QWORD *)a1 + 2);
  v4 = (CD3DResource **)*((_QWORD *)a1 + 3);
  while ( v3 != v4 )
    CD3DResource::RemoveResourceNotifier(*v3++, a1);
  v5 = (v1[1] - *v1) >> 3;
  if ( v5 )
    detail::vector_facade<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
      v1,
      0LL,
      v5);
}
