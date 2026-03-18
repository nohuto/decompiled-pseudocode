/*
 * XREFs of ?GetFrameBoundsOverlapInfo@@YA?AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z @ 0x1C0209FFC
 * Callers:
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C015B0AC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z @ 0x1C020A5F4 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUtagCHECKPOINT@@PEAK@Z.c)
 *     ?UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1@Z @ 0x1C020B480 (-UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1@Z.c)
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C020CF7C (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFrameBoundsOverlapInfo(_DWORD *a1, _DWORD *a2, char a3)
{
  int v4; // r11d
  unsigned int v5; // r8d
  __int64 result; // rax

  if ( a3 && *a1 > *a2 || a3 && a1[1] > a2[1] )
    return 0LL;
  v4 = (*a1 == *a2) | 2;
  if ( a1[1] != a2[1] )
    v4 = *a1 == *a2;
  if ( a3 && a1[2] < a2[2] )
    return 0LL;
  v5 = v4 | 4;
  if ( a1[2] != a2[2] )
    v5 = v4;
  if ( a3 && a1[3] < a2[3] )
    return 0LL;
  result = v5 | 8;
  if ( a1[3] != a2[3] )
    return v5;
  return result;
}
