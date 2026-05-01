/*
 * XREFs of ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@3@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x1803607D0
 * Callers:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@3@WDI@E$AAAPE$AAUIWeakReference@23@XZ @ 0x18016A190 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@-$Array@PE$AAUISwitchItemContextMenuM.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@3@WHA@E$AAAPE$AAUIWeakReference@23@XZ @ 0x18016A1A0 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@2Collections@3@WCA@E$AAAPE$AAUIWeakReference@23@XZ @ 0x18016AE90 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@-$IteratorForVectorView@PE$AAUISwitch.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@3@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180361D34 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_180361D34.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@2Collections@3@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180379CC0 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_180379CC0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035BE6C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall _GetWeakReference__QIWeakReferenceSource_Details_Platform____Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_3_UE_AAAPE_AAUIWeakReference_23_XZ(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 88));
  v2 = __abi_winrt_ptr_ctor(v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
