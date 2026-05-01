/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIWindowingEnvironmentSettingsInternal@@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801B6D7C
 * Callers:
 *     ??_EViewSizePreferencesChangedEventArgsImpl@@UEAAPEAXI@Z @ 0x1800C8B60 (--_EViewSizePreferencesChangedEventArgsImpl@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801B83D0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIClientWindowReadyForPresentationCha.c)
 *     ??_G?$SimpleVectorIterator@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x1801B8530 (--_G-$SimpleVectorIterator@IV-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Founda.c)
 *     ??_GChainLinkEventArgs@Chaining@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x1801EA0F0 (--_GChainLinkEventArgs@Chaining@Shell@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_GCJumpViewExperienceEventArgs@@UEAAPEAXI@Z @ 0x180246350 (--_GCJumpViewExperienceEventArgs@@UEAAPEAXI@Z.c)
 *     ??1?$EventInvocationContext@$00@details@wil@@UEAA@XZ @ 0x1802AEB74 (--1-$EventInvocationContext@$00@details@wil@@UEAA@XZ.c)
 *     ??_E?$EventInvocationContextProvider@$00@details@wil@@UEAAPEAXI@Z @ 0x1802AF200 (--_E-$EventInvocationContextProvider@$00@details@wil@@UEAAPEAXI@Z.c)
 *     ??_ETabAppPolicySettings@@UEAAPEAXI@Z @ 0x1802D2490 (--_ETabAppPolicySettings@@UEAAPEAXI@Z.c)
 *     ??_GViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z @ 0x1802DB470 (--_GViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_ETabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z @ 0x1802F9930 (--_ETabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_ETabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z @ 0x1802F99B0 (--_ETabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_ETabWindowSnappedWithOthersEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z @ 0x18030A720 (--_ETabWindowSnappedWithOthersEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_GWindowingEnvironmentSettings@@UEAAPEAXI@Z @ 0x180322230 (--_GWindowingEnvironmentSettings@@UEAAPEAXI@Z.c)
 *     ??_GVirtualDesktopCollectionChangedEventArgs@@UEAAPEAXI@Z @ 0x1803E3D50 (--_GVirtualDesktopCollectionChangedEventArgs@@UEAAPEAXI@Z.c)
 *     ??_GTrayInfoTipAppInfo@SystemTray@@EEAAPEAXI@Z @ 0x1803E9580 (--_GTrayInfoTipAppInfo@SystemTray@@EEAAPEAXI@Z.c)
 *     ??_GStateChangedEventArgsImpl@@UEAAPEAXI@Z @ 0x1804C3570 (--_GStateChangedEventArgsImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007A3F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::ChainInterfaces<IWindowingEnvironmentSettingsInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::ChainInterfaces<IWindowingEnvironmentSettingsInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
      2 * v3,
      a2);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 40));
}
