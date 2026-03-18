/*
 * XREFs of ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1400014E4
 * Callers:
 *     ?s_NotifyWndProc@CDwmAppHost@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1400014C0 (-s_NotifyWndProc@CDwmAppHost@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x1400012DC (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?OnClose@CDwmAppHost@@AEAAXXZ @ 0x1400018A4 (-OnClose@CDwmAppHost@@AEAAXXZ.c)
 *     ?OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z @ 0x140006C58 (-OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z.c)
 *     ?RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ @ 0x1400095D8 (-RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ.c)
 */

LRESULT __fastcall CDwmAppHost::NotifyWndProc(__int64 this, HWND a2, void *a3, WPARAM a4, LPARAM lParam)
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
      CDwmAppHost::OnClose((CDwmAppHost *)this);
      return v5;
    case 0x15:
      v8 = 8;
      goto LABEL_19;
  }
  if ( (_DWORD)a3 != 26 )
  {
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
        CDwmAppHost::OnReportEvent((CDwmAppHost *)this, a4, v9, v10);
        return v5;
      }
      v8 = 4;
LABEL_19:
      CDwmAppHost::LpcNotifySettingsChange((CDwmAppHost *)this, v8, a3);
      return v5;
    }
    if ( !a4 )
      BlackScreenDiagnostics::RunDiagnosticsFromHotkey((BlackScreenDiagnostics *)this);
    return v5;
  }
  this = 8217LL;
  if ( a4 > 0x2019 )
    return v5;
  if ( (_DWORD)a4 == 6 || (_DWORD)a4 == 42 )
  {
    if ( !lParam )
      return v5;
    goto LABEL_33;
  }
  if ( (_DWORD)a4 != 47 )
  {
    if ( (_DWORD)a4 == 67 )
    {
      v8 = 2048;
    }
    else
    {
      if ( (_DWORD)a4 != 8217 )
        return v5;
      v8 = 256;
    }
    goto LABEL_19;
  }
  if ( lParam && !(unsigned int)_o__wcsicmp(lParam, L"devices") )
  {
LABEL_33:
    v8 = 3;
    goto LABEL_19;
  }
  return v5;
}
