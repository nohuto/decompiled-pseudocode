/*
 * XREFs of ?Clear@CTreeData@@MEAAXXZ @ 0x180043620
 * Callers:
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x1800DC08C (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ?Clear@CVisualTreeData@@MEAAXXZ @ 0x18020D750 (-Clear@CVisualTreeData@@MEAAXXZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180040864 (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180043738 (-clear_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@.c)
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800ED5EC (-clear_region@-$vector_facade@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1CpuClipRealization@CCpuClippingData@@QEAA@XZ @ 0x1800F1FB0 (--1CpuClipRealization@CCpuClippingData@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CTreeData::Clear(CTreeData *this)
{
  __int64 v2; // r8
  void *v3; // rcx
  CCpuClippingData::CpuClipRealization *v4; // rdi
  void *v5; // rcx

  (*(void (__fastcall **)(CTreeData *))(*(_QWORD *)this + 40LL))(this);
  v2 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3);
  if ( v2 )
    detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 2,
      0LL,
      v2);
  v3 = (void *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v3 )
    operator delete(v3, 0x44uLL);
  v4 = (CCpuClippingData::CpuClipRealization *)*((_QWORD *)this + 19);
  *((_QWORD *)this + 19) = 0LL;
  if ( v4 )
  {
    CCpuClippingData::CpuClipRealization::~CpuClipRealization(v4);
    operator delete(v4, 0x88uLL);
  }
  if ( (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3 )
    detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 200,
      0LL);
  *((_QWORD *)this + 33) = 0LL;
  if ( (__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) >> 3 )
    detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 168,
      0LL);
  v5 = (void *)*((_QWORD *)this + 35);
  *((_QWORD *)this + 35) = 0LL;
  if ( v5 )
    operator delete(v5, 0x10uLL);
}
