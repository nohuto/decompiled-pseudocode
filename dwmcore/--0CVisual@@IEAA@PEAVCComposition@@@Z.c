CVisual *__fastcall CVisual::CVisual(CVisual *this, struct CComposition *a2)
{
  char *v2; // rbx
  __int64 v4; // r8
  void *v5; // rcx

  *((_QWORD *)this + 2) = a2;
  v2 = (char *)this + 336;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CVisual::`vftable';
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 28) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
  *((_QWORD *)this + 29) = &CSparseAlignedStorage<8,8>::k_defaultEmptyAllocatedStorage;
  *(_QWORD *)((char *)this + 148) = 0LL;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *(_QWORD *)((char *)this + 164) = 0LL;
  *(_QWORD *)((char *)this + 172) = 0LL;
  *(_QWORD *)((char *)this + 180) = 0LL;
  *(_QWORD *)((char *)this + 188) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  CTreeData::CTreeData((CVisual *)((char *)this + 336));
  v2[360] = 0;
  *(_QWORD *)v2 = &CDesktopTreeData::`vftable';
  *((_BYTE *)this + 103) |= 1u;
  *((_QWORD *)v2 + 33) = this;
  *((_QWORD *)v2 + 29) = 0LL;
  *((_QWORD *)v2 + 30) = 0LL;
  *((_QWORD *)v2 + 31) = 0LL;
  *((_QWORD *)v2 + 32) = 0LL;
  *((_QWORD *)v2 + 11) = 0LL;
  *((_QWORD *)v2 + 12) = 0LL;
  *((_QWORD *)v2 + 13) = 0LL;
  *((_QWORD *)v2 + 14) = 0LL;
  *((_DWORD *)v2 + 30) = 0;
  *((_QWORD *)v2 + 17) = 0LL;
  *((_DWORD *)v2 + 36) = 0;
  *((_DWORD *)v2 + 40) = 16843008;
  v4 = (__int64)(*((_QWORD *)v2 + 26) - *((_QWORD *)v2 + 25)) >> 3;
  if ( v4 )
    detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)v2 + 25,
      0LL,
      v4);
  if ( (__int64)(*((_QWORD *)v2 + 22) - *((_QWORD *)v2 + 21)) >> 3 )
    detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
      v2 + 168,
      0LL);
  v5 = (void *)*((_QWORD *)v2 + 35);
  *((_QWORD *)v2 + 35) = 0LL;
  if ( v5 )
    operator delete(v5, 0x10uLL);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 32LL))(v2);
  return this;
}
