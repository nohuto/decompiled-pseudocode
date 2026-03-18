/*
 * XREFs of DifIsPluginRunningWithoutReboot @ 0x1405D4F04
 * Callers:
 *     IopLoadUnloadDriver @ 0x1407CF3E0 (IopLoadUnloadDriver.c)
 *     VfMiscPluginEntry @ 0x140AE1684 (VfMiscPluginEntry.c)
 * Callees:
 *     <none>
 */

char DifIsPluginRunningWithoutReboot()
{
  return DifIsVolatileMode;
}
