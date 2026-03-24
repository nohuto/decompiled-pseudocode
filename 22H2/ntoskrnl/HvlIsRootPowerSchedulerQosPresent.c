/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x1404F17EC
 * Callers:
 *     PpmCheckInitProcessors @ 0x1407BA2D8 (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

char HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
