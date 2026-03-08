/*
 * XREFs of ?OnHotKeyDetected@HotKeyCallback@@UEAAJIII_K0@Z @ 0x140007010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140007200 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ @ 0x14000D5D8 (-RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ.c)
 */

__int64 __fastcall HotKeyCallback::OnHotKeyDetected(HotKeyCallback *this, int a2, int a3, int a4)
{
  if ( !a2 && a3 == 14 && a4 == 66 )
    BlackScreenDiagnostics::RunDiagnosticsFromHotkey(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
  return 0LL;
}
