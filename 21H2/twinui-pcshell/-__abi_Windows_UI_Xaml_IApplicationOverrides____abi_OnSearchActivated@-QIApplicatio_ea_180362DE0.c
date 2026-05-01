/*
 * XREFs of ?__abi_Windows_UI_Xaml_IApplicationOverrides____abi_OnSearchActivated@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPE$AAVSearchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x180362DE0
 * Callers:
 *     ?__abi_Windows_UI_Xaml_IApplicationOverrides____abi_OnSearchActivated@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WCI@E$AAAJPE$AAVSearchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x18016ACF0 (-__abi_Windows_UI_Xaml_IApplicationOverrides____abi_OnSearchActivated@-QIApplicationOverrides@Xa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1?$VectorViewIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Platform@@QEAA@XZ @ 0x1802D9CBC (--1-$VectorViewIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collec.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_IApplicationOverrides____abi_OnSearchActivated__QIApplicationOverrides_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAJPE_AAVSearchActivatedEventArgs_Activation_ApplicationModel_4__Z(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  if ( *(_BYTE *)(a1 + 240) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  v5 = 0LL;
  v3 = (***(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, __int64 *))(a1 + 56))(
         *(_QWORD *)(a1 + 56),
         &_uuidof__AUIApplicationOverrides_Xaml_UI_Windows__,
         &v5);
  if ( !v3 )
  {
    v6 = v5;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 72LL))(v5, a2);
    Platform::Collections::VectorViewIterator<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::~VectorViewIterator<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>(&v6);
  }
  return v3;
}
