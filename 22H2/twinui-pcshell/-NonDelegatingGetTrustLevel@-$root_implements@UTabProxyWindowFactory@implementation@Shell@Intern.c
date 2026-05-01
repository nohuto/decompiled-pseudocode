/*
 * XREFs of ?NonDelegatingGetTrustLevel@?$root_implements@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowFactoryInternal@345@@impl@winrt@@IEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800EB72C
 * Callers:
 *     ?GetTrustLevel@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAW4TrustLevel@@@Z @ 0x1800EB420 (-GetTrustLevel@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAW4Trus.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::NonDelegatingGetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  if ( !a1 )
    a1 = 8LL;
  *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  return 0LL;
}
