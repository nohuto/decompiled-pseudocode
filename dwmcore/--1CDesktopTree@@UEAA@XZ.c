void __fastcall CDesktopTree::~CDesktopTree(CDesktopTree *this)
{
  __int64 *v2; // rsi
  _DWORD *v3; // r10
  __int64 v4; // rcx
  unsigned int Slot; // eax
  __int64 v6; // r10
  __int64 v7; // rcx
  void **v8; // rcx
  void *v9; // r8
  bool v10; // zf
  CDesktopTree *v11; // rcx
  void **v12; // rcx
  void *v13; // r8
  void *v14; // rbx

  *(_QWORD *)this = &CDesktopTree::`vftable';
  CDesktopTree::SetRootVisual((CComposition ***)this, 0LL);
  v2 = (__int64 *)((char *)this + 4720);
  v3 = *(_DWORD **)(*((_QWORD *)this + 590) + 232LL);
  if ( (*v3 & 0x4000000) != 0 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 590) + 232LL);
    *v3 &= ~0x4000000u;
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v4, 6);
    if ( Slot < *(_DWORD *)(v6 + 4) )
      *(_BYTE *)(Slot + v6 + 8) = 0;
  }
  v7 = *v2;
  *v2 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 8) = 0LL;
  detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,16,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 685);
  v9 = *v8;
  v10 = *v8 == v8 + 3;
  *v8 = 0LL;
  if ( v10 )
    v9 = 0LL;
  operator delete(v9);
  detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 602);
  v11 = (CDesktopTree *)*((_QWORD *)this + 602);
  *((_QWORD *)this + 602) = 0LL;
  if ( v11 == (CDesktopTree *)((char *)this + 4840) )
    v11 = 0LL;
  operator delete(v11);
  detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,16,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 594);
  v13 = *v12;
  v10 = *v12 == v12 + 3;
  *v12 = 0LL;
  if ( v10 )
    v13 = 0LL;
  operator delete(v13);
  v14 = (void *)*((_QWORD *)this + 593);
  if ( v14 )
  {
    CComposeTop::~CComposeTop(*((CComposeTop **)this + 593));
    operator delete(v14);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 590);
  CVisualTree::~CVisualTree(this);
}
