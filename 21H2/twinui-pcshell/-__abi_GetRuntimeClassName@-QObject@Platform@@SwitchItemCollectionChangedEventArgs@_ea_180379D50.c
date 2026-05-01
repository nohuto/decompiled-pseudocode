/*
 * XREFs of ?__abi_GetRuntimeClassName@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x180379D50
 * Callers:
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x18016B9F0 (-__abi_GetRuntimeClassName@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@.c)
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x18016BA00 (-__abi_GetRuntimeClassName@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@_ea_18016BA00.c)
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@WCA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x18016BA10 (-__abi_GetRuntimeClassName@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@_ea_18016BA10.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ___abi_GetRuntimeClassName__QObject_Platform__SwitchItemCollectionChangedEventArgs_Multitasking_ComposableShell_Internal_Windows__UE_AAAJPEAPEAUHSTRING_____Z(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"Windows.Internal.ComposableShell.Multitasking.SwitchItemCollectionChangedEventArgs",
           0x52u,
           a2);
}
