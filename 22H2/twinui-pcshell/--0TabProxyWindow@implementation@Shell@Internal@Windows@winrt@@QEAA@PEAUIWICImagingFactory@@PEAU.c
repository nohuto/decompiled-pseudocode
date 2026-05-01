/*
 * XREFs of ??0TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA@PEAUIWICImagingFactory@@PEAUITaskbarList4@@AEBUITileStore@Tiles@345@AEBUWindowTabDataModel@2UI@345@AEBUWindowTabView@2UI@345@_K@Z @ 0x1800F4170
 * Callers:
 *     ??$make_self@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@PEAUIWICImagingFactory@@PEAUITaskbarList4@@AEAUITileStore@Tiles@456@AEBUWindowTabDataModel@3UI@456@AEBUWindowTabView@3UI@456@AEA_K@winrt@@YA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@0@$$QEAPEAUIWICImagingFactory@@$$QEAPEAUITaskbarList4@@AEAUITileStore@Tiles@Internal@Windows@0@AEBUWindowTabDataModel@Shell@UI@670@AEBUWindowTabView@9UI@670@AEA_K@Z @ 0x1800F04F8 (--$make_self@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@PEAUIWICImagingFactory.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x18008171C (--0-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z.c)
 *     ??$?0UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUWindowTabView@2UI@345@AEBUWindowTabViewPropertyChangedEventArgs@27345@@Z@?$TypedEventHandler@UWindowTabView@Shell@UI@Internal@Windows@winrt@@UWindowTabViewPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAUTabProxyWindow@implementation@Shell@Internal@23@P8456723@EAAXAEBUWindowTabView@6UI@723@AEBUWindowTabViewPropertyChangedEventArgs@69723@@Z@Z @ 0x1800F3A5C (--$-0UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUWindowTabView.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1804BA878 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

// Hidden C++ exception states: #wind=29
winrt::Windows::Internal::Shell::implementation::TabProxyWindow *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TabProxyWindow(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        struct IWICImagingFactory *a2,
        struct ITaskbarList4 *a3,
        const struct winrt::Windows::Internal::Tiles::ITileStore *a4,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabDataModel *a5,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabView *a6,
        unsigned __int64 a7)
{
  _QWORD *v11; // rax
  __m128d v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)this = &Microsoft::WRL::ChainInterfaces<ITabletModePositionerOperation,IAppLayoutOperationBuilder,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *(_QWORD *)this = &Microsoft::WRL::ChainInterfaces<ITabletModePositionerOperation,IAppLayoutOperationBuilder,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *(_QWORD *)this = &Microsoft::WRL::ChainInterfaces<ITabletModePositionerOperation,IAppLayoutOperationBuilder,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_DWORD *)this + 4) = 1;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_QWORD *)this = &winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,std::tuple<Windows::Internal::Shell::ITabProxyWindowInternal>>'};
  *((_QWORD *)this + 1) = &winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>'};
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,std::tuple<Windows::Internal::Shell::ITabProxyWindowInternal>>'};
  *((_QWORD *)this + 1) = &winrt::Windows::Internal::Shell::implementation::TabProxyWindow::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>::`vftable';
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(
    (__int64 *)this + 5,
    (__int64 *)a5);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(
    (__int64 *)this + 6,
    (__int64 *)a6);
  *((_QWORD *)this + 7) = a7;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IWICImagingFactory *))a2->lpVtbl->AddRef)(a2);
  *((_QWORD *)this + 14) = a3;
  if ( a3 )
    ((void (__fastcall *)(struct ITaskbarList4 *))a3->lpVtbl->AddRef)(a3);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(
    (__int64 *)this + 15,
    (__int64 *)a4);
  *((_QWORD *)this + 16) = 0LL;
  *((_BYTE *)this + 136) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_WORD *)this + 92) = 1;
  if ( *((_QWORD *)this + 6) )
  {
    *(_QWORD *)&v13.m128d_f64[0] = winrt::Windows::Internal::Shell::implementation::TabProxyWindow::OnTabChanged;
    LODWORD(v13.m128d_f64[1]) = 0;
    v11 = winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabView,winrt::Windows::Internal::UI::Shell::WindowTabViewPropertyChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabView,winrt::Windows::Internal::UI::Shell::WindowTabViewPropertyChangedEventArgs>(
            &v14,
            (__int64)this,
            &v13);
    winrt::Windows::Foundation::IUnknown::operator=((char *)this + 144, v11);
    if ( v14 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
  }
  return this;
}
