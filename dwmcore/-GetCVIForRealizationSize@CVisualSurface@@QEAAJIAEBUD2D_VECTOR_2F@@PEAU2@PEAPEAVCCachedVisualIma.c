/*
 * XREFs of ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x1800B44DC
 * Callers:
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800B4190 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 *     ?GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z @ 0x1801B9E90 (-GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x1800B3E04 (-GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage.c)
 *     ?UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x1800B3EF0 (-UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@M.c)
 *     ?GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x1800B4980 (-GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualIm.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVisualSurface::GetCVIForRealizationSize(
        CVisualSurface *this,
        int a2,
        struct CCachedVisualImage ***a3,
        struct D2D_VECTOR_2F *a4,
        struct CCachedVisualImage **a5)
{
  struct CCachedVisualImage **v5; // r14
  float v8; // xmm0_4
  float v9; // xmm2_4
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  float *v13; // r9
  float *v14; // r8
  struct CCachedVisualImage *v15; // rdi
  FLOAT v16; // xmm1_4
  int ExplicitRealizationSizeCVI; // eax
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct CCachedVisualImage *v22; // [rsp+50h] [rbp+20h] BYREF

  v5 = a5;
  *a5 = 0LL;
  if ( !*((_BYTE *)this + 200) )
  {
    a5 = *a3;
    v8 = *(float *)&a5;
    v9 = (float)a2;
    if ( *(float *)&a5 > (float)a2 || *((float *)a3 + 1) > v9 )
    {
      if ( *(float *)&a5 <= *((float *)a3 + 1) )
      {
        *((float *)&a5 + 1) = (float)a2;
        *(float *)&a5 = (float)(v9 / *((float *)a3 + 1)) * *(float *)&a5;
      }
      else
      {
        *(float *)&a5 = (float)a2;
        *((float *)&a5 + 1) = (float)(v9 / v8) * *((float *)a3 + 1);
      }
    }
    v22 = 0LL;
    v10 = CVisualSurface::GetOrCreateCVIForRealizationSize(this, (const struct D2D_VECTOR_2F *)&a5, &v22);
    v11 = v10;
    if ( v10 < 0 )
    {
      v19 = 399LL;
    }
    else
    {
      v12 = *((_QWORD *)this + 9);
      v13 = (float *)((char *)this + 88);
      v14 = (float *)((char *)this + 80);
      v15 = v22;
      v10 = CCachedVisualImage::UpdateFromVisualSurface((__int64 *)v22, v12, v14, v13, (float *)&a5, 1);
      v11 = v10;
      if ( v10 >= 0 )
      {
        v16 = *((float *)&a5 + 1);
        v22 = 0LL;
        LODWORD(a4->x) = (_DWORD)a5;
        v11 = 0;
        a4->y = v16;
        *v5 = v15;
LABEL_7:
        wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v22);
        return v11;
      }
      v19 = 409LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)(unsigned int)v10,
      v20);
    goto LABEL_7;
  }
  ExplicitRealizationSizeCVI = CVisualSurface::GetExplicitRealizationSizeCVI(this, a4, v5);
  v11 = ExplicitRealizationSizeCVI;
  if ( ExplicitRealizationSizeCVI < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x177,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)(unsigned int)ExplicitRealizationSizeCVI,
      v20);
    return v11;
  }
  return 0LL;
}
