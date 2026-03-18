/*
 * XREFs of ?DisableTemporayMetricsOverrides@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C0209A78
 * Callers:
 *     ?HandleMovingAwayFromDockTargetMove@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@KUtagPOINT@@AEBUtagRECT@@PEAK@Z @ 0x1C020A088 (-HandleMovingAwayFromDockTargetMove@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@KUtagPOINT@@AEBUtagREC.c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z @ 0x1C020A5F4 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DisableTemporayMetricsOverrides(struct MOVESIZEDATA *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 50);
  if ( (v1 & 0x400000) != 0 )
  {
    v1 &= 0xFFBFFBFF;
    *((_DWORD *)a1 + 50) = v1;
  }
  if ( (v1 & 0x800000) != 0 )
    *((_DWORD *)a1 + 50) = v1 & 0xFF7FF7FF;
}
