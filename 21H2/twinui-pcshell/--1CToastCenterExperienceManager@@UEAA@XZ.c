/*
 * XREFs of ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x180230BF8
 * Callers:
 *     ??_ECToastCenterExperienceManager@@UEAAPEAXI@Z @ 0x180231010 (--_ECToastCenterExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x180057690 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1800880D0 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180095340 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1801B15A0 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1804E37CC (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x1804E5A60 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CToastCenterExperienceManager::~CToastCenterExperienceManager(
        CToastCenterExperienceManager *this,
        volatile int *a2)
{
  __int64 v3; // r10
  __int64 v4; // r10
  struct _TP_TIMER *v5; // rcx
  __int64 v6; // rcx
  volatile int *v7; // rdx

  *(_QWORD *)this = &CToastCenterExperienceManager::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 1) = &CToastCenterExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &CToastCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 3) = &CToastCenterExperienceManager::`vftable'{for `IImmersiveSessionIdleNotification'};
  *((_QWORD *)this + 4) = &CToastCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 5) = &CToastCenterExperienceManager::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 6) = &CToastCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 7) = &CToastCenterExperienceManager::`vftable'{for `Windows::Internal::Shell::Holographic::IHolographicExperienceExtension'};
  *((_QWORD *)this + 8) = &CToastCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 11) = &CToastCenterExperienceManager::`vftable'{for `SingleViewShellExperienceEventHandler'};
  v3 = *((_QWORD *)this + 91);
  if ( v3 )
  {
    *((_QWORD *)this + 91) = 0LL;
    if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v3 + 12), a2) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 89);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 87);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 84);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 83);
  v5 = (struct _TP_TIMER *)*((_QWORD *)this + 82);
  if ( v5 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 81);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 80);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 79);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 78);
  SmartCookie::Unregister((CToastCenterExperienceManager *)((char *)this + 480));
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)this + 480);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 59);
  v6 = *((_QWORD *)this + 58);
  if ( v6 )
  {
    *((_QWORD *)this + 58) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 56);
  WindowsDeleteString(*((HSTRING *)this + 52));
  *((_QWORD *)this + 52) = 0LL;
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CToastCenterExperienceManager *)((char *)this + 352));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CToastCenterExperienceManager *)((char *)this + 320));
  CSingleViewShellExperience::~CSingleViewShellExperience((CToastCenterExperienceManager *)((char *)this + 104));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>(
    (__int64)this,
    v7);
}
