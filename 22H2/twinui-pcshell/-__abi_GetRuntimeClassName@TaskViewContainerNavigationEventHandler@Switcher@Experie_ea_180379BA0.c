/*
 * XREFs of ?__abi_GetRuntimeClassName@TaskViewContainerNavigationEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x180379BA0
 * Callers:
 *     ?__abi_GetRuntimeClassName@TaskViewContainerNavigationEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x18016B9E0 (-__abi_GetRuntimeClassName@TaskViewContainerNavigationEventHandler@Switcher@Experiences@Composab.c)
 *     ?__abi_GetRuntimeClassName@TaskViewContainerNavigationEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x18016B9F0 (-__abi_GetRuntimeClassName@TaskViewContainerNavigationEventHandler@Switcher@Experie_ea_18016B9F0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewContainerNavigationEventHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.TaskViewContainerNavigationEventHandler",
           0x5Cu,
           a2);
}
