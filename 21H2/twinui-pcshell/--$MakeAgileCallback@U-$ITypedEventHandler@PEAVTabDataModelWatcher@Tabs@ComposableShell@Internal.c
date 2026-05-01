/*
 * XREFs of ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabPropertyChangedEventArgs@2345@@Foundation@Windows@@V_lambda_7fa9ec76c559735b12dbf01bbe3e3c50_@@@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabPropertyChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@$$QEAV_lambda_7fa9ec76c559735b12dbf01bbe3e3c50_@@@Z @ 0x1803A8CEC
 * Callers:
 *     ?InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@4PEAUITabViewManager@@@Z @ 0x1803ACFBC (-InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIAp.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097A60 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabPropertyChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_7fa9ec76c559735b12dbf01bbe3e3c50_@@$0?0PEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelTabPropertyChangedEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelWatcher@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVTabDataModelTabPropertyChangedEventArgs@Tabs@ComposableShell@Internal@Windows@@PEAUITabDataModelTabPropertyChangedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@3@PEAUITabDataModelTabPropertyChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_7fa9ec76c559735b12dbf01bbe3e3c50_@@@Z @ 0x1803AA3CC (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs *>,_lambda_7fa9ec76c559735b12dbf01bbe3e3c50_>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0LL;
  v5 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs *,Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs *>>::*)(Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_7fa9ec76c559735b12dbf01bbe3e3c50_,-1,Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_7fa9ec76c559735b12dbf01bbe3e3c50_,-1,Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs *>(
           v5,
           a2);
  *a1 = v4;
  if ( !v4 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      78LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v6);
    __debugbreak();
  }
  return a1;
}
