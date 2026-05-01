/*
 * XREFs of ?BindableCurrent@?QCurrent@IBindableIterator@Interop@Xaml@UI@Windows@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@EE$AAAPE$AAVObject@Platform@@XZ @ 0x18036F19C
 * Callers:
 *     ?BindableCurrent@?QCurrent@IBindableIterator@Interop@Xaml@UI@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@GBA@E$AAAPE$AAVObject@Platform@@XZ @ 0x18016AD50 (-BindableCurrent@-QCurrent@IBindableIterator@Interop@Xaml@UI@Windows@@-$IteratorForVectorView@PE.c)
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_get_Current@?QIBindableIterator@Interop@Xaml@UI@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@UE$AAAJPEAPE$AAVObject@9@@Z @ 0x18037D140 (-__abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_get_Current@-QIBindableIter_ea_18037D140.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035BE6C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _BindableCurrent__QCurrent_IBindableIterator_Interop_Xaml_UI_Windows____IteratorForVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Details_Collections_Platform__EE_AAAPE_AAVObject_Platform__XZ(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  v2 = __abi_winrt_ptr_ctor(v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
