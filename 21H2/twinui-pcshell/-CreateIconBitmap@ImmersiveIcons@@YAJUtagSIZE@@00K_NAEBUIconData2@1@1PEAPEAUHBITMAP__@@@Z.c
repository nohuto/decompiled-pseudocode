/*
 * XREFs of ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1804DD688
 * Callers:
 *     ?_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@1@@Z @ 0x1804E0B64 (-_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_7690576b3c646601b77e641f2b19e007_::operator() @ 0x18014E788 (_lambda_7690576b3c646601b77e641f2b19e007_--operator().c)
 *     ??$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z @ 0x1804DC9A8 (--$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z.c)
 *     ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x1804DCE44 (-AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z.c)
 *     ?CalculateColorLuminosity@@YANK@Z @ 0x1804DD12C (-CalculateColorLuminosity@@YANK@Z.c)
 *     ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1804DF2C4 (-GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z @ 0x1804DFD40 (-PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804E010C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@details@wil@@Q.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804E01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@details@wil@@QEAAX_N.c)
 *     ?TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z @ 0x1804F72D4 (-TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z.c)
 */

__int64 __fastcall ImmersiveIcons::CreateIconBitmap(
        ImmersiveIcons *this,
        struct tagSIZE a2,
        struct tagSIZE a3,
        struct tagSIZE a4,
        char a5,
        const WCHAR *a6,
        const struct ImmersiveIcons::IconData2 *a7,
        struct tagSIZE *a8)
{
  struct tagSIZE *v8; // r15
  LONG cx; // r12d
  LONG v10; // ebx
  const WCHAR *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // r8
  int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rdx
  const struct _GUID *v18; // rcx
  int ThreadThumbnailCache; // eax
  bool v20; // zf
  struct tagSIZE *v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // edi
  HBITMAP v26; // rdx
  bool v27; // r8
  bool v28; // al
  double v29; // xmm6_8
  double v30; // xmm0_8
  HGDIOBJ v31; // rcx
  HBITMAP v32; // rax
  HGDIOBJ v33; // rcx
  HGDIOBJ v34; // rbx
  __int64 v35; // r9
  HBITMAP v36; // rax
  HGDIOBJ v37; // rcx
  HBITMAP v38; // rbx
  DWORD SysColor; // eax
  HGDIOBJ v40; // rcx
  bool *v42; // [rsp+20h] [rbp-50h]
  HGDIOBJ ho; // [rsp+30h] [rbp-40h] BYREF
  void *v44; // [rsp+38h] [rbp-38h] BYREF
  IBindCtx *pbc; // [rsp+40h] [rbp-30h] BYREF
  void *ppv; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v47[2]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  ImmersiveIcons *v49; // [rsp+B0h] [rbp+40h] BYREF
  struct tagSIZE v50; // [rsp+B8h] [rbp+48h] BYREF
  struct tagSIZE v51; // [rsp+C0h] [rbp+50h] BYREF

  v51 = a3;
  v50 = a2;
  v49 = this;
  v8 = a8;
  LOBYTE(a2.cx) = 1;
  ppv = 0LL;
  cx = a4.cx;
  pbc = 0LL;
  *a8 = 0LL;
  v10 = a3.cx;
  ((void (__fastcall *)(_QWORD, _QWORD))wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarSuggestions>::ReportUsage)(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskbarSuggestions>::GetImpl'::`2'::impl,
    a2);
  v11 = a6;
  if ( *PathFindExtensionW(a6 + 8)
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pbc),
        v15 = _CreatePropertyBagBindCtx<unsigned short const *>(v13, v12, v14, &pbc),
        v16 = v15,
        v15 >= 0) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    v15 = SHCreateItemFromParsingName(v11 + 8, pbc, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = 494LL;
      goto LABEL_6;
    }
    v44 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
    ThreadThumbnailCache = GetThreadThumbnailCache(v18, &v44);
    v16 = ThreadThumbnailCache;
    if ( ThreadThumbnailCache < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F1,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)ThreadThumbnailCache);
