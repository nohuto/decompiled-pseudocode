/*
 * XREFs of ?AccessTimeOut@@YAXXZ @ 0x1C00E7C50
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01E9C00 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C020B760 (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOut(void)
{
  if ( gtmridAccessTimeOut )
  {
    if ( (qword_1C0295A14 & 1) != 0 )
      gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(
                              gtmridAccessTimeOut,
                              HIDWORD(qword_1C0295A14),
                              xxxAccessTimeOutTimer);
  }
}
