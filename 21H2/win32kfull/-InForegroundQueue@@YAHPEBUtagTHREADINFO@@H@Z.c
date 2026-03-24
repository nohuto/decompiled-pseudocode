/*
 * XREFs of ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C003DC5C
 * Callers:
 *     NtUserCheckProcessForClipboardAccess @ 0x1C00084A0 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserGetClipboardData @ 0x1C002CB70 (NtUserGetClipboardData.c)
 *     CheckCursorClipAccess @ 0x1C003DCE0 (CheckCursorClipAccess.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C003CEB8 (IsDebuggerAttached.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C01266DC (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

_BOOL8 __fastcall InForegroundQueue(__int64 **a1, int a2)
{
  return (unsigned int)IsDebuggerAttached(a1[53])
      || gpqForeground
      && (a1[54] == (__int64 *)gpqForeground
       || (*((_DWORD *)a1[53] + 3) & 0x4080000) == 0x4080000
       || (unsigned int)ForegroundInputOwnerMatch((const struct tagTHREADINFO *)a1, a2));
}
