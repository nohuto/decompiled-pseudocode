/*
 * XREFs of ?GetMany@?Q?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@2Platform@@UE$AAAIP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@7@@Z @ 0x18038A310
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_GetMany@?Q?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@2Platform@@UE$AAAJIPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x18038CFA0 (-__abi_Windows_Foundation_Collections_-$IIterator@PE$AAUISwitchItemContextMenuMetad_ea_18038CFA0.c)
 * Callees:
 *     ?ValidateCounter@Details@Collections@Platform@@YAXAEBV?$shared_ptr@I@std@@I@Z @ 0x180378280 (-ValidateCounter@Details@Collections@Platform@@YAXAEBV-$shared_ptr@I@std@@I@Z.c)
 *     ??$VectorGetMany@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@YAIAEBV?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@IP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@@Z @ 0x180387128 (--$VectorGetMany@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 */

__int64 __fastcall _GetMany__Q__IIterator_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____IteratorForVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Details_2Platform__UE_AAAIP_01E_AAV__WriteOnlyArray_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_7__Z(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  Platform::Collections::Details::ValidateCounter((_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 80));
  result = Platform::Collections::Details::VectorGetMany<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>(
             *(_QWORD **)(a1 + 64),
             *(_DWORD *)(a1 + 84),
             a2);
  *(_DWORD *)(a1 + 84) += result;
  return result;
}
