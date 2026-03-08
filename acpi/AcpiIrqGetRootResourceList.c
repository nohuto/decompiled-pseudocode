/*
 * XREFs of AcpiIrqGetRootResourceList @ 0x1C000AB48
 * Callers:
 *     ProcessorpReserveUnownedRanges @ 0x1C009BFE4 (ProcessorpReserveUnownedRanges.c)
 * Callees:
 *     <none>
 */

__int64 AcpiIrqGetRootResourceList()
{
  return *(_QWORD *)(RootDeviceExtension + 672);
}
