/*
 * XREFs of MiInPageGapPage @ 0x1402E4628
 * Callers:
 *     MiFinishHardFault @ 0x140284200 (MiFinishHardFault.c)
 *     MiInPageSkipPage @ 0x140463664 (MiInPageSkipPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInPageGapPage(__int64 a1)
{
  return (*(_BYTE *)(a1 + 34) & 7) == 7 && *(_QWORD *)(a1 + 8) == -3LL;
}
