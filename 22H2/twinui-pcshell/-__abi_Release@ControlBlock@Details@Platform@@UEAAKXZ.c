/*
 * XREFs of ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x18035E380
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHost@@UE$AAAKXZ @ 0x18035E320 (-__abi_Release@-QObject@Platform@@XamlExplorerHost@@UE$AAAKXZ.c)
 *     ?__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x18035E3D0 (-__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ.c)
 *     ?__abi_dtor@__abi_FTMWeakRefData@@QEAAXXZ @ 0x18035E5B8 (-__abi_dtor@__abi_FTMWeakRefData@@QEAAXXZ.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAKXZ @ 0x180362530 (-__abi_Release@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAK.c)
 *     ?__abi_Release@?QObject@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@2@UE$AAAKXZ @ 0x1803625B0 (-__abi_Release@-QObject@Platform@@-$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@D_ea_1803625B0.c)
 *     ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAKXZ @ 0x180362620 (-__abi_Release@-QObject@Platform@@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@_ea_180362620.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x1803626A0 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@U.c)
 *     ?__abi_Release@?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@UE$AAAKXZ @ 0x180362720 (-__abi_Release@-$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experie.c)
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@UE$AAAKXZ @ 0x18037B490 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@Multita_ea_18037B490.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@UE$AAAKXZ @ 0x18037B510 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_18037B510.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@UE$AAAKXZ @ 0x18037B5B0 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata_ea_18037B5B0.c)
 *     ?__abi_Release@?QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAKXZ @ 0x18037B630 (-__abi_Release@-QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShel_ea_18037B630.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAKXZ @ 0x18037B6A0 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShe_ea_18037B6A0.c)
 *     ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@UE$AAAKXZ @ 0x18037B700 (-__abi_Release@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@UE$AAAKXZ @ 0x18038CE50 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ @ 0x1803912C0 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@UE$AAAKXZ @ 0x180392300 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ @ 0x180398630 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Platform::Details::ControlBlock::__abi_Release(Platform::Details::ControlBlock *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    if ( *((_BYTE *)this + 25) )
      Platform::Details::Heap::AlignedFree(this);
    else
      Platform::Details::Heap::Free(this);
  }
  return v1;
}
