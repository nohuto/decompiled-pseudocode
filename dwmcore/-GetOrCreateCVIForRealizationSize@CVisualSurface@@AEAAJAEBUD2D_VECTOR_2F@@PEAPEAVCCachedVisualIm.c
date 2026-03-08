/*
 * XREFs of ?GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x1800B4980
 * Callers:
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x1800B44DC (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??$emplace_back@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x1800B0430 (--$emplace_back@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@-$vector_.c)
 *     ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B06AC (-CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??4?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCachedVisualImage@@@Z @ 0x1800B4AD0 (--4-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCachedVisu.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     floorf_0 @ 0x180117728 (floorf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USourceCVI@CVisualSurface@@@2@V?$basic_iterator@$$CBUSourceCVI@CVisualSurface@@@2@@Z @ 0x180217B48 (-erase@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurface@@$03$.c)
 */

__int64 __fastcall CVisualSurface::GetOrCreateCVIForRealizationSize(
        CVisualSurface *this,
        const struct D2D_VECTOR_2F *a2,
        struct CCachedVisualImage **a3)
{
  float v4; // xmm0_4
  int v7; // r13d
  float v8; // xmm0_4
  struct CCachedVisualImage *v9; // rbx
  struct CCachedVisualImage *v10; // rax
  unsigned int v11; // ebx
  __int64 v13; // rdi
  struct CComposition *v14; // rcx
  int v15; // eax
  struct CCachedVisualImage *v16; // rbx
  __int64 CurrentFrameId; // rax
  int v18[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  struct CCachedVisualImage *v20; // [rsp+70h] [rbp+40h] BYREF
  struct CCachedVisualImage *v21; // [rsp+78h] [rbp+48h] BYREF
  struct CCachedVisualImage *v22; // [rsp+88h] [rbp+58h] BYREF

  v4 = a2->x + 0.5;
  v20 = 0LL;
  v7 = (int)floorf_0(v4);
  v8 = floorf_0(a2->y + 0.5);
  v9 = (struct CCachedVisualImage *)*((_QWORD *)this + 14);
  while ( v9 != *((struct CCachedVisualImage **)this + 15) )
  {
    v13 = *(_QWORD *)v9;
    (**(void (__fastcall ***)(__int64, struct CCachedVisualImage **))(*(_QWORD *)v9 + 72LL))(*(_QWORD *)v9 + 72LL, &v21);
    if ( (struct CCachedVisualImage *)__PAIR64__((int)v8, v7) == v21 )
    {
      wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>::operator=(&v20, v13);
      *((_QWORD *)v9 + 1) = GetCurrentFrameId();
      goto LABEL_8;
    }
    if ( *(int *)(v13 + 8) > 1 || GetCurrentFrameId() - *((_QWORD *)v9 + 1) <= 0xA )
    {
LABEL_8:
      v9 = (struct CCachedVisualImage *)((char *)v9 + 16);
    }
    else
    {
      v22 = v9;
      v9 = *(struct CCachedVisualImage **)detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::erase(
                                            (char *)this + 112,
                                            v18,
                                            &v22);
    }
  }
  v10 = v20;
  if ( v20 )
    goto LABEL_4;
  v14 = (struct CComposition *)*((_QWORD *)this + 2);
  v21 = 0LL;
  v15 = CCachedVisualImage::CreateForVisualSurface(v14, &v21);
  v11 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C8,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)(unsigned int)v15,
      v18[0]);
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v21);
  }
  else
  {
    v16 = v21;
    wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>::operator=(&v20, v21);
    v21 = 0LL;
    v22 = v16;
    CurrentFrameId = GetCurrentFrameId();
    detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::emplace_back<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,unsigned __int64>(
      (_QWORD *)this + 14,
      (__int64 *)&v22,
      CurrentFrameId);
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v21);
    v10 = v20;
LABEL_4:
    v20 = 0LL;
    v11 = 0;
    *a3 = v10;
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v20);
  return v11;
}
