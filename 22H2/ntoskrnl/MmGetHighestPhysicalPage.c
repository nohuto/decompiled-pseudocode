/*
 * XREFs of MmGetHighestPhysicalPage @ 0x1402F8938
 * Callers:
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14075E420 (PfpCopyUserPfnPrioRequest.c)
 *     PopPreallocateHibernateMemory @ 0x1408014A4 (PopPreallocateHibernateMemory.c)
 *     PopEnableHiberFile @ 0x140803C60 (PopEnableHiberFile.c)
 *     PopAllocateHiberContext @ 0x140987DE8 (PopAllocateHiberContext.c)
 *     PopBuildMemoryImageHeader @ 0x140AA1C78 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C674C8 + 8LL * a1) + 17032LL);
}
