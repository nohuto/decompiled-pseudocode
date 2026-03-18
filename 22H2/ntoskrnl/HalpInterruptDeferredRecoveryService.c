/*
 * XREFs of HalpInterruptDeferredRecoveryService @ 0x14051C310
 * Callers:
 *     <none>
 * Callees:
 *     WheaDeferredRecoveryService @ 0x140612CD0 (WheaDeferredRecoveryService.c)
 */

char HalpInterruptDeferredRecoveryService()
{
  WheaDeferredRecoveryService();
  return 1;
}
