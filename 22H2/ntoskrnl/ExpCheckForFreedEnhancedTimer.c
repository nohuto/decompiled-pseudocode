/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x14031DCD4
 * Callers:
 *     ExDeleteTimer @ 0x14031D8D0 (ExDeleteTimer.c)
 *     ExSetTimer @ 0x14031DC10 (ExSetTimer.c)
 *     ExCancelTimer @ 0x14031DCA0 (ExCancelTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
