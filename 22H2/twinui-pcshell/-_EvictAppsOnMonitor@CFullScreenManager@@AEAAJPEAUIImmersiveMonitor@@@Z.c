/*
 * XREFs of ?_EvictAppsOnMonitor@CFullScreenManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18021C0B4
 * Callers:
 *     ?DisplaySettingsChange@CFullScreenManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180219460 (-DisplaySettingsChange@CFullScreenManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPL.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800D3784 (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180219BB4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x1804E134C (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

__int64 __fastcall CFullScreenManager::_EvictAppsOnMonitor(IUnknown **this, struct IImmersiveMonitor *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  void *v6; // rbx
  int v7; // eax
  HRESULT v8; // eax
  __int64 v9; // rax
  HMONITOR v10; // rax
  void *v11; // rdi
  HMONITOR v12; // rbx
  void *v13; // rbx
  __int64 *v14; // rcx
  ApplicationViewHelpers *v15; // rbx
  struct IApplicationView *v16; // rdx
  __int64 v17; // rbx
  __int64 v19; // [rsp+30h] [rbp-49h] BYREF
  void *v20; // [rsp+38h] [rbp-41h] BYREF
  __int64 v21; // [rsp+40h] [rbp-39h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-31h] BYREF
  __int64 v23; // [rsp+50h] [rbp-29h] BYREF
  ApplicationViewHelpers *v24; // [rsp+58h] [rbp-21h] BYREF
  __int64 *v25; // [rsp+60h] [rbp-19h]
  struct IImmersiveApplication *ApplicationFromView; // [rsp+68h] [rbp-11h] BYREF
  ApplicationViewHelpers *v27; // [rsp+70h] [rbp-9h] BYREF
  __int64 v28; // [rsp+78h] [rbp-1h] BYREF
  int v29; // [rsp+80h] [rbp+7h]
  int v30; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v31; // [rsp+90h] [rbp+17h] BYREF
  __int64 *v32; // [rsp+98h] [rbp+1Fh]
  RECT rc; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         this[2],
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &ppvOut);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v21 = 0LL;
    v6 = ppvOut;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v7 = (*(__int64 (__fastcall **)(void *, __int64, struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)v6 + 64LL))(
           v6,
           3LL,
           a2,
           &v21);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v20 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v20);
      v8 = IUnknown_QueryService(
             this[2],
             (const GUID *const)&SID_IImmersiveMonitorService,
             &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
             &v20);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v9 = *(_QWORD *)a2;
        v19 = 0LL;
        if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, RECT *))(v9 + 72))(a2, &rc) < 0
          || (v10 = MonitorFromRect(&rc, 2u),
              v11 = v20,
              v12 = v10,
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19),
              (*(int (__fastcall **)(void *, HMONITOR, __int64 *))(*(_QWORD *)v11 + 48LL))(v11, v12, &v19) < 0) )
        {
          v13 = v20;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
          (*(void (__fastcall **)(void *, _QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)v13 + 72LL))(
            v13,
            0LL,
            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
            &v19);
        }
        details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
          (__int64)&v28,
          v21);
        LODWORD(v23) = 0;
        v24 = 0LL;
        v25 = &v28;
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v23);
        v14 = (__int64 *)&v30;
        v31 = 0LL;
        v30 = v29;
        v32 = &v28;
        while ( 1 )
        {
          details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(v14);
          if ( (_DWORD)v23 == v30 && v25 == v32 )
            break;
          v15 = v24;
          v27 = v24;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
          ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(v15, v16);
          v17 = (__int64)ApplicationFromView;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&ApplicationFromView);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 360LL))(v17, v19);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ApplicationFromView);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
          LODWORD(v23) = v23 + 1;
          v14 = &v23;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
        v5 = 0;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C1,
          (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
          (const char *)(unsigned int)v8);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BE,
        (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BB,
      (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v5;
}
