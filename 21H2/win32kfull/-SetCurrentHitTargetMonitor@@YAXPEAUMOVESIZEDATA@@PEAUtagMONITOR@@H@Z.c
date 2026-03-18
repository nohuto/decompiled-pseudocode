/*
 * XREFs of ?SetCurrentHitTargetMonitor@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C020AF14
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C020A3AC (-HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRE.c)
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C020B268 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxHandleNewDockTargetOrMonitorMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@UtagPOINT@@KPEAK@Z @ 0x1C020D334 (-xxxHandleNewDockTargetOrMonitorMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtag.c)
 *     ?xxxHandleNoDockTargetToDockTargetMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@KAEBUtagRECT@@PEAK@Z @ 0x1C020D59C (-xxxHandleNoDockTargetToDockTargetMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUt.c)
 * Callees:
 *     <none>
 */

void __fastcall SetCurrentHitTargetMonitor(struct MOVESIZEDATA *a1, struct tagMONITOR *a2, int a3)
{
  int v3; // eax

  if ( a3 )
  {
    v3 = *((_DWORD *)a1 + 50);
    if ( (v3 & 0x2000000) == 0 )
    {
      *((_QWORD *)a1 + 26) = a2;
      if ( (v3 & 0x20) == 0 )
        *((_DWORD *)a1 + 50) = v3 | 0x8000000;
    }
  }
  *((_QWORD *)a1 + 29) = a2;
}
