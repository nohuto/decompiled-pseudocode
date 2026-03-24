/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x140349104
 * Callers:
 *     ExCancelTimer @ 0x1403488A0 (ExCancelTimer.c)
 *     ExDeleteTimer @ 0x140348920 (ExDeleteTimer.c)
 *     ExSetTimer @ 0x140349080 (ExSetTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
