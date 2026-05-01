/*
 * XREFs of ??0VectorChangedEventArgs@Details@Collections@Platform@@QE$AAA@W4CollectionChange@2Foundation@Windows@@I@Z @ 0x18036B718
 * Callers:
 *     ?Notify@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x18037499C (-Notify@-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE.c)
 *     ?Notify@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x18038B010 (-Notify@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x18035C898 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 */

__int64 __fastcall Platform::Collections::Details::VectorChangedEventArgs::VectorChangedEventArgs(
        __int64 a1,
        int a2,
        int a3)
{
  __int64 result; // rax

  Platform::Object::Object(a1 + 16);
  *(_QWORD *)a1 = &Platform::Collections::Details::VectorChangedEventArgs::`vftable'{for `Windows::Foundation::Collections::IVectorChangedEventArgs'};
  *(_QWORD *)(a1 + 8) = &Platform::Collections::Details::VectorChangedEventArgs::`vftable'{for `Platform::Collections::Details::__IVectorChangedEventArgsPublicNonVirtuals'};
  *(_QWORD *)(a1 + 16) = &Platform::Collections::Details::VectorChangedEventArgs::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 24) = &Platform::Collections::Details::VectorChangedEventArgs::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 32) = &Platform::Collections::Details::VectorChangedEventArgs::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 48);
  result = a1;
  *(_DWORD *)(a1 + 44) = a3;
  *(_DWORD *)(a1 + 40) = a2;
  return result;
}
