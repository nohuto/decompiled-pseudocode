/*
 * XREFs of HalpLegacyShutdown @ 0x140506BB0
 * Callers:
 *     <none>
 * Callees:
 *     HalReturnToFirmware @ 0x140506A70 (HalReturnToFirmware.c)
 */

void __noreturn HalpLegacyShutdown()
{
  HalReturnToFirmware(1);
}
