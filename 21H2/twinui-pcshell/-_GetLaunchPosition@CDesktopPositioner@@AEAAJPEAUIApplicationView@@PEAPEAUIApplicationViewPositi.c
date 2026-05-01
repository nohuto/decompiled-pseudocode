/*
 * XREFs of ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004C538
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004C914 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ?DefaultLaunchPositionOverride_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B1FC (-DefaultLaunchPositionOverride_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x18004CB98 (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x18004CCA4 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D0D8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D1E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18004D5D8 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18004D5FC (-_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x18004D6A0 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180099A14 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x1801F411C (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$?4UIWICBitmapFlipRotator@@@?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@UIWICBitmapFlipRotator@@@12@@Z @ 0x18029338C (--$-4UIWICBitmapFlipRotator@@@-$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComP.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CDesktopPositioner::_GetLaunchPosition(
        IUnknown *punkSite,
        struct IApplicationView *a2,
        struct IApplicationViewPosition **a3)
{
  unsigned int v4; // r14d
  struct wil::details::IFunctorHost *v5; // r8
  int (__fastcall **v6)(_QWORD, _QWORD, _QWORD); // rax
  int v7; // eax
  unsigned int v8; // ebx
  int (__fastcall **v9)(_QWORD, _QWORD, _QWORD); // rax
  int v10; // eax
  __int64 v11; // rdx
  int Instance; // eax
  BOOL v13; // edi
  int DefaultRect; // eax
  CDesktopPositioner *v15; // rcx
  int fixed; // eax
  int v18; // eax
  struct IApplicationViewPosition *v19; // rcx
  __int64 v20; // rdx
  int v21; // [rsp+20h] [rbp-E0h]
  void *v22; // [rsp+30h] [rbp-D0h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-C8h] BYREF
  struct IApplicationView *v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  void *v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  struct IApplicationViewPosition **v29; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v30; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+78h] [rbp-88h]
  __int64 v32; // [rsp+80h] [rbp-80h]
  LPVOID pv; // [rsp+88h] [rbp-78h] BYREF
  __int64 v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+A0h] [rbp-60h]
  __int128 v37; // [rsp+A8h] [rbp-58h] BYREF
  int v38; // [rsp+B8h] [rbp-48h]
  _QWORD v39[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v40[3]; // [rsp+D0h] [rbp-30h] BYREF
  DiagnosticsInfo v41; // [rsp+100h] [rbp+0h] BYREF
  const char *v42; // [rsp+108h] [rbp+8h]
  __int64 v43; // [rsp+110h] [rbp+10h]
  __int16 v44; // [rsp+118h] [rbp+18h]
  _BYTE v45[8]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v46; // [rsp+128h] [rbp+28h]
  int v47; // [rsp+134h] [rbp+34h]
  struct tagRECT v48; // [rsp+148h] [rbp+48h] BYREF
  struct tagRECT v49; // [rsp+158h] [rbp+58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v24 = a2;
  v29 = a3;
  *a3 = 0LL;
  v40[0] = &v24;
  v40[1] = punkSite;
  v40[2] = &v29;
  v41 = (DiagnosticsInfo)retaddr;
  v42 = "pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp";
  v43 = 0LL;
  v44 = 1728;
  v4 = 1;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PeopleBar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetImpl'::`2'::impl,
    a2);
  v39[0] = &off_18050A470;
  v39[1] = v40;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v45, 0x60F183u, &v41);
  wil::details::RunFunctor((wil::details *)v39, (struct wil::details::IFunctor *)v45, v5);
  if ( v46 )
    *(_DWORD *)(v46 + 16) = v47;
  if ( *v29 )
    return 0LL;
  v22 = 0LL;
  pv = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v6 = *(int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v24;
  v34 = -1LL;
  v35 = -1LL;
  v7 = ((__int64 (__fastcall *)(struct IApplicationView *, LPVOID *))v6[17])(v24, &pv);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    v9 = *(int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v24;
    v31 = -1LL;
    v32 = -1LL;
    v10 = ((__int64 (__fastcall *)(struct IApplicationView *, LPVOID *))v9[61])(v24, &v30);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D3,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v10,
        v21);
LABEL_43:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v30);
      goto LABEL_44;
    }
    v26 = 0LL;
    if ( (*((int (__fastcall **)(struct IUnknownVtbl *, LPVOID, LPVOID, __int64 *))punkSite[31].lpVtbl->QueryInterface
          + 3))(
           punkSite[31].lpVtbl,
           pv,
           v30,
           &v26) >= 0 )
    {
      Microsoft::WRL::ComPtr<IWICBitmapSource>::operator=<IWICBitmapFlipRotator>(&v22, &v26);
      v4 = 0;
      goto LABEL_18;
    }
    LOBYTE(v11) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
      v11);
    punk = 0LL;
    Instance = DefaultLaunchPositionOverride_CreateInstance(0LL, (void **)&punk);
    v8 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6DD,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)Instance,
        v21);
LABEL_33:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
LABEL_42:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      goto LABEL_43;
    }
    IUnknown_SetSite(punk, punkSite);
    v37 = 0LL;
    v38 = 0;
    if ( ((int (__fastcall *)(IUnknown *, struct IApplicationView *, __int128 *))punk->lpVtbl[1].QueryInterface)(
           punk,
           v24,
           &v37) >= 0
      && (_BYTE)v38 )
    {
      v27 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      v18 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(&v27);
      v8 = v18;
      if ( v18 >= 0 )
      {
        v19 = (struct IApplicationViewPosition *)v27;
        v27 = 0LL;
        *v29 = v19;
        v8 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6E4,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v18,
          v21);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      goto LABEL_33;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
    v13 = 0;
    v25 = 0LL;
    if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v24)(
           v24,
           &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
           &v25) >= 0 )
    {
      v28 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 24LL))(v25, &v28) >= 0 )
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 328LL))(v28, 0LL) != 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    }
    DefaultRect = CDesktopPositioner::_GetDefaultRect(punkSite, 0LL, v13, &v48);
    v8 = DefaultRect;
    if ( DefaultRect < 0 )
    {
      v20 = 1790LL;
    }
    else if ( LODWORD(punkSite[50].lpVtbl) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(&v22);
      v8 = DefaultRect;
      if ( DefaultRect >= 0 )
        goto LABEL_17;
      v20 = 1794LL;
    }
    else
    {
      DefaultRect = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v15, &v48, &v49);
      v8 = DefaultRect;
      if ( DefaultRect < 0 )
      {
        v20 = 1799LL;
      }
      else
      {
        v36 = 3;
        DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(&v22);
        v8 = DefaultRect;
        if ( DefaultRect >= 0 )
        {
LABEL_17:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
LABEL_18:
          fixed = CDesktopPositioner::_FixPosition(punkSite, v4, v22, v29);
          v8 = fixed;
          if ( fixed < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x717,
              (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)fixed,
              v21);
            goto LABEL_42;
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
          if ( v30 )
          {
            CoTaskMemFree(v30);
            v30 = 0LL;
          }
          v31 = 0LL;
          v32 = 0LL;
          if ( pv )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
          }
          v34 = 0LL;
          v35 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
          return 0LL;
        }
        v20 = 1800LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DefaultRect,
      v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    goto LABEL_42;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6D0,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v7,
    v21);
LABEL_44:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&pv);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  return v8;
}
