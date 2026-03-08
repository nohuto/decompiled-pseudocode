/*
 * XREFs of CmpDecommisssionKcb @ 0x14074C040
 * Callers:
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 * Callees:
 *     CmpFreeKeyControlBlock @ 0x14074C060 (CmpFreeKeyControlBlock.c)
 */

__int64 __fastcall CmpDecommisssionKcb(ULONG_PTR a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 8) & 0x80000) != 0 )
    return CmpFreeKeyControlBlock(a1);
  return result;
}
