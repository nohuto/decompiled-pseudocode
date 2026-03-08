/*
 * XREFs of ??1CVisualSurface@@UEAA@XZ @ 0x1800B0234
 * Callers:
 *     ??_GCVisualSurface@@UEAAPEAXI@Z @ 0x1800B01F0 (--_GCVisualSurface@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$_Find_lower_bound@PEAVCResource@@@?$_Tree@V?$_Tmap_traits@PEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBQEAVCResource@@@Z @ 0x1800B038C (--$_Find_lower_bound@PEAVCResource@@@-$_Tree@V-$_Tmap_traits@PEAVCResource@@V-$com_ptr_t@UISpect.c)
 *     ?clear_region@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800B03BC (-clear_region@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurfac.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801A3D88 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@@std.c)
 */

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
