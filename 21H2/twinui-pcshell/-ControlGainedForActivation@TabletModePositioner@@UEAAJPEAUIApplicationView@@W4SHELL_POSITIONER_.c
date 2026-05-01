/*
 * XREFs of ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180465360
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18002B280 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180044910 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x18040BED8 (-IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x180463A58 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18046A124 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch@@@details@wil.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x18046EDC0 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModePositioner::ControlGainedForActivation(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        struct IApplicationView *a4)
{
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  PositionerPropertySetHelpers *v12; // rcx
  int DetailsForActivation; // ebx
  __int64 v14; // rdx
  char lpVtbl; // bl
  const struct _GUID *v16; // rdx
  __int64 v17; // rcx
  int Instance; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // [rsp+30h] [rbp-20h] BYREF
  struct IUnknown *v26; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v27; // [rsp+40h] [rbp-10h]
  int v28; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IUnknown v30; // [rsp+70h] [rbp+20h] BYREF

  v8 = (__int64 *)(a1 + 168);
  if ( (unsigned int)SHIsSameObject(a2, *(struct IUnknown **)(a1 + 168)) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
    return 0LL;
  }
  if ( IsPeopleExperienceHostView((struct IApplicationView *)a2, v9, v10) )
    return 0LL;
  v26 = 0LL;
  v27 = 0;
  v28 = 0;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v12,
                           a4,
                           &v30,
                           (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v26);
  if ( DetailsForActivation >= 0 )
  {
    lpVtbl = (char)v30.lpVtbl;
    if ( ((__int64)v30.lpVtbl & 1) != 0 )
      return 0LL;
    if ( ((__int64)v30.lpVtbl & 0x10) != 0 )
    {
      DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl[9].AddRef)(a2, 1LL);
      if ( DetailsForActivation >= 0 )
        return 0LL;
      v14 = 817LL;
      goto LABEL_7;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch>::GetImpl'::`2'::impl,
      0LL);
    if ( (lpVtbl & 2) != 0 )
    {
      DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl[9].AddRef)(a2, 1LL);
      if ( DetailsForActivation < 0 )
      {
        v14 = 832LL;
        goto LABEL_7;
      }
      DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *))a2->lpVtbl[14].Release)(a2);
      if ( DetailsForActivation < 0 )
      {
        v14 = 833LL;
        goto LABEL_7;
      }
LABEL_38:
      DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))a2->lpVtbl[18].QueryInterface)(a2, 0LL);
      if ( DetailsForActivation >= 0 )
        return 0LL;
      v14 = 872LL;
      goto LABEL_7;
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)(a1 + 120) + 184LL))(
           *(_QWORD *)(a1 + 120),
           a2) )
    {
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl[2].QueryInterface)(a2);
      goto LABEL_38;
    }
    v30.lpVtbl = 0LL;
    if ( a3 == 6 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
      Instance = CEnumerableObjectCollection::CreateInstance(v17, v16, (void **)&v30.lpVtbl);
      DetailsForActivation = Instance;
      if ( Instance >= 0 )
      {
        v26 = a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
        v19 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, struct IUnknown *))v30.lpVtbl->QueryInterface + 5))(
                v30.lpVtbl,
                a2);
        DetailsForActivation = v19;
        if ( v19 >= 0 )
        {
          v25 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
          v20 = (*(__int64 (__fastcall **)(struct IUnknownVtbl *, GUID *, __int64 *))v30.lpVtbl->QueryInterface)(
                  v30.lpVtbl,
                  &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                  &v25);
          DetailsForActivation = v20;
          if ( v20 >= 0 )
          {
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 96LL))(a1, v25, 6LL);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
            goto LABEL_38;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x353,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v20);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x350,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v19);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x34D,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)Instance);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
      return (unsigned int)DetailsForActivation;
    }
    v21 = (__int64)v26;
    if ( v26
      && (v22 = *(_QWORD *)(a1 + 208),
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30),
          (*(int (__fastcall **)(__int64, __int64, struct IUnknown *))(*(_QWORD *)v22 + 48LL))(v22, v21, &v30) >= 0) )
    {
      v23 = TabletModePositioner::AppToAppSwitchHelper(
              (IUnknown *)(a1 - 128),
              (__int64)v30.lpVtbl,
              v27,
              (__int64)a2,
              v28,
              0);
      DetailsForActivation = v23;
      if ( v23 < 0 )
      {
        v24 = 862LL;
LABEL_36:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v23);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
        return (unsigned int)DetailsForActivation;
      }
    }
    else
    {
      v23 = TabletModePositioner::SwitchToAppHelper(a1 - 128, a2, 0LL, 0LL, 0LL);
      DetailsForActivation = v23;
      if ( v23 < 0 )
      {
        v24 = 867LL;
        goto LABEL_36;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
    goto LABEL_38;
  }
  v14 = 809LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)DetailsForActivation);
  return (unsigned int)DetailsForActivation;
}
