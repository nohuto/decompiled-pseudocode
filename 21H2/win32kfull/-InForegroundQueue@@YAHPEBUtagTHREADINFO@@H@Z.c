/*
 * XREFs of ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C00A8DE0
 * Callers:
 *     NtUserCheckProcessForClipboardAccess @ 0x1C0003FF0 (NtUserCheckProcessForClipboardAccess.c)
 *     CheckCursorClipAccess @ 0x1C00A8870 (CheckCursorClipAccess.c)
 *     NtUserGetClipboardData @ 0x1C014AAF0 (NtUserGetClipboardData.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C00A99EC (IsDebuggerAttached.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C0110580 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

_BOOL8 __fastcall InForegroundQueue(const struct tagTHREADINFO *a1, int a2)
{
  return (unsigned int)IsDebuggerAttached(*((_QWORD *)a1 + 53))
      || gpqForeground
      && (*((_QWORD *)a1 + 54) == gpqForeground
       || (*(_DWORD *)(*((_QWORD *)a1 + 53) + 12LL) & 0x4080000) == 0x4080000
       || (unsigned int)ForegroundInputOwnerMatch(a1, a2));
}
