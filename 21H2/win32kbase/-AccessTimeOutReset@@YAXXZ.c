/*
 * XREFs of ?AccessTimeOutReset@@YAXXZ @ 0x1C005FA40
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0060150 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C0165450 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C0209254 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C020B760 (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOutReset(void)
{
  if ( gtmridAccessTimeOut )
    ApiSetEditionKillAccessibilityTimer();
  if ( (qword_1C0295A14 & 1) != 0 )
    gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(0LL, HIDWORD(qword_1C0295A14), xxxAccessTimeOutTimer);
}
