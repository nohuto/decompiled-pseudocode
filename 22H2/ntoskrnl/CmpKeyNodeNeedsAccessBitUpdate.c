/*
 * XREFs of CmpKeyNodeNeedsAccessBitUpdate @ 0x140A16AA4
 * Callers:
 *     CmpGetKeyNodeForKcb @ 0x140710714 (CmpGetKeyNodeForKcb.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpKeyNodeNeedsAccessBitUpdate(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 160) & 0x8001) == 0 && (*(_BYTE *)(a2 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0;
}
