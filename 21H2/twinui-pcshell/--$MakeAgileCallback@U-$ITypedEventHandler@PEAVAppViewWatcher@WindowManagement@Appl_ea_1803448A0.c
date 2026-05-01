/*
 * XREFs of ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@2345@@Foundation@Windows@@AEBQEAVWindowManagerBridge@@P84@EAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@6783@@Z@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVWindowManagerBridge@@$$QEAP84@EAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@6789@@Z@Z @ 0x1803448A0
 * Callers:
 *     _lambda_ea8b004af850712ada260145121a0cb1_::operator() @ 0x180346C90 (_lambda_ea8b004af850712ada260145121a0cb1_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097A60 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher____Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs___Windows::Internal::ApplicationModel::WindowManagement::IAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs_____::_)(Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs____Microsoft::WRL::FtmBase___lambda_f1ab583bd6d0bf74ebf57633ce54d2bd___1_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs____Microsoft::WRL::FtmBase___lambda_f1ab583bd6d0bf74ebf57633ce54d2bd___1_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs___ @ 0x180345C4C (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180345C4C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *,Windows::Internal::ApplicationModel::WindowManagement::AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs *>,WindowManagerBridge * const &,long (WindowManagerBridge::*)(Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs *)>(
        __int64 *a1,
        __int64 *a2,
        __int128 *a3)
{
  __int64 v4; // rbx
  void *v5; // rax
  const char *v6; // r9
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = *a2;
  v9 = *a3;
  v4 = 0LL;
  v5 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher____Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs___Windows::Internal::ApplicationModel::WindowManagement::IAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs_____::___Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs____Microsoft::WRL::FtmBase___lambda_f1ab583bd6d0bf74ebf57633ce54d2bd___1_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::AppViewApplyWindowingEnvironmentSettingsRequestedEventArgs____Microsoft::WRL::FtmBase___lambda_f1ab583bd6d0bf74ebf57633ce54d2bd___1_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs___(
           v5,
           &v8);
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
