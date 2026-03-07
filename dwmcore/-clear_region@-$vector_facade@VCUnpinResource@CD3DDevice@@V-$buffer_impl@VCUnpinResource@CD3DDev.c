void __fastcall detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r10
  CD3DDevice::CUnpinResource *v9; // rbx
  __int64 v10; // rdi
  _QWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v12[40]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a1;
  v5 = a2;
  v6 = a3 + a2;
  v7 = (a1[1] - *a1) >> 5;
  if ( v6 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v9 = (CD3DDevice::CUnpinResource *)(v4 + 32 * v7);
  if ( v6 != v7 )
  {
    if ( v5 && (!v4 || v5 < 0 || v7 < v5) )
      _invalid_parameter_noinfo_noreturn();
    v11[0] = v4;
    v11[2] = v5;
    v11[1] = v7;
    std::move<std::move_iterator<CD3DDevice::CUnpinResource *>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>(
      (__int64)v12,
      v4 + 32 * v6,
      v4 + 32 * v7,
      v11);
  }
  v10 = 32 * a3;
  detail::destruct_range<CD3DDevice::CUnpinResource>((CD3DDevice::CUnpinResource *)((char *)v9 - v10), v9);
  a1[1] -= v10;
}
