/*
 * XREFs of IsChildWindowDpiBoundary @ 0x1C00706BC
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0035DC0 (xxxSetLayeredWindow.c)
 *     GetMonitorTransform @ 0x1C0042784 (GetMonitorTransform.c)
 *     IsChildWindowDpiBoundaryDesktopComposed @ 0x1C004C3AC (IsChildWindowDpiBoundaryDesktopComposed.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068330 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C0070270 (UpdateWindowMonitor.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00707F8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     InitializeDPIINFO @ 0x1C00BE530 (InitializeDPIINFO.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00F1754 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00F1894 (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E6824 (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F6974 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 * Callees:
 *     GetMonitorRectForDpiContext @ 0x1C00428B0 (GetMonitorRectForDpiContext.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C0070760 (-IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C0113C2C (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 */

__int64 __fastcall IsChildWindowDpiBoundary(struct tagWND *a1)
{
  unsigned int v2; // edi
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v5; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( (unsigned int)IsChildWindowCoordinateSpaceBoundary(a1) )
  {
    WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(a1);
    if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*((struct tagWND **)a1 + 13)) )
      return 1;
    v5 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    if ( v5 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v5 + 40) + 28LL) != *(_QWORD *)GetMonitorRectForDpiContext(
                                                                    &v6,
                                                                    v5,
                                                                    *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL)) )
        return 1;
    }
  }
  return v2;
}
