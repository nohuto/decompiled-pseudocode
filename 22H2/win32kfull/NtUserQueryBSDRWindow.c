/*
 * XREFs of NtUserQueryBSDRWindow @ 0x1C01D8C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserQueryBSDRWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx

  EnterSharedCrit(a1, a2, a3);
  v7 = 0LL;
  if ( gspwndBSDR )
    v7 = *(_QWORD *)gspwndBSDR;
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
