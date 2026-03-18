/*
 * XREFs of ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C005FAE4
 * Callers:
 *     CheckCursorClipAccess @ 0x1C005D510 (CheckCursorClipAccess.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C005F920 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserGetClipboardData @ 0x1C01D0350 (NtUserGetClipboardData.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C005FB64 (IsDebuggerAttached.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C005FBA4 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall InForegroundQueue(const struct tagTHREADINFO *a1, int a2)
{
  unsigned int v4; // r11d

  if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)a1 + 53)) )
    return 1LL;
  if ( gpqForeground )
  {
    if ( *((_QWORD *)a1 + 54) != gpqForeground && (*(_DWORD *)(*((_QWORD *)a1 + 53) + 12LL) & 0x4080000) != 0x4080000 )
    {
      LOBYTE(v4) = (unsigned int)ForegroundInputOwnerMatch(a1, a2) != 0;
      return v4;
    }
    return 1LL;
  }
  return 0LL;
}
