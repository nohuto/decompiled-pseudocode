/*
 * XREFs of KeQueryEffectivePriorityThread @ 0x1403A9A40
 * Callers:
 *     <none>
 * Callees:
 *     KiIsThreadRankNonZero @ 0x140228010 (KiIsThreadRankNonZero.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x14056C4D8 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 */

__int64 __fastcall KeQueryEffectivePriorityThread(ULONG_PTR a1)
{
  bool v2; // zf
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
    KiUpdateVpBackingThreadPriorityOnPriorityQuery(a1);
  v2 = !KiIsThreadRankNonZero(a1, 0LL);
  result = 1LL;
  if ( v2 )
    return (unsigned int)*(char *)(a1 + 195);
  return result;
}
