/*
 * XREFs of ?SetDragOutToDragInThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C020B00C
 * Callers:
 *     ?HandleMovingAwayFromDockTargetMove@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@KUtagPOINT@@AEBUtagRECT@@PEAK@Z @ 0x1C020A088 (-HandleMovingAwayFromDockTargetMove@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@KUtagPOINT@@AEBUtagREC.c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z @ 0x1C020A5F4 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDragOutToDragInThreshold(struct MOVESIZEDATA *a1)
{
  if ( ((*((_DWORD *)a1 + 50) >> 15) & 7u) - 2 <= 1 )
    *((_DWORD *)a1 + 50) ^= (*((_DWORD *)a1 + 50) ^ (((*((_DWORD *)a1 + 50) >> 15) - 2) << 15)) & 0x38000;
}
