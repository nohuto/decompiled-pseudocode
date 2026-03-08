/*
 * XREFs of MmAllocatePagesForMdl @ 0x1403A54F0
 * Callers:
 *     DifMmAllocatePagesForMdlWrapper @ 0x1405E4980 (DifMmAllocatePagesForMdlWrapper.c)
 *     HalpDmaAllocateScatterMemory @ 0x140931508 (HalpDmaAllocateScatterMemory.c)
 * Callees:
 *     MiAllocatePagesForMdl @ 0x1402B3B18 (MiAllocatePagesForMdl.c)
 */

PMDL __stdcall MmAllocatePagesForMdl(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes)
{
  return (PMDL)MiAllocatePagesForMdl(
                 (int)&MiSystemPartition,
                 LowAddress.QuadPart,
                 HighAddress.QuadPart,
                 SkipBytes.QuadPart,
                 TotalBytes,
                 3,
                 *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL),
                 0,
                 (__int64)KeGetCurrentThread()->ApcState.Process,
                 0LL);
}
