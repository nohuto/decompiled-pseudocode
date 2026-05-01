/*
 * XREFs of ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x1803EED90
 * Callers:
 *     ?s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z @ 0x1803EF630 (-s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180081740 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18028582C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802858CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHost@@@details@wil@@QEAAX_NW4.c)
 *     ?CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIApplicationViewSwitcher@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIImmersiveSettingsCache@@PEAUITabletModeViewManager@@PEAUIShellTargetingContractManager@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUIInspectable@@PEAUIInspectable@@PEAUIImmersiveMonitorManager@@PEAUIXamlExplorerHost@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F70F4 (-CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicat.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::s_CreateMTVManager(
        struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  const struct _GUID *v28; // [rsp+B8h] [rbp-98h]
  struct ITabViewManager *v29; // [rsp+D0h] [rbp-80h] BYREF
  struct IInspectable *v30; // [rsp+D8h] [rbp-78h] BYREF
  struct IInspectable *v31; // [rsp+E0h] [rbp-70h] BYREF
  struct IXamlExplorerHost *v32; // [rsp+E8h] [rbp-68h] BYREF
  struct IImmersiveMonitorManager *v33; // [rsp+F0h] [rbp-60h] BYREF
  struct IApplicationViewIconLoader *v34; // [rsp+F8h] [rbp-58h] BYREF
  struct ISnapServiceProvider *v35; // [rsp+100h] [rbp-50h] BYREF
  struct IShellTargetingContractManager *v36; // [rsp+108h] [rbp-48h] BYREF
  struct ITabletModeViewManager *v37; // [rsp+110h] [rbp-40h] BYREF
  struct IImmersiveSettingsCache *v38; // [rsp+118h] [rbp-38h] BYREF
  struct IMultitaskingViewGestureState *v39; // [rsp+120h] [rbp-30h] BYREF
  struct IMultitaskingViewVisibilityServiceInternal *v40; // [rsp+128h] [rbp-28h] BYREF
  struct IImmersiveAppCrusher *v41; // [rsp+130h] [rbp-20h] BYREF
  struct IVirtualDesktopNotificationService *v42; // [rsp+138h] [rbp-18h] BYREF
  struct ITabletModeController *v43; // [rsp+140h] [rbp-10h] BYREF
  struct IVirtualDesktopPinnedApps *v44; // [rsp+148h] [rbp-8h] BYREF
  struct IVirtualDesktopManagerInternal *v45; // [rsp+150h] [rbp+0h] BYREF
  struct IApplicationViewSwitcher *v46; // [rsp+158h] [rbp+8h] BYREF
  struct IApplicationViewVisibilityDebouncedNotificationService *v47; // [rsp+160h] [rbp+10h] BYREF
  struct IApplicationViewCollection *v48[5]; // [rsp+168h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+48h]
  struct IMultitaskingViewServiceProvider *v50; // [rsp+1A0h] [rbp+50h] BYREF
  void *v51; // [rsp+1A8h] [rbp+58h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::ITabController *v52; // [rsp+1B0h] [rbp+60h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::ITabDataModel *v53; // [rsp+1B8h] [rbp+68h] BYREF

  v50 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
  v2 = CMarshaledInterface::_Unmarshal(
         this,
         &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215,
         (struct IInspectable **)&v50,
         0);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v48[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v48);
    v4 = CMarshaledInterface::_Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 8),
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           (struct IInspectable **)v48,
           0);
    v3 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EC,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v4);
LABEL_74:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v48);
      goto LABEL_75;
    }
    v47 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v47);
    v5 = CMarshaledInterface::_Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 16),
           &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
           (struct IInspectable **)&v47,
           0);
    v3 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EE,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v5);
LABEL_73:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v47);
      goto LABEL_74;
    }
    v46 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46);
    v6 = CMarshaledInterface::_Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 24),
           &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
           (struct IInspectable **)&v46,
           0);
    v3 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F0,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v6);
LABEL_72:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46);
      goto LABEL_73;
    }
    v45 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
    v7 = CMarshaledInterface::_Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 32),
           &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
           (struct IInspectable **)&v45,
           0);
    v3 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F2,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v7);
LABEL_71:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
      goto LABEL_72;
    }
    v44 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
    v8 = CMarshaledInterface::_Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 40),
           &GUID_4ce81583_1e4c_4632_a621_07a53543148f,
           (struct IInspectable **)&v44,
           0);
    v3 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F4,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v8);
LABEL_70:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
      goto LABEL_71;
    }
    v43 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v43);
    v9 = CMarshaledInterface::_Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 48),
           &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
           (struct IInspectable **)&v43,
           0);
    v3 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F6,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v9);
LABEL_69:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v43);
      goto LABEL_70;
    }
    v42 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v42);
    v10 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 56),
            &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
            (struct IInspectable **)&v42,
            0);
    v3 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F8,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v10);
LABEL_68:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v42);
      goto LABEL_69;
    }
    v41 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
    v11 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 64),
            &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
            (struct IInspectable **)&v41,
            0);
    v3 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FA,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v11);
LABEL_67:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
      goto LABEL_68;
    }
    v40 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
    v12 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 72),
            &GUID_6e7da126_f47e_4b81_b43f_e466cf325f58,
            (struct IInspectable **)&v40,
            0);
    v3 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FC,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v12);
LABEL_66:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
      goto LABEL_67;
    }
    v39 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
    v13 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 80),
            &GUID_4639c886_cffe_492c_915a_1e3f02d22434,
            (struct IInspectable **)&v39,
            0);
    v3 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FE,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v13);
LABEL_65:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
      goto LABEL_66;
    }
    v38 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
    v14 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 88),
            &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
            (struct IInspectable **)&v38,
            0);
    v3 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x200,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v14);
LABEL_64:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
      goto LABEL_65;
    }
    v37 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
    v15 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 96),
            &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
            (struct IInspectable **)&v37,
            0);
    v3 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x202,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v15);
LABEL_63:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
      goto LABEL_64;
    }
    v36 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
    v16 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 104),
            &GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
            (struct IInspectable **)&v36,
            0);
    v3 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x204,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v16);
LABEL_62:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
      goto LABEL_63;
    }
    v35 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
    v17 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 112),
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            (struct IInspectable **)&v35,
            0);
    v3 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x206,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v17);
LABEL_61:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
      goto LABEL_62;
    }
    v34 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
    v18 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 120),
            &GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
            (struct IInspectable **)&v34,
            0);
    v3 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x208,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v18);
LABEL_60:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
      goto LABEL_61;
    }
    v33 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v33);
    v19 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 144),
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            (struct IInspectable **)&v33,
            0);
    v3 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20A,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v19);
LABEL_59:
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v33);
      goto LABEL_60;
    }
    v32 = 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHost>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::GetImpl'::`2'::impl,
      1u,
      3u);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    v20 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 152),
            &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c,
            (struct IInspectable **)&v32,
            0);
    v3 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20E,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v20);
LABEL_58:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
      goto LABEL_59;
    }
    v31 = 0LL;
    v30 = 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetImpl'::`2'::impl,
      1u,
      3u);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
    v21 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 128),
            &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
            &v31,
            0);
    v3 = v21;
    if ( v21 < 0 )
    {
      v22 = 533LL;
LABEL_41:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v21);
LABEL_57:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
      goto LABEL_58;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
    v21 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 136),
            &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
            &v30,
            0);
    v3 = v21;
    if ( v21 < 0 )
    {
      v22 = 534LL;
      goto LABEL_41;
    }
    v29 = 0LL;
    v53 = 0LL;
    v52 = 0LL;
    if ( *((_QWORD *)this + 22) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
      v23 = CMarshaledInterface::_Unmarshal(
              (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 176),
              &GUID_d1710073_c814_4a0c_9685_00e44547418f,
              (struct IInspectable **)&v29,
              0);
      v3 = v23;
      if ( v23 < 0 )
      {
        v24 = 542LL;
LABEL_49:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v23);
LABEL_56:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v53);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
        goto LABEL_57;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v53);
      v23 = CMarshaledInterface::_Unmarshal(
              (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 168),
              &GUID_de815fce_67de_41ea_8c7f_37a65bf92294,
              (struct IInspectable **)&v53,
              0);
      v3 = v23;
      if ( v23 < 0 )
      {
        v24 = 543LL;
        goto LABEL_49;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
      v23 = CMarshaledInterface::_Unmarshal(
              (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 160),
              &GUID_947c042a_0955_4e95_b853_d3c1877d5ef2,
              (struct IInspectable **)&v52,
              0);
      v3 = v23;
      if ( v23 < 0 )
      {
        v24 = 544LL;
        goto LABEL_49;
      }
    }
    v51 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v51);
    v25 = CMultitaskingViewManager_CreateInstance(
            v50,
            v48[0],
            v47,
            v46,
            v45,
            v44,
            v43,
            v42,
            v41,
            v40,
            v39,
            v38,
            v37,
            v36,
            v35,
            v34,
            v31,
            v30,
            v33,
            v32,
            v53,
            v52,
            v29,
            v28,
            &v51);
    v3 = v25;
    if ( v25 >= 0 )
    {
      v25 = (*(__int64 (__fastcall **)(struct IMultitaskingViewServiceProvider *, void *))(*(_QWORD *)v50 + 24LL))(
              v50,
              v51);
      v3 = v25;
      if ( v25 >= 0 )
      {
LABEL_55:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v51);
        goto LABEL_56;
      }
      v26 = 575LL;
    }
    else
    {
      v26 = 572LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v25);
    goto LABEL_55;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1EA,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
    (const char *)(unsigned int)v2);
LABEL_75:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
  return v3;
}
