/*
 * XREFs of ACPIInterfaceDereferenceDeviceExtension @ 0x1C0081BE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C002D0E0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 */

char __fastcall ACPIInterfaceDereferenceDeviceExtension(ULONG_PTR a1)
{
  return ACPIInitDereferenceDeviceExtensionUnlocked(a1);
}
