/*
 * XREFs of ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowChangedEventArgs@2345@@Foundation@Windows@@AEBQEAVWindowManagerBridge@@P84@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIWindowChangedEventArgs@6783@@Z@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVWindowManagerBridge@@$$QEAP84@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowChangedEventArgs@6789@@Z@Z @ 0x180344CB0
 * Callers:
 *     _lambda_04d74f0b1867aa1b237282343d8f99ac_::operator() @ 0x180346088 (_lambda_04d74f0b1867aa1b237282343d8f99ac_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097A40 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher___Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher____Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs___Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs_____::_)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher___Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher___Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs____Microsoft::WRL::FtmBase___lambda_8fa6991b191c0e4b65e539d2639c91cd___1_Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher___Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher___Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs____Microsoft::WRL::FtmBase___lambda_8fa6991b191c0e4b65e539d2639c91cd___1_Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher___Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs___ @ 0x180345FBC (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180345FBC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs *>,WindowManagerBridge * const &,long (WindowManagerBridge::*)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs *)>(
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
    v4 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher___Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher____Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs___Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs_____::___Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher___Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher___Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs____Microsoft::WRL::FtmBase___lambda_8fa6991b191c0e4b65e539d2639c91cd___1_Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher___Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher___Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs____Microsoft::WRL::FtmBase___lambda_8fa6991b191c0e4b65e539d2639c91cd___1_Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher___Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs___(
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
