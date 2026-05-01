/*
 * XREFs of ??1SearchAppDesktopExperienceView@@UEAA@XZ @ 0x1802761E4
 * Callers:
 *     ??_GSearchAppDesktopExperienceView@@UEAAPEAXI@Z @ 0x1802764F0 (--_GSearchAppDesktopExperienceView@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA@XZ @ 0x1800BF1D0 (--1-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA@XZ.c)
 *     ?UnhookKeyboard@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800C0BEC (-UnhookKeyboard@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49219968@@@details@wil@@QEAA_NXZ @ 0x1800C0CAC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49219968@@@details@wil@@QEAA_NXZ.c)
 *     ??1?$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ @ 0x18011B310 (--1-$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x180251B04 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x180278938 (-reset@-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Co.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1804BDB5C (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 */

void __fastcall SearchAppDesktopExperienceView::~SearchAppDesktopExperienceView(SearchAppDesktopExperienceView *this)
{
  SearchAppDesktopExperienceView *v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  HWND v5; // rcx
  HWND v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  TwinUI::Lighting::AssistantLightManager *v10; // rsi
  volatile int *v11; // rdx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &SearchAppDesktopExperienceView::`vftable'{for `Windows::Internal::Shell::Experience::IShellExperiencePositioner'};
  *((_QWORD *)this + 1) = &SearchAppDesktopExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,TwinUI::Cortana::ISearchAppDesktopNotifications,TwinUI::Cortana::ISearchAppExperienceView,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>'};
  *((_QWORD *)this + 2) = &SearchAppDesktopExperienceView::`vftable'{for `TwinUI::Cortana::ISearchAppDesktopNotifications'};
  *((_QWORD *)this + 3) = &SearchAppDesktopExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::ISearchAppExperienceView,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>'};
  *((_QWORD *)this + 4) = &SearchAppDesktopExperienceView::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 5) = &SearchAppDesktopExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>'};
  *((_QWORD *)this + 6) = &SearchAppDesktopExperienceView::`vftable'{for `IInputHostLayoutChanges'};
  *((_QWORD *)this + 7) = &SearchAppDesktopExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::ICortanaWNFNotification>'};
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_49219968>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_49219968>::GetImpl'::`2'::impl) )
  {
    v3 = SearchAppDesktopExperienceView::UnhookKeyboard(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x189,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v3);
  }
  std::pair<winrt::hstring const,bool>::~pair<winrt::hstring const,bool>((HSTRING *)this + 42);
  tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::~tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>((void **)this + 41);
  std::pair<winrt::hstring const,bool>::~pair<winrt::hstring const,bool>((HSTRING *)this + 40);
  std::_Func_class<void,>::~_Func_class<void,>((__int64)this + 248, v4);
  v5 = (HWND)*((_QWORD *)this + 30);
  if ( v5 )
    DestroyWindow(v5);
  v6 = (HWND)*((_QWORD *)this + 29);
  if ( v6 )
    DestroyWindow(v6);
  v7 = *((_QWORD *)this + 19);
  if ( v7 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 14);
  if ( v8 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 13);
  v9 = (_QWORD *)*((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = 0LL;
  if ( v9 )
  {
    v10 = (TwinUI::Lighting::AssistantLightManager *)v9[1];
    v9[1] = 0LL;
    if ( v10 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v10);
      operator delete(v10, (const struct std::nothrow_t *)0x70);
    }
    operator delete(v9, (const struct std::nothrow_t *)0x10);
  }
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    (char *)this + 88,
    0LL);
  v12 = *((_QWORD *)this + 10);
  if ( v12 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ISearchAppDesktopNotifications,TwinUI::Cortana::ISearchAppExperienceView,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ISearchAppDesktopNotifications,TwinUI::Cortana::ISearchAppExperienceView,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>(
    (__int64)this,
    v11);
}
