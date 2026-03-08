/*
 * XREFs of MmGetHighestPhysicalPage @ 0x140236718
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     PfpCopyUserPfnPrioRequest @ 0x1406AEA90 (PfpCopyUserPfnPrioRequest.c)
 *     PopPreallocateHibernateMemory @ 0x1407FC7F4 (PopPreallocateHibernateMemory.c)
 *     PopEnableHiberFile @ 0x14082ADA4 (PopEnableHiberFile.c)
 *     PopAllocateHiberContext @ 0x140984D38 (PopAllocateHiberContext.c)
 *     PopBuildMemoryImageHeader @ 0x140A9EA28 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8LL * a1) + 17032LL);
}
