/*
 * XREFs of ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C00647C8
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0028C1C (xxxSetLayeredWindow.c)
 *     ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x1C002C180 (-IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z.c)
 *     InitializeMonitorInfo @ 0x1C002D4E8 (InitializeMonitorInfo.c)
 *     GetMonitorTransform @ 0x1C00645EC (GetMonitorTransform.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C00A397C (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01CD768 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C0222AF0 (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C00A2698 (GetMonitorRectForDpi.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x1C00A3840 (-GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z.c)
 */

char __fastcall IsChildWindowDpiBoundary(const struct tagWND *a1)
{
  char v2; // di
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v8; // rbx
  __int64 v9; // r8
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)a1 + 13);
  if ( v3 )
  {
    v4 = *((_QWORD *)a1 + 3);
    if ( (!v4 || (v5 = *(_QWORD *)(v4 + 8)) == 0 || v3 != *(_QWORD *)(v5 + 24))
      && (((unsigned __int16)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v3 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
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
