/*
 * XREFs of ?StopFilterKeysTimers@@YAXXZ @ 0x1C01E4680
 * Callers:
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C017B654 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C0240100 (ApiSetEditionKillAccessibilityTimer.c)
 */

void __fastcall StopFilterKeysTimers(__int64 a1)
{
  if ( gtmridFKResponse )
  {
    ApiSetEditionKillAccessibilityTimer(a1, gtmridFKResponse);
    gtmridFKResponse = 0LL;
  }
  if ( gtmridFKAcceptanceDelay )
  {
    ApiSetEditionKillAccessibilityTimer(a1, gtmridFKAcceptanceDelay);
    gtmridFKAcceptanceDelay = 0LL;
  }
  gLastVkDown = 0;
  gBounceVk = 0;
}
