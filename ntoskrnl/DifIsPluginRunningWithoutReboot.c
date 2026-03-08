/*
 * XREFs of DifIsPluginRunningWithoutReboot @ 0x1405D2A54
 * Callers:
 *     IopLoadUnloadDriver @ 0x140780340 (IopLoadUnloadDriver.c)
 *     VfMiscPluginEntry @ 0x140ADD684 (VfMiscPluginEntry.c)
 * Callees:
 *     <none>
 */

char DifIsPluginRunningWithoutReboot()
{
  return DifIsVolatileMode;
}
