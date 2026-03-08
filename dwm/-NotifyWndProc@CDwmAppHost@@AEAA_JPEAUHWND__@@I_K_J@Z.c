/*
 * XREFs of ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1400027D4
 * Callers:
 *     ?s_NotifyWndProc@CDwmAppHost@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1400027B0 (-s_NotifyWndProc@CDwmAppHost@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x1400025CC (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z @ 0x140002894 (-OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z.c)
 *     ?OnClose@CDwmAppHost@@AEAAXXZ @ 0x140003224 (-OnClose@CDwmAppHost@@AEAAXXZ.c)
 *     ?OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z @ 0x14000AC9C (-OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z.c)
 *     ?RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ @ 0x14000D5D8 (-RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ.c)
 */

LRESULT __fastcall CDwmAppHost::NotifyWndProc(CDwmAppHost *this, HWND a2, void *a3, unsigned __int64 a4, LPARAM lParam)
{
  __int64 v5; // rbx
  unsigned int v8; // edx
  __int64 v9; // r8
  bool v10; // r9

  v5 = 0LL;
  switch ( (_DWORD)a3 )
  {
    case 2:
      PostQuitMessage(0);
      return v5;
    case 0x10:
      CDwmAppHost::OnClose(this);
      return v5;
    case 0x15:
      v8 = 8;
      goto LABEL_13;
    case 0x1A:
      CDwmAppHost::OnSettingChange(this, a4, lParam);
      return v5;
  }
  if ( (_DWORD)a3 != 786 )
  {
    if ( (_DWORD)a3 != 794 )
    {
      if ( (_DWORD)a3 == 1026 )
      {
        v10 = 0;
        v9 = 0LL;
      }
      else
      {
        if ( (_DWORD)a3 != 1027 )
          return DefWindowProcW(a2, (UINT)a3, a4, lParam);
        v9 = lParam;
        v10 = 1;
      }
      CDwmAppHost::OnReportEvent(this, a4, v9, v10);
      return v5;
    }
    v8 = 4;
LABEL_13:
    CDwmAppHost::LpcNotifySettingsChange(this, v8, a3);
    return v5;
  }
  if ( !a4 )
    BlackScreenDiagnostics::RunDiagnosticsFromHotkey(this);
  return v5;
}
