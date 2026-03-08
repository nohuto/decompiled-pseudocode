/*
 * XREFs of PcisuppInitGlobalState @ 0x1C0099E44
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00ABB68 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 PcisuppInitGlobalState()
{
  ExInitializeResourceLite(&PciRouteInterfaceLock);
  return 0LL;
}
