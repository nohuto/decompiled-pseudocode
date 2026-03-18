/*
 * XREFs of ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C006A59C
 * Callers:
 *     ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x1C002037C (-IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z.c)
 *     InitializeMonitorInfo @ 0x1C0021474 (InitializeMonitorInfo.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004DF70 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1C0069908 (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     UpdateWindowMonitor @ 0x1C006BAD0 (UpdateWindowMonitor.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     GetMonitorTransform @ 0x1C009B038 (GetMonitorTransform.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C00FD5BC (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F10CC (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C02388A8 (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C00B0924 (GetMonitorRectForDpi.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x1C00FECAC (-GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z.c)
 */

char __fastcall IsChildWindowDpiBoundary(const struct tagWND *a1)
{
  __int64 v1; // rax
  char v2; // di
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v8; // rbx
  __int64 v9; // r8
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_QWORD *)a1 + 13);
  v2 = 0;
  if ( v1 )
  {
    v4 = *((_QWORD *)a1 + 3);
    if ( (!v4 || (v5 = *(_QWORD *)(v4 + 8)) == 0 || v1 != *(_QWORD *)(v5 + 24))
      && (((unsigned __int16)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v1 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
    {
      WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(a1);
      if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*((const struct tagWND **)a1 + 13)) )
        return 1;
      v8 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
      if ( v8 )
      {
        v9 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8;
        LOWORD(v9) = v9 & 0x1FF;
        GetMonitorRectForDpi(v10, v8, v9);
        if ( *(_QWORD *)(*(_QWORD *)(v8 + 40) + 28LL) != v10[0] )
          return 1;
      }
    }
  }
  return v2;
}
