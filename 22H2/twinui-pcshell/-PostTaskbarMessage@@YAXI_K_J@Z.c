/*
 * XREFs of ?PostTaskbarMessage@@YAXI_K_J@Z @ 0x18000F128
 * Callers:
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x18000F104 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PostTaskbarMessage(UINT a1, WPARAM a2, LPARAM a3)
{
  HWND WindowW; // rax

  WindowW = (HWND)qword_180650258;
  if ( !qword_180650258 )
  {
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    qword_180650258 = (__int64)WindowW;
  }
  PostMessageW(WindowW, a1, a2, a3);
}
