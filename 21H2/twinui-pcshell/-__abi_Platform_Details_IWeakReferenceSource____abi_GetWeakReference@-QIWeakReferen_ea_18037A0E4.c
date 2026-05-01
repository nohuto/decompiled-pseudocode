/*
 * XREFs of ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x18037A0E4
 * Callers:
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WCA@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x18016BC30 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_18016BC30.c)
 * Callees:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x180372194 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@UE$AAAPE$AA.c)
 */

__int64 __fastcall ___abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference__QIWeakReferenceSource_Details_Platform__SwitchItemDataViewImpl_Multitasking_ComposableShell_Internal_Windows__UE_AAAJPEAPE_AAUIWeakReference_23__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *(_BYTE *)(a1 + 152) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a2 = 0LL;
    *a2 = _GetWeakReference__QIWeakReferenceSource_Details_Platform__XamlAltTabViewController__UE_AAAPE_AAUIWeakReference_23_XZ(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
