/*
 * XREFs of HalpMmZeroPageWithTemporaryMapping @ 0x14037B138
 * Callers:
 *     HalpMmAllocateAndInsertPageTablePage @ 0x14037A3F0 (HalpMmAllocateAndInsertPageTablePage.c)
 * Callees:
 *     HalpFlushTLB @ 0x14037B0FC (HalpFlushTLB.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall HalpMmZeroPageWithTemporaryMapping(__int64 a1)
{
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (MEMORY[0xFFFFF6FFFFFFE000] & 1) != 0 )
    return 3221225485LL;
  MEMORY[0xFFFFF6FFFFFFE000] = a1 & 0xFFFFFFFFFF000LL | 0x8000000000000003uLL;
  _InterlockedOr(v2, 0);
  memset((void *)0xFFFFFFFFFFC00000LL, 0, 0x1000uLL);
  MEMORY[0xFFFFF6FFFFFFE000] = 0LL;
  HalpFlushTLB();
  return 0LL;
}
