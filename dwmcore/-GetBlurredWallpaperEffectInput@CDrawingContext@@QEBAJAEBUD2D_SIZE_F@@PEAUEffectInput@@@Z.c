__int64 __fastcall CDrawingContext::GetBlurredWallpaperEffectInput(
        const struct CVisualTree **this,
        const struct D2D_SIZE_F *a2,
        struct EffectInput *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  struct CComposition *v8; // rax
  CVisual *v9; // r14
  __int64 v10; // rax
  const struct CVisualTree *v11; // r13
  CVisual *v12; // rbx
  __int64 v13; // r8
  int WorldTransform; // ebx
  float width; // xmm0_4
  float height; // xmm1_4
  struct tagRECT *BlurredWallpaperSurfaceRect; // rax
  float left; // xmm7_4
  float top; // xmm9_4
  float right; // xmm6_4
  float bottom; // xmm8_4
  const struct CVisualTree *v22; // rdx
  __int64 v23; // rdx
  CVisualSurface *BlurredWallpaperSurface; // rax
  int ExplicitRealizationSizeCVI; // eax
  float *v26; // rax
  float v27; // xmm6_4
  LONG v28; // xmm7_4
  float v29; // xmm2_4
  float v30; // xmm6_4
  struct CCachedVisualImage *v31; // rbx
  int v32; // eax
  __int128 v33; // xmm1
  struct IBitmapResource *v34; // rdx
  __int64 *v35; // rax
  int v36; // eax
  const struct CVisualTree *DesktopTree; // rax
  __int64 v39; // rdx
  const struct RenderTargetInfo *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // [rsp+20h] [rbp-E0h]
  __int128 v44; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v45; // [rsp+40h] [rbp-C0h]
  int v46; // [rsp+50h] [rbp-B0h]
  _DWORD v47[12]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+BCh] [rbp-44h]
  struct CCachedVisualImage *v50[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT v51; // [rsp+E0h] [rbp-20h] BYREF
  float v52; // [rsp+F0h] [rbp-10h]
  float v53; // [rsp+F4h] [rbp-Ch]
  __int128 v54; // [rsp+F8h] [rbp-8h] BYREF
  int v55; // [rsp+108h] [rbp+8h]
  int v56; // [rsp+10Ch] [rbp+Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  EffectInput::Reset(a3);
  v8 = g_pComposition;
  *((_BYTE *)a3 + 44) = 1;
  *((_BYTE *)a3 + 100) = 1;
  *((_BYTE *)a3 + 102) = 1;
  v9 = (CVisual *)*((_QWORD *)v8 + 38);
  if ( !v9 )
  {
    WorldTransform = CDrawingContext::SetEffectInputToTransparentBlack((CDrawingContext *)this, a2, a3);
    if ( WorldTransform >= 0 )
    {
      *((_DWORD *)a3 + 10) |= 0x800u;
      return 0LL;
    }
    v39 = 1774LL;
    goto LABEL_22;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VTest>::GetImpl'::`2'::impl,
    1u,
    v6,
    v7);
  CMILMatrix::SetToIdentity((CMILMatrix *)v47);
  v10 = (*((__int64 (__fastcall **)(char *))this[3] + 4))((char *)this + 24);
  v11 = this[1010];
  v12 = (CVisual *)v10;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v11 + 8LL) + 184LL))(*(_QWORD *)(*(_QWORD *)v11 + 8LL)) )
  {
    WorldTransform = CVisual::GetWorldTransform((__int64)v12, v11, v13, (__int64)v47);
    if ( WorldTransform >= 0 )
      goto LABEL_4;
    v39 = 1689LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v39,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      (const char *)(unsigned int)WorldTransform,
      v43);
    return (unsigned int)WorldTransform;
  }
  DesktopTree = CVisual::GetDesktopTree(v12);
  if ( DesktopTree )
  {
    WorldTransform = CVisual::GetWorldTransform(v12, DesktopTree, 3, (struct CMILMatrix *)v47, 0LL, 0LL);
    if ( WorldTransform < 0 )
    {
      v39 = 1698LL;
      goto LABEL_22;
    }
  }
  else
  {
    WorldTransform = CVisual::GetWorldTransform(v12, this[1007], 3, (struct CMILMatrix *)v47, 0LL, 0LL);
    if ( WorldTransform < 0 )
    {
      v39 = 1703LL;
      goto LABEL_22;
    }
  }
