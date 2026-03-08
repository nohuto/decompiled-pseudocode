/*
 * XREFs of ?SetDragOutToDragInThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01EBA00
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z @ 0x1C01EADC8 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1C01F230C (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDragOutToDragInThreshold(struct MOVESIZEDATA *a1)
{
  if ( ((*((_DWORD *)a1 + 50) >> 15) & 7u) - 2 <= 1 )
    *((_DWORD *)a1 + 50) ^= (*((_DWORD *)a1 + 50) ^ (((*((_DWORD *)a1 + 50) >> 15) - 2) << 15)) & 0x38000;
}
