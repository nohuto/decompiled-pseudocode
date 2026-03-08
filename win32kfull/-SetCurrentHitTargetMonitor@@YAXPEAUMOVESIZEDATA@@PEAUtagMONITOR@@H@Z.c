/*
 * XREFs of ?SetCurrentHitTargetMonitor@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C01EB8FC
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C01EAB38 (-HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRE.c)
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01EBD54 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetCurrentHitTargetMonitor(struct MOVESIZEDATA *a1, struct tagMONITOR *a2, int a3)
{
  int v3; // eax

  if ( a3 )
  {
    v3 = *((_DWORD *)a1 + 50);
    if ( (v3 & 0x1000000) == 0 )
    {
      *((_QWORD *)a1 + 26) = a2;
      if ( (v3 & 0x20) == 0 )
        *((_DWORD *)a1 + 50) = v3 | 0x4000000;
    }
  }
  *((_QWORD *)a1 + 29) = a2;
}
