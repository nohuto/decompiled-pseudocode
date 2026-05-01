/*
 * XREFs of ?__abi_GetRuntimeClassName@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x180379E1C
 * Callers:
 *     ?__abi_GetRuntimeClassName@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x18016BB10 (-__abi_GetRuntimeClassName@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsI.c)
 *     ?__abi_GetRuntimeClassName@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x18016BB20 (-__abi_GetRuntimeClassName@ItemInvokedEventHandler@Switcher@Experiences@ComposableS_ea_18016BB20.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.ItemInvokedEventHandler",
           0x4Cu,
           a2);
}