LABEL_4:
  width = a2->width;
  height = a2->height;
  v51.left = 0;
  v51.top = 0;
  *(float *)&v51.right = width + 0.0;
  *(float *)&v51.bottom = height + 0.0;
  *(_OWORD *)v50 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  CMILMatrix::Transform2DBoundsHelper<1>((CMILMatrix *)v47, (struct MilRectF *)&v51);
  BlurredWallpaperSurfaceRect = CVisual::GetBlurredWallpaperSurfaceRect(v9, &v51);
  left = (float)BlurredWallpaperSurfaceRect->left;
  top = (float)BlurredWallpaperSurfaceRect->top;
  right = (float)BlurredWallpaperSurfaceRect->right;
  bottom = (float)BlurredWallpaperSurfaceRect->bottom;
  *(float *)v50 = left;
  *((float *)v50 + 1) = top;
  v50[1] = (struct CCachedVisualImage *)__PAIR64__(LODWORD(bottom), LODWORD(right));
  CVisual::GetDesktopTree(v9);
  CMILMatrix::SetToIdentity((CMILMatrix *)&v44);
  WorldTransform = CVisual::GetWorldTransform(v9, v22, 3, (struct CMILMatrix *)&v44, 0LL, 0LL);
  if ( WorldTransform < 0 )
  {
    v39 = 1722LL;
    goto LABEL_22;
  }
  if ( !CMILMatrix::IsIdentity<1>((__int64)&v44, v23) )
  {
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v44, (struct MilRectF *)v50);
    bottom = *((float *)&v50[1] + 1);
    right = *(float *)&v50[1];
    top = *((float *)v50 + 1);
    left = *(float *)v50;
  }
  BlurredWallpaperSurface = CVisual::GetBlurredWallpaperSurface(v9);
  v50[0] = 0LL;
  ExplicitRealizationSizeCVI = CVisualSurface::GetExplicitRealizationSizeCVI(
                                 BlurredWallpaperSurface,
                                 (struct D2D_VECTOR_2F *)&v51,
                                 v50);
  WorldTransform = ExplicitRealizationSizeCVI;
  if ( ExplicitRealizationSizeCVI >= 0 )
  {
    *(_QWORD *)&v44 = *(_QWORD *)v47;
    *((_QWORD *)&v44 + 1) = *(_QWORD *)&v47[3];
    *(_QWORD *)&v45 = __PAIR64__(v47[7], v47[5]);
    *((_QWORD *)&v45 + 1) = v48;
    v46 = v49;
    v55 = LODWORD(left) ^ _xmm;
    v56 = LODWORD(top) ^ _xmm;
    v54 = *(_OWORD *)&_xmm;
    v26 = Matrix3x3::operator*((float *)&v44, (float *)v47, (float *)&v54);
    v51.right = 0;
    v27 = right - left;
    v28 = v51.left;
    v29 = *(float *)&v51.left / v27;
    v30 = *(float *)&v51.top;
    v51.top = 0;
    *(float *)&v51.left = v29 / *(float *)&v51.left;
    *(float *)&v51.bottom = (float)(v30 / (float)(bottom - top)) / v30;
    v52 = 0.0 - (float)(*(float *)&v51.left * 0.0);
    v53 = 0.0 - (float)(*(float *)&v51.bottom * 0.0);
    Matrix3x3::operator*(v26, (float *)&v44, (float *)&v51.left);
    *(_QWORD *)((char *)a3 + 84) = 0LL;
    *((_DWORD *)a3 + 23) = v28;
    *((float *)a3 + 24) = v30;
    v31 = v50[0];
    v32 = v46;
    v33 = v45;
    *((_OWORD *)a3 + 3) = v44;
    *((_OWORD *)a3 + 4) = v33;
    *((_DWORD *)a3 + 20) = v32;
    if ( v31 )
      v34 = (struct CCachedVisualImage *)((char *)v31 + *(int *)(*((_QWORD *)v31 + 8) + 8LL) + 64);
    else
      v34 = 0LL;
    v35 = (__int64 *)CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v54, v34);
    CDrawListBitmap::operator=((__int64 *)a3, v35);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v54 + 8);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v54);
    v36 = *((_DWORD *)a3 + 10) | 0x800;
    *((_DWORD *)a3 + 10) = v36;
    if ( this[26] )
      *((_DWORD *)a3 + 10) = v36 | 0x100;
    if ( g_LockAndReadBlurredWallpaperBackdropTexture )
    {
      *(_QWORD *)&v51.left = 0LL;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v51);
      v40 = (const struct RenderTargetInfo *)(*((__int64 (__fastcall **)(char *))this[3] + 5))((char *)this + 24);
      if ( (int)CCachedVisualImage::GetRenderTargetBitmap(v31, v40, (struct IRenderTargetBitmap **)&v51) >= 0 )
      {
        v41 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v51.left + 64LL))(*(_QWORD *)&v51.left);
        v42 = *(int *)(*(_QWORD *)(v41 + 8) + 16LL) + v41 + 8;
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v42 + 24LL))(v42, (char *)this + 24);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v51);
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)v50);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6C9,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
    (const char *)(unsigned int)ExplicitRealizationSizeCVI,
    v43);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)v50);
  return (unsigned int)WorldTransform;
}
