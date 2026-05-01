/*
 * XREFs of ?SubscribeToServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801FF580
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$Register@UIBamThrottleSettings@@P81@EAAJPEAUIWindowOccludedChangeListener@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIBamThrottleSettings@@P81@EAAJPEAUIWindowOccludedChangeListener@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x1801FC2BC (--$Register@UIBamThrottleSettings@@P81@EAAJPEAUIWindowOccludedChangeListener@@PEAK@ZP81@EAAJK@ZP.c)
 *     ??$Register@UIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x1801FC390 (--$Register@UIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotificatio.c)
 *     ??$Register@UIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x1801FC464 (--$Register@UIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotifica.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationViewManager::SubscribeToServices(
        CApplicationViewManager *this,
        struct IServiceProvider *a2)
{
  _QWORD *v4; // r12
  int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v20; // [rsp+70h] [rbp+40h] BYREF
  __int64 v21; // [rsp+78h] [rbp+48h] BYREF
  __int64 v22; // [rsp+80h] [rbp+50h] BYREF
  __int64 v23; // [rsp+88h] [rbp+58h] BYREF

  v4 = (_QWORD *)((char *)this + 672);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 84);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, _QWORD *))a2->lpVtbl->QueryService)(
         a2,
         &IID_IImmersiveApplicationManager,
         &GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0,
         v4);
  if ( v5 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 85);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &IID_IClassicWindowManager,
           &GUID_c16c342e_f6f2_4a8e_86c6_74a6ae2a8a84,
           (char *)this + 680);
    if ( v5 < 0 )
    {
      v6 = 62LL;
      goto LABEL_3;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 86);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
           &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
           (char *)this + 688);
    if ( v5 < 0 )
    {
      v6 = 63LL;
      goto LABEL_3;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 90);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           (char *)this + 720);
    if ( v5 < 0 )
    {
      v6 = 64LL;
      goto LABEL_3;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 91);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
           &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
           (char *)this + 728);
    if ( v5 < 0 )
    {
      v6 = 65LL;
      goto LABEL_3;
    }
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &GUID_66012c8d_bc3c_4254_bacd_ca483666b143,
           &GUID_66012c8d_bc3c_4254_bacd_ca483666b143,
           &v23);
    v5 = v7;
    if ( v7 < 0 )
    {
      v9 = 69LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_38:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      return (unsigned int)v5;
    }
    v7 = SmartCookie::Register<IBamThrottleSettings,long (IBamThrottleSettings::*)(IWindowOccludedChangeListener *,unsigned long *),long (IBamThrottleSettings::*)(unsigned long),CApplicationViewManager *>(
           (__int64)this + 472,
           v23,
           v8);
    v5 = v7;
    if ( v7 < 0 )
    {
      v9 = 74LL;
      goto LABEL_18;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 91) + 40LL))(
           *((_QWORD *)this + 91),
           ((unsigned __int64)this + 104) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 72) >> 64));
    v5 = v7;
    if ( v7 < 0 )
    {
      v9 = 76LL;
      goto LABEL_18;
    }
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v10 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v4)(
            *v4,
            &GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164,
            &v22);
    v5 = v10;
    if ( v10 < 0 )
    {
      v11 = 85LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_37:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      goto LABEL_38;
    }
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 24LL))(v22);
    v5 = v10;
    if ( v10 < 0 )
    {
      v11 = 86LL;
      goto LABEL_23;
    }
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &IID_IImmersiveApplicationNotificationService,
            &GUID_7860c098_fb29_49aa_a512_adacc0ffee84,
            &v21);
    v5 = v12;
    if ( v12 < 0 )
    {
      v14 = 90LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v12);
LABEL_36:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      goto LABEL_37;
    }
    v12 = SmartCookie::Register<IImmersiveApplicationNotificationService,long (IImmersiveApplicationNotificationService::*)(IImmersiveApplicationNotification *,unsigned long *),long (IImmersiveApplicationNotificationService::*)(unsigned long),CApplicationViewManager *>(
            (__int64)this + 344,
            v21,
            v13);
    v5 = v12;
    if ( v12 < 0 )
    {
      v14 = 95LL;
      goto LABEL_28;
    }
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v15 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &GUID_f42f750a_64a8_4190_951d_c6f7ef4e4ba1,
            &GUID_f8a6c78c_9f19_4417_aaf5_c9807f8aee4f,
            &v20);
    v5 = v15;
    if ( v15 >= 0 )
    {
      v15 = SmartCookie::Register<IEnterpriseIdChangeNotificationProvider,long (IEnterpriseIdChangeNotificationProvider::*)(IEnterpriseIdChangeNotification *,unsigned long *),long (IEnterpriseIdChangeNotificationProvider::*)(unsigned long),CApplicationViewManager *>(
              (__int64)this + 216,
              v20,
              v16);
      v5 = v15;
      if ( v15 >= 0 )
      {
        v5 = 0;
        goto LABEL_35;
      }
      v17 = 104LL;
    }
    else
    {
      v17 = 99LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_35:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    goto LABEL_36;
  }
  v6 = 61LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
