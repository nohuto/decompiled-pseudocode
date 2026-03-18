/*
 * XREFs of IoGetInitialStack @ 0x140947490
 * Callers:
 *     DifIoGetInitialStackWrapper @ 0x1405DFD90 (DifIoGetInitialStackWrapper.c)
 * Callees:
 *     <none>
 */

PVOID IoGetInitialStack(void)
{
  return KeGetCurrentThread()->InitialStack;
}
