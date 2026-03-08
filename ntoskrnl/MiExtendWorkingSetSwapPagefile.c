/*
 * XREFs of MiExtendWorkingSetSwapPagefile @ 0x140A40524
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1402DAFF8 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x14065065C (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiIssuePageExtendRequest @ 0x14063890C (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MiExtendWorkingSetSwapPagefile(__int64 a1, __int64 a2, unsigned int a3)
{
  return (unsigned int)MiIssuePageExtendRequest(a1, (a2 + 0x7FFF) & 0xFFFFFFFFFFFF8000uLL, 0, a3) == 0 ? 0xC0000099 : 0;
}
