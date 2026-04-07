/*
 * XREFs of ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z @ 0x1800B6314
 * Callers:
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800AA34C (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800B6E58 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006300 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18000E184 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003C928 (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     ??$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z @ 0x18003DAC0 (--$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x1800B75C4 (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 */

__int64 __fastcall CDesktopThumbnailCVI::CreateBrush(
        CDesktopThumbnailCVI *this,
        struct CImageLegacyMilBrushProxy **a2,
        struct CCachedVisualImageProxy **a3,
        struct CRectResourceProxy **a4,
        const struct tagRECT *a5)
{
  volatile signed __int32 *v5; // rdi
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // r10d
  int v15; // r8d
  float v16; // xmm2_4
  int v17; // r9d
  float v18; // xmm3_4
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  volatile signed __int32 *v22; // rbx
  __int64 v23; // rax
  __int64 v25; // [rsp+50h] [rbp-51h]
  CBaseObject *v26; // [rsp+70h] [rbp-31h] BYREF
  CBaseObject *v27; // [rsp+78h] [rbp-29h] BYREF
  __int128 v28; // [rsp+80h] [rbp-21h] BYREF
  __int128 v29; // [rsp+90h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v26 = 0LL;
  v5 = 0LL;
  v27 = 0LL;
  if ( a4 )
  {
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v27);
    v10 = CCompositor::CreateProxy<CRectResourceProxy>(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
            (__int64 *)&v27);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 632LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_41;
    }
    v5 = (volatile signed __int32 *)v27;
  }
  v10 = CDesktopThumbnailCVI::_EnsureResources(this);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 635LL;
    goto LABEL_31;
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v26);
  v10 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          (__int64 *)&v26);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 638LL;
    goto LABEL_31;
  }
  v29 = _xmm;
  if ( a4 )
  {
    v14 = 0;
    v28 = 0LL;
    goto LABEL_27;
  }
  v15 = *((_DWORD *)this + 10) - *((_DWORD *)this + 8);
  v14 = 1;
  if ( (float)v15 == 0.0 )
  {
    v16 = 0.0;
  }
  else
  {
    v13 = (unsigned int)((a5->left - *((_DWORD *)this + 8)) >> 31);
    LODWORD(v13) = (a5->left - *((_DWORD *)this + 8)) % v15;
    v16 = (float)((a5->left - *((_DWORD *)this + 8)) / v15);
  }
  v17 = *((_DWORD *)this + 11) - *((_DWORD *)this + 9);
  *(float *)&v28 = v16;
  if ( (float)v17 == 0.0 )
  {
    v18 = 0.0;
  }
  else
  {
    v13 = (unsigned int)((a5->top - *((_DWORD *)this + 9)) >> 31);
    LODWORD(v13) = (a5->top - *((_DWORD *)this + 9)) % v17;
    v18 = (float)((a5->top - *((_DWORD *)this + 9)) / v17);
  }
  *((float *)&v28 + 1) = v18;
  if ( (float)v15 == 0.0 )
  {
    DWORD2(v28) = 0;
  }
  else
  {
    v19 = 0;
    if ( a5->right - a5->left >= 0 )
      v19 = a5->right - a5->left;
    v13 = (unsigned int)(v19 >> 31);
    LODWORD(v13) = v19 % v15;
    *((float *)&v28 + 2) = (float)(v19 / v15) + v16;
  }
  if ( (float)v17 != 0.0 )
  {
    v20 = 0;
    if ( a5->bottom - a5->top >= 0 )
      v20 = a5->bottom - a5->top;
    v13 = (unsigned int)(v20 >> 31);
    LODWORD(v13) = v20 % v17;
    *((float *)&v28 + 3) = (float)(v20 / v17) + v18;
LABEL_27:
    v21 = (__int64)v5;
    if ( a4 )
      goto LABEL_29;
    goto LABEL_28;
  }
  HIDWORD(v28) = 0;
LABEL_28:
  v21 = 0LL;
LABEL_29:
  v22 = (volatile signed __int32 *)v26;
  v10 = CImageLegacyMilBrushProxy::Update(
          (__int64)v26,
          v13,
          (__int64)&v29,
          (__int64)&v28,
          0LL,
          1u,
          v14,
          0LL,
          v21,
          1,
          v25,
          0,
          0,
          *((_QWORD *)this + 3));
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 679LL;
    goto LABEL_31;
  }
  if ( a4 )
  {
    *a4 = (struct CRectResourceProxy *)v5;
    if ( v5 )
    {
      _InterlockedIncrement(v5 + 2);
      v22 = (volatile signed __int32 *)v26;
    }
  }
  *a2 = (struct CImageLegacyMilBrushProxy *)v22;
  if ( v22 )
    _InterlockedIncrement(v22 + 2);
  if ( a3 )
  {
    *a3 = (struct CCachedVisualImageProxy *)*((_QWORD *)this + 3);
    v23 = *((_QWORD *)this + 3);
    if ( v23 )
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
  }
  v11 = 0;
LABEL_41:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v26);
  return v11;
}
