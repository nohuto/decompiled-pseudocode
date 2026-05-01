/*
 * XREFs of ?__abi_IXamlSwitcherWindowInteractionEvents____abi_OnContainerNavigate@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAJI@Z @ 0x18038C670
 * Callers:
 *     ?__abi_IXamlSwitcherWindowInteractionEvents____abi_OnContainerNavigate@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAJI@Z @ 0x18016CFE0 (-__abi_IXamlSwitcherWindowInteractionEvents____abi_OnContainerNavigate@-QIXamlSwitcherWindowInte.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_IXamlSwitcherWindowInteractionEvents____abi_OnContainerNavigate__QIXamlSwitcherWindowInteractionEvents__XamlBaseViewController__UE_AAAJI_Z(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 128) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 96LL))(a1 + 16);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
