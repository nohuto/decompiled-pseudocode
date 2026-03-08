/*
 * XREFs of HalpInterruptDeferredErrorService @ 0x140519DC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciHandler @ 0x14050376C (HalpCmciHandler.c)
 */

char HalpInterruptDeferredErrorService()
{
  HalpCmciHandler();
  return 1;
}
