/*
 * XREFs of NtUserQueryBSDRWindow @ 0x1C0200240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserQueryBSDRWindow()
{
  __int64 v0; // rcx
  __int64 v1; // rbx

  EnterCrit(0LL, 1LL);
  v1 = 0LL;
  if ( gspwndBSDR )
    v1 = *(_QWORD *)gspwndBSDR;
  UserSessionSwitchLeaveCrit(v0);
  return v1;
}
