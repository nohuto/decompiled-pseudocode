/*
 * XREFs of LeaveEditionCrit @ 0x1C0132580
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C00659A0 (NtUserSetCursorIconData.c)
 *     NtUserFindWindowEx @ 0x1C00F7B30 (NtUserFindWindowEx.c)
 *     NtUserGetRawInputBuffer @ 0x1C01FB000 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveEditionCrit(__int64 a1)
{
  return UserSessionSwitchLeaveCrit(a1);
}
