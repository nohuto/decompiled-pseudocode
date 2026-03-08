/*
 * XREFs of KeGetIdealNodeNumberThread @ 0x14056E190
 * Callers:
 *     MmAllocateNonCachedMemory @ 0x140A2AC20 (MmAllocateNonCachedMemory.c)
 *     MiCreateHardwareEnclave @ 0x140A3AB10 (MiCreateHardwareEnclave.c)
 *     MiAllocateUserPhysicalPages @ 0x140A3D6E8 (MiAllocateUserPhysicalPages.c)
 *     MmManagePartitionMoveMemory @ 0x140A42B54 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetIdealNodeNumberThread(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 192) + 138LL);
}
