void __fastcall CVisualTreeData::Initialize(CVisualTreeData *this, struct CVisualTree *a2, struct CVisual *a3)
{
  __int64 *v4; // rcx
  __int64 v5; // r8
  void *v6; // rcx

  *((_QWORD *)this + 49) = a2;
  *((_QWORD *)this + 33) = a3;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 40) = 16843008;
  v4 = (__int64 *)((char *)this + 200);
  v5 = (v4[1] - *v4) >> 3;
  if ( v5 )
    detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
      v4,
      0LL,
      v5);
  if ( (__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) >> 3 )
    detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 168,
      0LL);
  v6 = (void *)*((_QWORD *)this + 35);
  *((_QWORD *)this + 35) = 0LL;
  if ( v6 )
    operator delete(v6, 0x10uLL);
  (*(void (__fastcall **)(CVisualTreeData *))(*(_QWORD *)this + 32LL))(this);
}
