/*
 * XREFs of HalpIsHvRemappingInterrupts @ 0x14085FBC8
 * Callers:
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140B6C9A4 (HalpUpdatePerDeviceMsiLimitInformation.c)
 * Callees:
 *     <none>
 */

bool HalpIsHvRemappingInterrupts()
{
  return qword_140C62148 != 0;
}
