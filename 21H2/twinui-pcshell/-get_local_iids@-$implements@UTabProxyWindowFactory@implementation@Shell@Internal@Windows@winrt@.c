/*
 * XREFs of ?get_local_iids@?$implements@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowFactoryInternal@345@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x18008EBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = 0;
  result = a2;
  *(_QWORD *)(a2 + 8) = 0LL;
  return result;
}
