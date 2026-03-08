/*
 * XREFs of ?GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x1800B3E04
 * Callers:
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800B3440 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x1800B44DC (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedVisualImage@@@Z @ 0x1800B3EB4 (--0-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedVisualImag.c)
 *     ?UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x1800B3EF0 (-UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVisualSurface::GetExplicitRealizationSizeCVI(
        CVisualSurface *this,
        struct D2D_VECTOR_2F *a2,
        struct CCachedVisualImage **a3)
{
  struct D2D_VECTOR_2F *v6; // rdi
  struct CCachedVisualImage *v7; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  struct D2D_VECTOR_2F v10; // xmm0_8
  int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CCachedVisualImage *v15; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 200) )
  {
    wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>(
      &v15,
      **((_QWORD **)this + 14));
    v6 = (struct D2D_VECTOR_2F *)((char *)this + 96);
    v7 = v15;
    if ( *((_BYTE *)this + 201)
      || (v13 = (_DWORD)this + 96,
          v8 = CCachedVisualImage::UpdateFromVisualSurface(
                 v15,
                 *((_QWORD *)this + 9),
                 (char *)this + 80,
                 (char *)this + 88),
          v9 = v8,
          v8 >= 0) )
    {
      v10 = *v6;
      v15 = 0LL;
      *a2 = v10;
      v9 = 0;
      *a3 = v7;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x163,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
        (const char *)(unsigned int)v8,
        v13);
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v15);
  }
  else
  {
    v9 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x156,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)0x8000FFFFLL,
      v12);
  }
  return v9;
}
