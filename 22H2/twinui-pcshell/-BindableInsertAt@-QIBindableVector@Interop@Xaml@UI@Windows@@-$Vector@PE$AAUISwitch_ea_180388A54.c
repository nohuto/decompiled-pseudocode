/*
 * XREFs of ?BindableInsertAt@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAAXIPE$AAVObject@8@@Z @ 0x180388A54
 * Callers:
 *     ?BindableInsertAt@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@GCI@E$AAAXIPE$AAVObject@8@@Z @ 0x18016C730 (-BindableInsertAt@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchItemContextMe.c)
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_InsertAt@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJIPE$AAVObject@8@@Z @ 0x18038DB00 (-__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_InsertAt@-QIBindableVector@In_ea_18038DB00.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18035BE00 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?InsertAt@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXIPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18038AB90 (-InsertAt@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Com_ea_18038AB90.c)
 */

__int64 __fastcall _BindableInsertAt__QIBindableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__EE_AAAXIPE_AAVObject_8__Z(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, __int64, __int64 *))
{
  __int64 v4; // rsi
  __int64 result; // rax

  v4 = __abi_winrt_cast_to(
         0,
         a3,
         (__int64)&_uuidof__AUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__);
  result = _InsertAt__Q__IVector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAXIPE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Z(a1);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return result;
}
