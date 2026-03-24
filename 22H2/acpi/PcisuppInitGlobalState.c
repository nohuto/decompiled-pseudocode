/*
 * XREFs of PcisuppInitGlobalState @ 0x1C009FCC8
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00BEF34 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 PcisuppInitGlobalState()
{
  ExInitializeResourceLite(&PciRouteInterfaceLock);
  return 0LL;
}
