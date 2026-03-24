/*
 * XREFs of CmpIsKcbInsideVirtualStore @ 0x140347F84
 * Callers:
 *     CmpCreateChild @ 0x1406E08C4 (CmpCreateChild.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbInsideVirtualStore(__int64 a1)
{
  return (*(_DWORD *)(a1 + 184) & 0x2000000) != 0;
}
