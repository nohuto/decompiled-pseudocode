/*
 * XREFs of GetMonitorRectForDpi @ 0x1C00A2698
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0053AA0 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C00647C8 (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006A610 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     InternalGetRealClientRect @ 0x1C00A2710 (InternalGetRealClientRect.c)
 *     GetScreenRectForDpi @ 0x1C00A2874 (GetScreenRectForDpi.c)
 *     _MonitorFromPoint @ 0x1C00A2920 (_MonitorFromPoint.c)
 *     UpdateWindowMonitor @ 0x1C00AE6B0 (UpdateWindowMonitor.c)
 *     _MonitorFromRect @ 0x1C00AEE80 (_MonitorFromRect.c)
 *     GetMonitorRectForWindow @ 0x1C00FF4DC (GetMonitorRectForWindow.c)
 *     GetMonitorRect @ 0x1C0101788 (GetMonitorRect.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C0217AF4 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C024E86C (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C00A3584 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C00A3890 (ScaleDPIRect.c)
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
