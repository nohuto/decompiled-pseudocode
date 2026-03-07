void __fastcall CVisualSurface::~CVisualSurface(CVisualSurface *this)
{
  __int64 v2; // r10
  void **v3; // rbx
  void *v4; // rcx
  bool v5; // zf
  __int64 v6; // rbx
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  CVisualSurface *v9; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &CVisualSurface::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 8));
  v9 = this;
  *((_QWORD *)this + 8) = 0LL;
  std::_Tree<std::_Tmap_traits<CResource *,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>,std::less<CResource *>,std::allocator<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<CResource *>(
    *(_QWORD *)(*((_QWORD *)this + 2) + 288LL) + 64LL,
    v7,
    &v9);
  if ( !*(_BYTE *)(v8 + 25) && (unsigned __int64)this >= *(_QWORD *)(v8 + 32) && v8 != *(_QWORD *)(v2 + 64) )
  {
    v6 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Extract(
           v2 + 64,
           v8);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(v6 + 40));
    std::_Deallocate<16,0>(v6, 48LL);
  }
  v3 = (void **)((char *)this + 112);
  if ( (__int64)(*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 4 )
    detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 112,
      0LL);
  v4 = *v3;
  v5 = *((_QWORD *)this + 14) == (_QWORD)this + 136;
  *v3 = 0LL;
  if ( v5 )
    v4 = 0LL;
  operator delete(v4);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 9);
  CResource::~CResource(this);
}
