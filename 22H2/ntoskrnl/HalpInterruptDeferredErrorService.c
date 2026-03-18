/*
 * XREFs of HalpInterruptDeferredErrorService @ 0x14051C2F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciHandler @ 0x14050584C (HalpCmciHandler.c)
 */

char HalpInterruptDeferredErrorService()
{
  HalpCmciHandler();
  return 1;
}
