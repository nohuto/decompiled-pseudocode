__int64 __fastcall HotKeyCallback::OnHotKeyDetected(HotKeyCallback *this, int a2, int a3, int a4)
{
  if ( !a2 && a3 == 14 && a4 == 66 )
    BlackScreenDiagnostics::RunDiagnosticsFromHotkey(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
  return 0LL;
}
