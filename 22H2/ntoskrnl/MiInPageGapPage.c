/*
 * XREFs of MiInPageGapPage @ 0x140350EA8
 * Callers:
 *     MiFinishHardFault @ 0x1402D9300 (MiFinishHardFault.c)
 *     MiInPageSkipPage @ 0x14046B564 (MiInPageSkipPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInPageGapPage(__int64 a1)
{
  return (*(_BYTE *)(a1 + 34) & 7) == 7 && *(_QWORD *)(a1 + 8) == -3LL;
}
