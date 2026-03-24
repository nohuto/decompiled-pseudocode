/*
 * XREFs of ?AccessTimeOut@@YAXXZ @ 0x1C0183240
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01B08E0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C01CDE54 (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOut(void)
{
  if ( gtmridAccessTimeOut )
  {
    if ( (qword_1C0250BF4 & 1) != 0 )
      gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(
                              gtmridAccessTimeOut,
                              HIDWORD(qword_1C0250BF4),
                              xxxAccessTimeOutTimer);
  }
}
