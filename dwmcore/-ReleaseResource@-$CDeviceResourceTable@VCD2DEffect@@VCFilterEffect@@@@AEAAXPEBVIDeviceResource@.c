void __fastcall CDeviceResourceTable<CD2DEffect,CFilterEffect>::ReleaseResource(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 *v4; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx

  v2 = (_QWORD *)(a1 + 16);
  v4 = *(__int64 **)(a1 + 16);
  while ( v4 != *(__int64 **)(a1 + 24) )
  {
    v6 = *v4;
    if ( *v4 )
      v7 = *(int *)(*(_QWORD *)(v6 + 16) + 8LL) + v6 + 16;
    else
      v7 = 0LL;
    if ( v7 == a2 )
    {
      v8 = v6 + 16 + *(int *)(*(_QWORD *)(v6 + 16) + 8LL);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, a1);
      v9 = ((__int64)v4 - *v2) >> 3;
      detail::vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
        v2,
        v9,
        1LL);
      v4 = (__int64 *)(*v2 + 8 * v9);
    }
    else
    {
      ++v4;
    }
  }
}
