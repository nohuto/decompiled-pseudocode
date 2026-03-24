/*
 * XREFs of ?AccessTimeOut@@YAXXZ @ 0x1C0183170
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01B0810 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C01CDD84 (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOut(void)
{
  if ( gtmridAccessTimeOut )
  {
    if ( (qword_1C024F92C & 1) != 0 )
      gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(
                              gtmridAccessTimeOut,
                              HIDWORD(qword_1C024F92C),
                              xxxAccessTimeOutTimer);
  }
}
