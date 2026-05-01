/*
 * XREFs of ?__abi_WindowsInternal_ComposableShell_Desktop_IDesktopAppHost____abi_OnSwitchItemInvoked@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAJPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@Z @ 0x18035E700
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Desktop_IDesktopAppHost____abi_OnSwitchItemInvoked@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@W7E$AAAJPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@Z @ 0x18016A2C0 (-__abi_WindowsInternal_ComposableShell_Desktop_IDesktopAppHost____abi_OnSwitchItemInvoked@-QIDes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_WindowsInternal_ComposableShell_Desktop_IDesktopAppHost____abi_OnSwitchItemInvoked__QIDesktopAppHost_Desktop_ComposableShell_WindowsInternal__XamlExplorerHost__UE_AAAJPE_AAUISwitchItem_Multitasking_3Internal_Windows___Z(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 128) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 72LL))(a1 + 8);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
