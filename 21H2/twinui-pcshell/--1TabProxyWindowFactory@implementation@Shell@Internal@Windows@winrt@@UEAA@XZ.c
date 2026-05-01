/*
 * XREFs of ??1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800F0738
 * Callers:
 *     ??_E?$heap_implements@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800E8A4C (--_E-$heap_implements@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@impl@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x1800AF0F8 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1801A8F6C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180282514 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18028647C (--1-$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::~TabProxyWindowFactory(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *this,
        void *a2)
{
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,std::tuple<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>>'};
  *((_QWORD *)this + 1) = &winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>'};
  wil::details::SetEvent(*((wil::details **)this + 5), a2);
  if ( *((_QWORD *)this + 10) )
    winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)this + 10);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)this + 9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 7);
  wil::com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>::~com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>((char *)this + 48);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((char *)this + 40);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((char *)this + 32);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((char *)this + 24);
  _InterlockedExchangeAdd((volatile signed __int32 *)this + 4, 0xFFFFFFFF);
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 0xFFFFFFFF);
}
