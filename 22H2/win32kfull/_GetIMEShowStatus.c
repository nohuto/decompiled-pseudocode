/*
 * XREFs of _GetIMEShowStatus @ 0x1C00AB49C
 * Callers:
 *     NtUserGetIMEShowStatus @ 0x1C00AB460 (NtUserGetIMEShowStatus.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GetIMEShowStatus(__int64 a1)
{
  return *(_DWORD *)(SGDGetUserSessionState(a1) + 13960) != 0;
}
