/*
 * XREFs of ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x18026112C
 * Callers:
 *     ??_ECortanaStoreAppExperienceManager@@EEAAPEAXI@Z @ 0x1802614A0 (--_ECortanaStoreAppExperienceManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x1801B1CA0 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180257EB0 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x180261064 (--1-$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U-$default_delete@VAssistantLightWNF.c)
 */

void __fastcall CortanaStoreAppExperienceManager::~CortanaStoreAppExperienceManager(
        CortanaStoreAppExperienceManager *this)
{
  HWND v2; // rcx
  HWND v3; // rcx
  Concurrency::details::_RefCounter *v4; // rcx
  Concurrency::details::_RefCounter *v5; // rcx
  Concurrency::details::_RefCounter *v6; // rcx
  Concurrency::details::_RefCounter *v7; // rcx
  Concurrency::details::_RefCounter *v8; // rcx
  __int64 v9; // rcx
  volatile int *v10; // rdx

  *(_QWORD *)this = &CortanaStoreAppExperienceManager::`vftable';
  *((_QWORD *)this + 1) = &CortanaStoreAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>>'};
  *((_QWORD *)this + 6) = &CortanaStoreAppExperienceManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &CortanaStoreAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &CortanaStoreAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>>'};
  *((_QWORD *)this + 15) = &CortanaStoreAppExperienceManager::`vftable'{for `ICortanaStoreAppExperienceManager'};
  *((_QWORD *)this + 16) = &CortanaStoreAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>'};
  *((_QWORD *)this + 17) = &CortanaStoreAppExperienceManager::`vftable'{for `IInputHostLayoutChanges'};
  *((_QWORD *)this + 18) = &CortanaStoreAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IPrivilegedOperationsConsumer>'};
  v2 = (HWND)*((_QWORD *)this + 49);
  if ( v2 )
    DestroyWindow(v2);
  v3 = (HWND)*((_QWORD *)this + 48);
  if ( v3 )
    DestroyWindow(v3);
  v4 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 47);
  if ( v4 )
    Concurrency::details::_RefCounter::_Destroy(v4);
  v5 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 46);
  if ( v5 )
    Concurrency::details::_RefCounter::_Destroy(v5);
  v6 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 45);
  if ( v6 )
    Concurrency::details::_RefCounter::_Destroy(v6);
  v7 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 44);
  if ( v7 )
    Concurrency::details::_RefCounter::_Destroy(v7);
  v8 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 43);
  if ( v8 )
    Concurrency::details::_RefCounter::_Destroy(v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 41);
  v9 = *((_QWORD *)this + 37);
  if ( v9 )
  {
    *((_QWORD *)this + 37) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)this + 35);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 34);
  wistd::unique_ptr<TwinUI::Lighting::AssistantLightWNFListener,wistd::default_delete<TwinUI::Lighting::AssistantLightWNFListener>>::~unique_ptr<TwinUI::Lighting::AssistantLightWNFListener,wistd::default_delete<TwinUI::Lighting::AssistantLightWNFListener>>((_QWORD **)this + 31);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>(
    this,
    v10);
}
