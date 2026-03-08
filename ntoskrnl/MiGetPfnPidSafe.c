/*
 * XREFs of MiGetPfnPidSafe @ 0x1406242B4
 * Callers:
 *     MiIdentifyPfn @ 0x14025E5D0 (MiIdentifyPfn.c)
 *     MiLogMdlRangeEvent @ 0x140621060 (MiLogMdlRangeEvent.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x140386E8C (MiGetLeafPfnBuddy.c)
 */

__int64 __fastcall MiGetPfnPidSafe(_QWORD *a1, char a2)
{
  unsigned __int64 LeafPfnBuddy; // rax

  if ( (a1[3] & 0x4000000000000000LL) != 0 )
    return 0LL;
  if ( (a2 & 1) != 0 )
    LeafPfnBuddy = MiGetLeafPfnBuddy(a1);
  else
    LeafPfnBuddy = (*a1 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
  return *(unsigned int *)(LeafPfnBuddy + 1088);
}
