/*
 * XREFs of ?AccessTimeOutReset@@YAXXZ @ 0x1C00177E0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0017E70 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C017B404 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C0240100 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C0242AAC (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOutReset(void)
{
  if ( gtmridAccessTimeOut )
    ApiSetEditionKillAccessibilityTimer();
  if ( (dword_1C02D1564 & 1) != 0 )
    gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(0LL, dword_1C02D1568, xxxAccessTimeOutTimer);
}
