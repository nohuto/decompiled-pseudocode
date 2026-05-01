/*
 * XREFs of ?v_WndProc@GhostDivider@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180490260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LRESULT __fastcall GhostDivider::v_WndProc(GhostDivider *this, HWND a2, UINT a3, WPARAM a4, LPARAM lParam)
{
  LRESULT result; // rax

  result = 0LL;
  if ( a3 != 16 )
  {
    if ( a3 == 33 )
      return 3LL;
    else
      return DefWindowProcW(a2, a3, a4, lParam);
  }
  return result;
}
