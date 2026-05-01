/*
 * XREFs of ?Cloak@XamlExplorerHostWindow@@AEAAXXZ @ 0x18036503C
 * Callers:
 *     ?AsyncDestroy@XamlExplorerHostWindow@@UEAAJXZ @ 0x180364CA0 (-AsyncDestroy@XamlExplorerHostWindow@@UEAAJXZ.c)
 *     ?ChangeVisibility@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x180364DF0 (-ChangeVisibility@XamlExplorerHostWindow@@AEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XamlExplorerHostWindow::Cloak(XamlExplorerHostWindow *this)
{
  HWND v1; // rax
  int pvAttribute; // [rsp+30h] [rbp+8h] BYREF

  v1 = (HWND)(*(__int64 (__fastcall **)(XamlExplorerHostWindow *))(*(_QWORD *)this + 40LL))(this);
  pvAttribute = 1;
  DwmSetWindowAttribute(v1, 0xDu, &pvAttribute, 4u);
}
