/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_IndexOf@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@PEAIPEA_N@Z @ 0x18037C1C0
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_IndexOf@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@W7E$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@PEAIPEA_N@Z @ 0x18016C270 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItem@Multitasking@Comp_ea_18016C270.c)
 * Callees:
 *     ??$VectorIndexOf@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@@Details@Collections@Platform@@YA_NAEBV?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAI@Z @ 0x1803686EC (--$VectorIndexOf@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections___IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows______abi_IndexOf__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAJPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_4_PEAIPEA_N_Z(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        bool *a4)
{
  if ( *(_BYTE *)(a1 + 168) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a4 = 0;
    *a3 = 0;
    *a4 = Platform::Collections::Details::VectorIndexOf<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>>(
            *(__int64 **)(a1 + 96),
            a2,
            a3);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
