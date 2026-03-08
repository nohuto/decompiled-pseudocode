/*
 * XREFs of NtUserShowSystemCursor @ 0x1C01DFDC0
 * Callers:
 *     <none>
 * Callees:
 *     EditionShowSystemCursor @ 0x1C002A450 (EditionShowSystemCursor.c)
 *     CheckWinstaAttributeAccess @ 0x1C003B230 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

_BOOL8 __fastcall NtUserShowSystemCursor(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  BOOL v4; // ebx
  __int64 v5; // rcx

  v3 = a1;
  EnterSharedCrit(a1, a2, a3);
  v4 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(16LL) )
    v4 = EditionShowSystemCursor((CursorApiRouter *)v3);
  else
    UserSetLastError(5);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
