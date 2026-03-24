/*
 * XREFs of MmAllocateMappingAddress @ 0x140691430
 * Callers:
 *     SmFpPreAllocate @ 0x1403C8964 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F901C (HvlpInitializeHvCrashdump.c)
 *     PspInitPhase0 @ 0x140A3D098 (PspInitPhase0.c)
 *     HalpDmaAllocateReservedMapping @ 0x140A65ECC (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140A65F28 (HalpDmaAllocateEmergencyResources.c)
 * Callees:
 *     MmAllocateMappingAddressEx @ 0x140691450 (MmAllocateMappingAddressEx.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  return (PVOID)MmAllocateMappingAddressEx(NumberOfBytes, PoolTag, 0LL);
}
