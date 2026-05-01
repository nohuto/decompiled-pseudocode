/*
 * XREFs of ?CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJ_KPEAPEAUITabProxyWindowInternal@345@@Z @ 0x1800F08C0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x1800AF0D8 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?query_interface@?$root_implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800EF618 (-query_interface@-$root_implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?CreateTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@AEBUWindowTabDataModel@3UI@456@AEBUWindowTabView@39456@_K@Z @ 0x1800F079C (-CreateTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAA-AU.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::CreateTabProxyWindowInternal(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *this,
        __int64 a2,
        struct Windows::Internal::Shell::ITabProxyWindowInternal **a3)
{
  const char *v4; // r9
  struct Windows::Internal::Shell::ITabProxyWindowInternal *v5; // rbx
  __int64 interface; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v9[0] = 0LL;
  v8 = 0LL;
  try
  {
    winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::CreateTabProxyWindow(
      (__int64)this,
      &v11,
      (struct winrt::Windows::Internal::UI::Shell::WindowTabDataModel *)&v8,
      (struct winrt::Windows::Internal::UI::Shell::WindowTabView *)v9,
      a2);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v8);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v9);
    if ( v11 )
    {
      v9[0] = 0LL;
      interface = (unsigned int)winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::query_interface(
                                  v11 + 8,
                                  &winrt::impl::guid_storage<Windows::Internal::Shell::ITabProxyWindowInternal>::value,
                                  v9);
      winrt::check_hresult(interface);
      v5 = (struct Windows::Internal::Shell::ITabProxyWindowInternal *)v9[0];
    }
    else
    {
      v5 = 0LL;
    }
    v9[0] = (__int64)v5;
    if ( v5 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ITabProxyWindowInternal *))(*(_QWORD *)v5 + 8LL))(v5);
    *a3 = v5;
    if ( v5 )
      winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(v9);
    if ( v11 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x81,
                           (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
                           v4);
  }
  return result;
}
