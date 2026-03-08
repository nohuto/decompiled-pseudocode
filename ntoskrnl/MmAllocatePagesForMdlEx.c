/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x1402B3960
 * Callers:
 *     EtwpAllocateTraceBuffer @ 0x140205174 (EtwpAllocateTraceBuffer.c)
 *     BgpFwAllocateMemory @ 0x140383BDC (BgpFwAllocateMemory.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x14038CE84 (HalpAllocateCommonBufferDmaThin.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403A6784 (PpmHeteroInitializeHgsSupport.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14050D000 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14050FF60 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1405116E8 (HalpAllocateCommonBufferDmarThin.c)
 *     PopGenerateMdl @ 0x14058C638 (PopGenerateMdl.c)
 *     PopGenerateScratchMdl @ 0x14058C6D4 (PopGenerateScratchMdl.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1405BE038 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     DifMmAllocatePagesForMdlExWrapper @ 0x1405E4820 (DifMmAllocatePagesForMdlExWrapper.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x14094FA50 (IoReserveKsrPersistentMemoryEx.c)
 *     ResFwGetContext @ 0x140AEF010 (ResFwGetContext.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1402B39C0 (MmAllocatePartitionNodePagesForMdlEx.c)
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
                 *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL),
                 Flags,
                 0LL);
}
