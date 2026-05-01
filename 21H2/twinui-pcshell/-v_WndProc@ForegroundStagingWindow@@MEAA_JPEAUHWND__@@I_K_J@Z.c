/*
 * XREFs of ?v_WndProc@ForegroundStagingWindow@@MEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803EFA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LRESULT __fastcall ForegroundStagingWindow::v_WndProc(HWND *this, HWND a2, UINT a3, WPARAM a4, LPARAM lParam)
{
  LRESULT result; // rax

  result = 0LL;
  if ( a3 != 16 )
    return DefWindowProcW(this[1], a3, a4, lParam);
  return result;
}
