/*
 * XREFs of GetMonitorRectForDpiContext @ 0x1C0042810
 * Callers:
 *     GetMonitorRect @ 0x1C0041D58 (GetMonitorRect.c)
 *     _MonitorFromPoint @ 0x1C0042060 (_MonitorFromPoint.c)
 *     _MonitorFromRect @ 0x1C0042270 (_MonitorFromRect.c)
 *     GetScreenRectForDpiContext @ 0x1C0042514 (GetScreenRectForDpiContext.c)
 *     GetMonitorTransform @ 0x1C00426E4 (GetMonitorTransform.c)
 *     GetMonitorRectForWindow @ 0x1C00427D4 (GetMonitorRectForWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C007061C (IsChildWindowDpiBoundary.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0073B10 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     InitializeDPIINFO @ 0x1C00BE1D0 (InitializeDPIINFO.c)
 *     ?GetMonitorMenuRectForDpiContext@@YA?AUtagRECT@@PEBUtagMONITOR@@K@Z @ 0x1C025D2A0 (-GetMonitorMenuRectForDpiContext@@YA-AUtagRECT@@PEBUtagMONITOR@@K@Z.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C00428C0 (ScaleDPIRect.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00429AC (ExpandMonitorSpaceVertex.c)
 */

_OWORD *__fastcall GetMonitorRectForDpiContext(_OWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v5; // di
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 v9; // rax
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  if ( (a3 & 0xF) == 2 && (a3 & 0x20000000) != 0 )
  {
    *a1 = *(_OWORD *)(*(_QWORD *)(a2 + 40) + 72LL);
  }
  else
  {
    v5 = (a3 >> 8) & 0x1FF;
    v6 = *(_QWORD *)(a2 + 40);
    v7 = *(_OWORD *)(v6 + 28);
    v10 = v7;
    if ( v5 )
    {
      v9 = ExpandMonitorSpaceVertex(v5, *(unsigned __int16 *)(v6 + 66), v10);
      ScaleDPIRect(
        (unsigned int)&v10,
        (unsigned int)&v10,
        v5,
        *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + 64LL),
        v9,
        v10);
      v7 = v10;
    }
    *a1 = v7;
  }
  return a1;
}
