/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x1403547F0
 * Callers:
 *     EtwpAllocateTraceBuffer @ 0x14035FF08 (EtwpAllocateTraceBuffer.c)
 *     PopGenerateMdl @ 0x140387B68 (PopGenerateMdl.c)
 *     PopGenerateScratchMdl @ 0x140387D30 (PopGenerateScratchMdl.c)
 *     BgpFwAllocateMemory @ 0x14039BE84 (BgpFwAllocateMemory.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403CD544 (PpmHeteroInitializeHgsSupport.c)
 *     HalpAllocateCommonBufferThin @ 0x1404CB230 (HalpAllocateCommonBufferThin.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140599440 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     IoReserveKsrPersistentMemory @ 0x14089C050 (IoReserveKsrPersistentMemory.c)
 *     ResFwGetContext @ 0x1409F1298 (ResFwGetContext.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140354850 (MmAllocatePartitionNodePagesForMdlEx.c)
 */

PMDL __stdcall MmAllocatePagesForMdlEx(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes,
        MEMORY_CACHING_TYPE CacheType,
        ULONG Flags)
{
  return (PMDL)MmAllocatePartitionNodePagesForMdlEx(
                 LowAddress.LowPart,
                 HighAddress.LowPart,
                 SkipBytes.LowPart,
                 TotalBytes,
                 CacheType,
                 *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL),
                 Flags,
                 0LL);
}
