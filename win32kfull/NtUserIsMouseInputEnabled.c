/*
 * XREFs of NtUserIsMouseInputEnabled @ 0x1C01D6C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall NtUserIsMouseInputEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  _BOOL8 v3; // rbx
  __int64 v4; // rcx

  EnterSharedCrit(a1, a2, a3);
  v3 = ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0;
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
