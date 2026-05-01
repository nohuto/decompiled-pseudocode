/*
 * XREFs of ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x1804347E8
 * Callers:
 *     ?_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180435884 (-_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveAppl.c)
 *     ?IsLauncherVisible@TabletModePositioner@@AEAA_NXZ @ 0x1804687C4 (-IsLauncherVisible@TabletModePositioner@@AEAA_NXZ.c)
 *     ?IsLauncherOrSwitcherVisibleOnThisMonitor@TabletModeViewManager@@AEAA_NXZ @ 0x1804718C0 (-IsLauncherOrSwitcherVisibleOnThisMonitor@TabletModeViewManager@@AEAA_NXZ.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18047F3C8 (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(
        IUnknown *punk,
        struct IUnknown *a2,
        struct IImmersiveLauncher *a3,
        bool *a4)
{
  HRESULT Service; // ebx
  void *v8; // rbx
  struct IUnknown *v10[2]; // [rsp+20h] [rbp-10h] BYREF
  void *v11; // [rsp+68h] [rbp+38h] BYREF
  void *ppvOut; // [rsp+70h] [rbp+40h] BYREF
  struct IUnknown *v13; // [rsp+78h] [rbp+48h] BYREF

  ppvOut = 0LL;
  Service = 0;
  *(_BYTE *)a3 = 0;
  if ( a2 )
  {
    ((void (__fastcall *)(struct IUnknown *, struct IUnknown *, struct IImmersiveLauncher *, bool *))a2->lpVtbl->AddRef)(
      a2,
      a2,
      a3,
      a4);
    v11 = ppvOut;
    ppvOut = a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v11);
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
    Service = IUnknown_QueryService(
                punk,
                (const GUID *const)&SID_ImmersiveLauncher,
                &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
                &ppvOut);
  }
  if ( Service >= 0 )
  {
    Service = (*(__int64 (__fastcall **)(void *, void **))(*(_QWORD *)ppvOut + 56LL))(ppvOut, &v11);
    if ( Service >= 0 )
    {
      if ( (_DWORD)v11 )
      {
        v10[0] = 0LL;
        v8 = ppvOut;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v10);
        Service = (*(__int64 (__fastcall **)(void *, struct IUnknown **))(*(_QWORD *)v8 + 88LL))(v8, v10);
        if ( Service >= 0 )
        {
          v13 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
          Service = IUnknown_QueryService(
                      punk,
                      &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                      &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                      (void **)&v13);
          if ( Service >= 0 )
            *(_BYTE *)a3 = (unsigned int)SHIsSameObject(v10[0], v13) != 0;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v10);
      }
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)Service;
}
