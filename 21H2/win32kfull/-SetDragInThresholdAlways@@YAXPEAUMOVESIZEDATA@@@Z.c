/*
 * XREFs of ?SetDragInThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C020AF4C
 * Callers:
 *     ?HandleMovingAwayFromDockTargetMove@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@KUtagPOINT@@AEBUtagRECT@@PEAK@Z @ 0x1C020A088 (-HandleMovingAwayFromDockTargetMove@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@KUtagPOINT@@AEBUtagREC.c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z @ 0x1C020A5F4 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDragInThresholdAlways(struct MOVESIZEDATA *a1)
{
  int v1; // r8d
  int v2; // eax

  v1 = *((_DWORD *)a1 + 50) >> 15;
  if ( (v1 & 7u) - 2 <= 1 )
  {
    v2 = v1 - 2;
  }
  else
  {
    if ( (v1 & 7u) - 4 > 1 )
      return;
    v2 = v1 - 4;
  }
  *((_DWORD *)a1 + 50) ^= (*((_DWORD *)a1 + 50) ^ (v2 << 15)) & 0x38000;
}
