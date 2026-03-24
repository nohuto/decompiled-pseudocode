/*
 * XREFs of HalpIsHvRemappingInterrupts @ 0x1407D1DE4
 * Callers:
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140A72004 (HalpUpdatePerDeviceMsiLimitInformation.c)
 * Callees:
 *     <none>
 */

bool HalpIsHvRemappingInterrupts()
{
  return qword_140C4A228 != 0;
}
