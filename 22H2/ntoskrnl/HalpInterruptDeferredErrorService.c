/*
 * XREFs of HalpInterruptDeferredErrorService @ 0x1404D2550
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciHandler @ 0x1404BC9F8 (HalpCmciHandler.c)
 */

char HalpInterruptDeferredErrorService()
{
  HalpCmciHandler();
  return 1;
}
