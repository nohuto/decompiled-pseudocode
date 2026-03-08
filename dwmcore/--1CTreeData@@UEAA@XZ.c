/*
 * XREFs of ??1CTreeData@@UEAA@XZ @ 0x18009B6A4
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18009A61C (--1CVisual@@MEAA@XZ.c)
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x1800DC08C (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x1800DC1D0 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECDesktopTreeData@@UEAAPEAXI@Z @ 0x18020D130 (--_ECDesktopTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECTreeData@@UEAAPEAXI@Z @ 0x18020D180 (--_ECTreeData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180040864 (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180043738 (-clear_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@.c)
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800ED5EC (-clear_region@-$vector_facade@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1CpuClipRealization@CCpuClippingData@@QEAA@XZ @ 0x1800F1FB0 (--1CpuClipRealization@CCpuClippingData@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CTreeData::~CTreeData(CTreeData *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void **v4; // rdi
  __int64 v5; // r8
  void *v6; // rsi
  bool v7; // zf
  void **v8; // rdi
  void *v9; // rsi
  void *v10; // rdi
  void *v11; // rcx
  void **v12; // rdi
  __int64 v13; // r8
  void *v14; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v16; // rax
  HANDLE v17; // rax

  *(_QWORD *)this = &CTreeData::`vftable';
  v2 = (void *)*((_QWORD *)this + 34);
  if ( v2 )
  {
    operator delete(v2, 0x44uLL);
    *((_QWORD *)this + 34) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 35);
  if ( v3 )
    operator delete(v3, 0x10uLL);
  v4 = (void **)((char *)this + 200);
  v5 = (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3;
  if ( v5 )
    detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 25,
      0LL,
      v5);
  v6 = *v4;
  v7 = *((_QWORD *)this + 25) == (_QWORD)this + 224;
  *v4 = 0LL;
  if ( v7 )
    v6 = 0LL;
  if ( v6 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
  }
  v8 = (void **)((char *)this + 168);
  if ( (__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) >> 3 )
    detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 168,
      0LL);
  v9 = *v8;
  v7 = *((_QWORD *)this + 21) == (_QWORD)this + 192;
  *v8 = 0LL;
  if ( v7 )
    v9 = 0LL;
  if ( v9 )
  {
    v17 = GetProcessHeap();
    HeapFree(v17, 0, v9);
  }
  v10 = (void *)*((_QWORD *)this + 19);
  if ( v10 )
  {
    CCpuClippingData::CpuClipRealization::~CpuClipRealization(*((CCpuClippingData::CpuClipRealization **)this + 19));
    operator delete(v10, 0x88uLL);
  }
  v11 = (void *)*((_QWORD *)this + 16);
  if ( v11 )
    operator delete(v11, 0x44uLL);
  v12 = (void **)((char *)this + 16);
  v13 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3);
  if ( v13 )
    detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 2,
      0LL,
      v13);
  v14 = *v12;
  v7 = *v12 == v12 + 3;
  *v12 = 0LL;
  if ( v7 )
    v14 = 0LL;
  if ( v14 )
  {
    v16 = GetProcessHeap();
    HeapFree(v16, 0, v14);
  }
}
