/*
 * XREFs of IoGetInitialStack @ 0x140944470
 * Callers:
 *     DifIoGetInitialStackWrapper @ 0x1405DD8E0 (DifIoGetInitialStackWrapper.c)
 * Callees:
 *     <none>
 */

PVOID IoGetInitialStack(void)
{
  return KeGetCurrentThread()->InitialStack;
}
