_UNKNOWN **__fastcall CD3DDevice::DelayUnpinResources(gsl::details *a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  _UNKNOWN **result; // rax
  __int64 v6; // r14
  __int64 v10; // rdi
  int v11; // ebp
  __int64 v12; // rsi
  __int64 v13; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  gsl::details *v15; // [rsp+50h] [rbp+8h]

  result = &retaddr;
  v15 = a1;
  v6 = 0LL;
  if ( *(_DWORD *)a5 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)(unsigned int)v6 >= *a5 )
      {
        gsl::details::terminate(a1);
        __debugbreak();
      }
      v10 = *(_QWORD *)(a5[1] + 8 * v6);
      v11 = CDeviceManager::s_bXbox + 2;
      v12 = detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::reserve_region(
              (char *)a1 + 1200,
              (__int64)(*((_QWORD *)a1 + 151) - *((_QWORD *)a1 + 150)) >> 5);
      wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::com_ptr_t<IDXGIResource,wil::err_returncode_policy>(
        (_QWORD *)v12,
        v10);
      wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
        (_QWORD *)(v12 + 8),
        a2);
      v13 = *(_QWORD *)(v12 + 8);
      *(_QWORD *)(v12 + 16) = a3;
      *(_DWORD *)(v12 + 24) = a4;
      *(_DWORD *)(v12 + 28) = v11;
      result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 176LL))(v13);
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *(_DWORD *)a5 )
        break;
      a1 = v15;
    }
  }
  return result;
}
