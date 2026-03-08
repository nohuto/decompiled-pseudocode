/*
 * XREFs of _GetIMEShowStatus @ 0x1C00E361C
 * Callers:
 *     NtUserGetIMEShowStatus @ 0x1C00E35E0 (NtUserGetIMEShowStatus.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GetIMEShowStatus(__int64 a1)
{
  return *(_DWORD *)(SGDGetUserSessionState(a1) + 13960) != 0;
}
