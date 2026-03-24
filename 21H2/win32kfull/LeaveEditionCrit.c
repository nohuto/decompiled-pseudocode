/*
 * XREFs of LeaveEditionCrit @ 0x1C0132930
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C0065A40 (NtUserSetCursorIconData.c)
 *     NtUserFindWindowEx @ 0x1C00F7E80 (NtUserFindWindowEx.c)
 *     NtUserGetRawInputBuffer @ 0x1C01FB5C0 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveEditionCrit(__int64 a1)
{
  return UserSessionSwitchLeaveCrit(a1);
}
