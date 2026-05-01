/*
 * XREFs of ??1?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@UEAA@XZ @ 0x180135C20
 * Callers:
 *     ??_G?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@UEAAPEAXI@Z @ 0x1801370D4 (--_G-$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@win.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>(
        winrt::Windows::Internal::Shell::implementation::PinManager *this)
{
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::PinManager,std::tuple<winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop>>'};
  *((_QWORD *)this + 2) = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 3) = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 4) = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 6) = &winrt::impl::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>::`vftable'{for `winrt::immersive_shell_component'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  winrt::Windows::Internal::Shell::implementation::PinManager::~PinManager(this);
}
