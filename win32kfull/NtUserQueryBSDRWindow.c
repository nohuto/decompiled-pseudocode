/*
 * XREFs of NtUserQueryBSDRWindow @ 0x1C01D9C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserQueryBSDRWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rbx

  EnterSharedCrit(a1, a2, a3);
  v4 = 0LL;
  if ( gspwndBSDR )
    v4 = *(_QWORD *)gspwndBSDR;
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
