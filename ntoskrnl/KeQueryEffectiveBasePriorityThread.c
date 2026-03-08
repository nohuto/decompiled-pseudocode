/*
 * XREFs of KeQueryEffectiveBasePriorityThread @ 0x140356320
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1403561BC (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x140228010 (KiIsThreadRankNonZero.c)
 */

__int64 __fastcall KeQueryEffectiveBasePriorityThread(__int64 a1)
{
  bool v2; // zf
  __int64 result; // rax

  v2 = !KiIsThreadRankNonZero(a1, 0LL);
  result = 1LL;
  if ( v2 )
    return (unsigned int)*(char *)(a1 + 563);
  return result;
}
