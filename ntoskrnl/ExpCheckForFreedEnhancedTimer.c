/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x140204364
 * Callers:
 *     ExDeleteTimer @ 0x140203F60 (ExDeleteTimer.c)
 *     ExSetTimer @ 0x1402042A0 (ExSetTimer.c)
 *     ExCancelTimer @ 0x140204330 (ExCancelTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
