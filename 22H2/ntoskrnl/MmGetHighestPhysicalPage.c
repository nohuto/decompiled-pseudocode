/*
 * XREFs of MmGetHighestPhysicalPage @ 0x1402D3AC8
 * Callers:
 *     PfpCopyUserPfnPrioRequest @ 0x14064E440 (PfpCopyUserPfnPrioRequest.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     PopAllocateHiberContext @ 0x140777B44 (PopAllocateHiberContext.c)
 *     PopPreallocateHibernateMemory @ 0x14079B89C (PopPreallocateHibernateMemory.c)
 *     PopBuildMemoryImageHeader @ 0x140996714 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E648 + 8LL * a1) + 6920LL);
}
