/*
 * XREFs of HalpLegacyShutdown @ 0x1404BE240
 * Callers:
 *     <none>
 * Callees:
 *     HalReturnToFirmware @ 0x1404BE0F0 (HalReturnToFirmware.c)
 */

void __noreturn HalpLegacyShutdown()
{
  HalReturnToFirmware(1);
}
