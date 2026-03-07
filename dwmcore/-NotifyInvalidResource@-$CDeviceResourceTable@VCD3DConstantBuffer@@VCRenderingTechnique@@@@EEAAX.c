__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::NotifyInvalidResource(
        struct IDeviceResourceNotify *a1,
        CD3DResource *a2)
{
  __int64 *v2; // rsi
  CD3DResource **v4; // rbx
  __int64 v6; // rbx
  __int64 result; // rax

  v2 = (__int64 *)((char *)a1 + 16);
  v4 = (CD3DResource **)*((_QWORD *)a1 + 2);
  while ( v4 != *((CD3DResource ***)a1 + 3) )
  {
    if ( *v4 == a2 )
    {
      CD3DResource::RemoveResourceNotifier(*v4, a1);
      v6 = ((__int64)v4 - *v2) >> 3;
      detail::vector_facade<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
        v2,
        v6,
        1LL);
      result = *v2;
      v4 = (CD3DResource **)(*v2 + 8 * v6);
    }
    else
    {
      ++v4;
    }
  }
  return result;
}
