/*
 * XREFs of ?GetRuntimeClassName@?$PinManager_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManagerInterop@@Uimmersive_shell_component@6@@implementation@Shell@Internal@Windows@winrt@@UEBA?AUhstring@6@XZ @ 0x18013A420
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x180256AEC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

winrt::hstring *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop,winrt::immersive_shell_component>::GetRuntimeClassName(
        __int64 a1,
        winrt::hstring *a2)
{
  winrt::hstring::hstring(a2, L"Windows.Internal.Shell.PinManager");
  return a2;
}
