/*
 * XREFs of HalpIsHvRemappingInterrupts @ 0x140864088
 * Callers:
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140B70994 (HalpUpdatePerDeviceMsiLimitInformation.c)
 * Callees:
 *     <none>
 */

bool HalpIsHvRemappingInterrupts()
{
  return qword_140C625A8 != 0;
}
