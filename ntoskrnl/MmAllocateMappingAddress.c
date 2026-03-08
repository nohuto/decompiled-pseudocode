/*
 * XREFs of MmAllocateMappingAddress @ 0x140869D00
 * Callers:
 *     SmFpPreAllocate @ 0x1403A1704 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x140545BF4 (HvlpInitializeHvCrashdump.c)
 *     PspInitPhase0 @ 0x140B3F968 (PspInitPhase0.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140B61178 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140B61370 (HalpDmaAllocateReservedMapping.c)
 * Callees:
 *     MmAllocateMappingAddressEx @ 0x140869D20 (MmAllocateMappingAddressEx.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  return (PVOID)MmAllocateMappingAddressEx(NumberOfBytes, PoolTag, 0LL);
}
