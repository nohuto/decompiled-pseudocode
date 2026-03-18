/*
 * XREFs of ?AccessTimeOut@@YAXXZ @ 0x1C00E3A90
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01EA900 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C0207894 (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOut(void)
{
  if ( gtmridAccessTimeOut )
  {
    if ( (dword_1C02905C4 & 1) != 0 )
      gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(
                              gtmridAccessTimeOut,
                              dword_1C02905C8,
                              xxxAccessTimeOutTimer);
  }
}
