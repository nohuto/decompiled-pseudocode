/*
 * XREFs of ?_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1804480F4
 * Callers:
 *     ?OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007D3C0 (-OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180448A2C (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x18004A838 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SurfaceHubPositioner::_GetMonitorForLaunch(
        SurfaceHubPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IImmersiveMonitor **a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  struct IImmersiveApplication **v11; // r8
  int ApplicationFromView; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, LPCWCH *); // rdi
  int v15; // eax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, __int64, struct IImmersiveMonitor *, struct IImmersiveMonitor **); // rbx
  int v18; // eax
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  LPCWCH lpString1; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h]
  __int64 v23; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v25; // [rsp+80h] [rbp+30h] BYREF
  struct IImmersiveMonitor *v26; // [rsp+90h] [rbp+40h] BYREF
  struct IImmersiveMonitor *v27; // [rsp+98h] [rbp+48h] BYREF

  *a3 = 0LL;
  v26 = 0LL;
  v6 = *((_QWORD *)this + 20);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v6 + 72LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
  v8 = v7(v6, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v26);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v25 = 1;
    v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 20) + 32LL))(
           *((_QWORD *)this + 20),
           &v25);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 497LL;
      goto LABEL_5;
    }
    if ( v25 > 1 )
    {
      v20 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, (struct IApplicationView *)&v20, v11);
      v9 = ApplicationFromView;
      if ( ApplicationFromView < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F5,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)ApplicationFromView);
LABEL_17:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
        goto LABEL_20;
      }
      lpString1 = 0LL;
      v22 = 0LL;
      v23 = 0LL;
      v13 = v20;
      v14 = *(__int64 (__fastcall **)(__int64, LPCWCH *))(*(_QWORD *)v20 + 32LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
      v22 = -1LL;
      v23 = -1LL;
      v15 = v14(v13, &lpString1);
      v9 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F8,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v15);
LABEL_16:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
        goto LABEL_17;
      }
      if ( CompareStringOrdinal(
             lpString1,
             -1,
             L"windows.immersivecontrolpanel_cw5n1h2txyewy!microsoft.windows.immersivecontrolpanel",
             -1,
             1) != 2 )
      {
        v27 = 0LL;
        v16 = *((_QWORD *)this + 20);
        v17 = *(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, struct IImmersiveMonitor **))(*(_QWORD *)v16 + 104LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
        v18 = v17(v16, 1LL, v26, &v27);
        v9 = v18;
        if ( v18 >= 0 )
        {
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
          *a3 = v27;
          v9 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1FD,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
            (const char *)(unsigned int)v18);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
        goto LABEL_16;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
    *a3 = v26;
    v9 = 0;
    goto LABEL_20;
  }
  v10 = 495LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)v8);
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
  return v9;
}
