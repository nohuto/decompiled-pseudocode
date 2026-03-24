/*
 * XREFs of UserReAllocPoolZInit @ 0x1C0098DB0
 * Callers:
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01B4BBC (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 * Callees:
 *     UserReAllocPool @ 0x1C0098E10 (UserReAllocPool.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

__int64 __fastcall UserReAllocPoolZInit(void *a1, size_t a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi

  v5 = UserReAllocPool(a1, a2);
  v6 = v5;
  if ( v5 && a3 > a2 )
    memset((void *)(v5 + a2), 0, a3 - a2);
  return v6;
}
