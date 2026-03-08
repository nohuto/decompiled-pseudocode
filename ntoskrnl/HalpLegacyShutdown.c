/*
 * XREFs of HalpLegacyShutdown @ 0x140504AD0
 * Callers:
 *     <none>
 * Callees:
 *     HalReturnToFirmware @ 0x140504990 (HalReturnToFirmware.c)
 */

void __noreturn HalpLegacyShutdown()
{
  HalReturnToFirmware(1);
}
