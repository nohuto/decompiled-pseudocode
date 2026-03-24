/*
 * XREFs of AcpiIrqGetRootResourceList @ 0x1C0002760
 * Callers:
 *     ProcessorpReserveUnownedRanges @ 0x1C0097E6C (ProcessorpReserveUnownedRanges.c)
 * Callees:
 *     <none>
 */

__int64 AcpiIrqGetRootResourceList()
{
  return *(_QWORD *)(RootDeviceExtension + 632);
}
