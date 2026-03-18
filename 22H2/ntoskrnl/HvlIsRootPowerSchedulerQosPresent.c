/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x14053F9A0
 * Callers:
 *     PpmCheckInitProcessors @ 0x14082FE14 (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

char HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
