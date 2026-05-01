/*
 * XREFs of ?OnToggleTabbedBandFocus@TabShellHotKeyHandler@@AEAAJXZ @ 0x180302738
 * Callers:
 *     ?OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z @ 0x1803020C0 (-OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabShellHotKeyHandler::OnToggleTabbedBandFocus(TabShellHotKeyHandler *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 72LL))(*((_QWORD *)this + 8));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x112,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