LABEL_44:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
      goto LABEL_45;
    }
    v20 = *(_DWORD *)v11 == 1;
    v21 = &v51;
    ho = 0LL;
    if ( !v20 )
      v21 = &v50;
    a8 = (struct tagSIZE *)*v21;
    v47[0] = (__int64 *)&v44;
    v47[1] = (__int64 *)&ppv;
    v22 = lambda_7690576b3c646601b77e641f2b19e007_::operator()(v47, (unsigned int)a8, (__int64)&a7, (__int64)&ho);
    v16 = v22;
    if ( v22 < 0 )
    {
      v24 = 513LL;
LABEL_40:
      v35 = (unsigned int)v22;
      goto LABEL_41;
    }
    v25 = *(_DWORD *)v11;
    LOBYTE(v23) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles>::GetImpl'::`2'::impl,
      v23);
    v28 = v25 != 2;
    if ( *(_DWORD *)v11 == 3 )
    {
      if ( TryGetDominantColorFromHBITMAP((HBITMAP)ho, (bool)v26, v27, (unsigned int *)&a8, v42) )
      {
        v29 = CalculateColorLuminosity(cx);
        v30 = CalculateColorLuminosity((int)a8);
        if ( (fmax(v29, v30) + 0.05) / (fmin(v29, v30) + 0.05) >= 2.5 )
          goto LABEL_22;
      }
      v31 = ho;
      ho = 0LL;
      if ( v31 )
        DeleteObject(v31);
      v22 = lambda_7690576b3c646601b77e641f2b19e007_::operator()(v47, v10, (__int64)&a7, (__int64)&ho);
      v16 = v22;
      if ( v22 < 0 )
      {
        v24 = 524LL;
        goto LABEL_40;
      }
      v28 = 1;
    }
    if ( v28 )
    {
      if ( (_DWORD)a7 != 2 )
        goto LABEL_48;
      v36 = GDIHelpers::PremultiplyAlphaChannel((GDIHelpers *)ho, v26, v27);
      v37 = ho;
      v38 = v36;
      ho = 0LL;
      if ( v37 )
        DeleteObject(v37);
      ho = v38;
      if ( v38 )
      {
LABEL_48:
        if ( *((_BYTE *)v11 + 8) )
          SysColor = GetSysColor(5);
        else
          SysColor = *((_DWORD *)v11 + 3);
        LODWORD(a8) = SysColor;
        v22 = GDIHelpers::AddBackgroundForIcon(ho, (int *)&a8, (LONG *)&v49, &v50, &v51, v8);
        v16 = v22;
        if ( v22 >= 0 )
          goto LABEL_42;
        v24 = 561LL;
        goto LABEL_40;
      }
      v16 = -2147024882;
      v24 = 547LL;
      v35 = 2147942414LL;
LABEL_41:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)v35);
LABEL_42:
      v40 = ho;
      ho = 0LL;
      if ( v40 )
        DeleteObject(v40);
      goto LABEL_44;
    }
LABEL_22:
    if ( a5 && (_DWORD)a7 == 2 )
    {
      v32 = GDIHelpers::PremultiplyAlphaChannel((GDIHelpers *)ho, v26, v27);
      v33 = ho;
      v34 = v32;
      ho = 0LL;
      if ( v33 )
        DeleteObject(v33);
      ho = v34;
      if ( !v34 )
      {
        v16 = -2147024882;
        v24 = 535LL;
        v35 = 2147942414LL;
        goto LABEL_41;
      }
    }
    else
    {
      v34 = ho;
    }
    ho = 0LL;
    v16 = 0;
    *v8 = (struct tagSIZE)v34;
    goto LABEL_42;
  }
  v17 = 491LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v15);
LABEL_45:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pbc);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v16;
}
