/*
 * XREFs of GetMonitorRectForDpi @ 0x1C00B0924
 * Callers:
 *     InitializeMonitorInfo @ 0x1C0021474 (InitializeMonitorInfo.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C004BDA0 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GetMonitorRectForWindow @ 0x1C0063604 (GetMonitorRectForWindow.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C006A59C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     _MonitorFromPoint @ 0x1C007B350 (_MonitorFromPoint.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     GetMonitorRect @ 0x1C007CB08 (GetMonitorRect.c)
 *     GetMonitorTransform @ 0x1C009B038 (GetMonitorTransform.c)
 *     GetScreenRectForDpi @ 0x1C00B06C4 (GetScreenRectForDpi.c)
 *     InternalGetRealClientRect @ 0x1C00B0758 (InternalGetRealClientRect.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C022E878 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C025A4C0 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C00B099C (ScaleDPIRect.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00B0A88 (ExpandMonitorSpaceVertex.c)
 */

__int64 *__fastcall GetMonitorRectForDpi(__int64 *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rax
  __int64 v6; // rdx
  unsigned __int16 v7; // si
  __int64 v9; // rax

  v3 = *(_QWORD *)(a2 + 40);
  v6 = *(unsigned __int16 *)(v3 + 62);
  v7 = *(_WORD *)(v3 + 60);
  *(_OWORD *)a1 = *(_OWORD *)(v3 + 28);
  if ( a3 )
  {
    v9 = ExpandMonitorSpaceVertex(a3, v6, *a1);
    ScaleDPIRect((_DWORD)a1, (_DWORD)a1, a3, v7, v9, *a1);
  }
  return a1;
}
