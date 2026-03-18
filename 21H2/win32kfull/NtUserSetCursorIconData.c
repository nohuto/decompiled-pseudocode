/*
 * XREFs of NtUserSetCursorIconData @ 0x1C01FCE30
 * Callers:
 *     <none>
 * Callees:
 *     NtUserSetCursorIconDataEx @ 0x1C0025EE0 (NtUserSetCursorIconDataEx.c)
 */

__int64 __fastcall NtUserSetCursorIconData(__int64 a1, ULONG64 a2, ULONG64 a3, _BYTE *a4)
{
  return NtUserSetCursorIconDataEx(a1, a2, a3, a4, 0);
}
