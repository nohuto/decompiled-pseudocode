/*
 * XREFs of HalpInterruptDeferredRecoveryService @ 0x140519DE0
 * Callers:
 *     <none>
 * Callees:
 *     WheaDeferredRecoveryService @ 0x1406108B0 (WheaDeferredRecoveryService.c)
 */

char HalpInterruptDeferredRecoveryService()
{
  WheaDeferredRecoveryService();
  return 1;
}
