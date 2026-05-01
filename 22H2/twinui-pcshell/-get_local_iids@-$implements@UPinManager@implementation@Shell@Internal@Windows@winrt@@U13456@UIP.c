/*
 * XREFs of ?get_local_iids@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x180145740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop,winrt::immersive_shell_component>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::guid_storage<winrt::Windows::Internal::Shell::IPinManager>::value;
  return a2;
}
