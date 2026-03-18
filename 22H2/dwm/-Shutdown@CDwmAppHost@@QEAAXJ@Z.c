/*
 * XREFs of ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x1400017F0
 * Callers:
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001130 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     WinMain @ 0x1400018F0 (WinMain.c)
 * Callees:
 *     ?Cleanup@CSettingsManager@@QEAAXXZ @ 0x1400028D4 (-Cleanup@CSettingsManager@@QEAAXXZ.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140006FA8 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 */

void __fastcall CDwmAppHost::Shutdown(CDwmAppHost *this, UINT a2)
{
  UINT v2; // eax

  if ( a2 )
  {
    v2 = uExitCode;
    if ( !uExitCode )
      v2 = a2;
    uExitCode = v2;
  }
  if ( *(&uExitCode + 1) == 1 )
  {
    DWMGhostSetInShutdown(this);
    *(&uExitCode + 1) = 2;
  }
  if ( !hwnd )
  {
    if ( uExitCode != -805305602 )
      CDwmAppHost::ReportEventWithDword(0LL, 4u, 0x40002331u, uExitCode);
    CSettingsManager::Cleanup((CSettingsManager *)&qword_140015B48);
    if ( (int)*(&uExitCode + 1) >= 1 )
    {
      DWMGhostCleanup();
      *(&uExitCode + 1) = 0;
    }
    ExitProcess(uExitCode);
  }
  PostMessageW(hwnd, 0x10u, 0LL, 0LL);
}
