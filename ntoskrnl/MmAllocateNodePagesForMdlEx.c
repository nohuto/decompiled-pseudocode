/*
 * XREFs of MmAllocateNodePagesForMdlEx @ 0x1403BE0E0
 * Callers:
 *     HvlpDepositPages @ 0x14053E7A4 (HvlpDepositPages.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1402B39C0 (MmAllocatePartitionNodePagesForMdlEx.c)
 */

__int64 __fastcall MmAllocateNodePagesForMdlEx(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6,
        int a7)
{
  return MmAllocatePartitionNodePagesForMdlEx(a1, a2, a3, a4, a5, a6, a7, 0LL);
}
