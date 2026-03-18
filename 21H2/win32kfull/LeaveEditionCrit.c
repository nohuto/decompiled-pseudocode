/*
 * XREFs of LeaveEditionCrit @ 0x1C011DF80
 * Callers:
 *     NtUserFindWindowEx @ 0x1C00706A0 (NtUserFindWindowEx.c)
 *     NtUserGetRawInputBuffer @ 0x1C01F6020 (NtUserGetRawInputBuffer.c)
 *     NtUserShellSetWindowPos @ 0x1C01FEFF0 (NtUserShellSetWindowPos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveEditionCrit(__int64 a1)
{
  return UserSessionSwitchLeaveCrit(a1);
}
