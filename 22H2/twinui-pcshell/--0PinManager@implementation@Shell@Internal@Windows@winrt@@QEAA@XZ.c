/*
 * XREFs of ??0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18013564C
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@@impl@winrt@@QEAA@XZ @ 0x1801351E4 (--0-$heap_implements@V-$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@w.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800869A0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     std::make_shared__anonymous_namespace_::PinConsentPromptManager_ @ 0x18013423C (std--make_shared__anonymous_namespace_--PinConsentPromptManager_.c)
 *     ??0PinHistory@@QEAA@XZ @ 0x180135530 (--0PinHistory@@QEAA@XZ.c)
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18013DAEC (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1804D0EA4 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x1804D1208 (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
winrt::Windows::Internal::Shell::implementation::PinManager *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager::PinManager(
        winrt::Windows::Internal::Shell::implementation::PinManager *this)
{
  _QWORD *v2; // rdi
  const struct _tlgProvider_t *v3; // rax
  std::_Ref_count_base *v4; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v6[2] = this;
  *((_QWORD *)this + 1) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::IPinManager>::`vftable';
  *(_QWORD *)this = &CApplicationViewBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationView2,IApplicationViewBase,IApplicationViewWithEnterpriseId>'};
  v2 = (_QWORD *)((char *)this + 16);
  winrt::immersive_shell_component::immersive_shell_component((winrt::Windows::Internal::Shell::implementation::PinManager *)((char *)this + 16));
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::PinManager,std::tuple<winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop>>'};
  *v2 = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 3) = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 4) = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 6) = &winrt::Windows::Internal::Shell::implementation::PinManager::`vftable'{for `winrt::immersive_shell_component'};
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  PinHistory::PinHistory((winrt::Windows::Internal::Shell::implementation::PinManager *)((char *)this + 128));
  v3 = PinManagerTelemetry::Provider();
  if ( *(_DWORD *)v3 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v3,
      byte_1805A1C38,
      0LL);
  winrt::immersive_shell_component::register_service_information<_GUID const>(
    v2,
    &GUID_a5c8d635_b4ed_452b_8109_9501781096d1);
  std::make_shared__anonymous_namespace_::PinConsentPromptManager_((__int64)v6);
  *((_QWORD *)this + 13) = v6[0];
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = v6[1];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return this;
}
