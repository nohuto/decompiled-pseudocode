/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x14053D500
 * Callers:
 *     PpmCheckInitProcessors @ 0x140827DA4 (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

char HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
