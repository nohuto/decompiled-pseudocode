/*
 * XREFs of ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C00F403C
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C00CEB30 (xxxSetLayeredWindow.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C00CFC14 (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     InitializeMonitorInfo @ 0x1C00D516C (InitializeMonitorInfo.c)
 *     ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x1C00D549C (-IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z.c)
 *     GetMonitorTransform @ 0x1C00F388C (GetMonitorTransform.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F58E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01CC70C (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C021FD38 (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C00CFCCC (GetMonitorRectForDpi.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x1C00D1E30 (-GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z.c)
 */

char __fastcall IsChildWindowDpiBoundary(const struct tagWND *a1)
{
  char v2; // di
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v8; // rbx
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)a1 + 13);
  if ( v3 )
  {
    v4 = *((_QWORD *)a1 + 3);
    if ( (!v4 || (v5 = *(_QWORD *)(v4 + 8)) == 0 || v3 != *(_QWORD *)(v5 + 24))
      && (((unsigned __int16)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v3 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
    {
      WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(a1);
      if ( WindowCoordinateSpaceDpi != (unsigned __int16)GetWindowCoordinateSpaceDpi(*((const struct tagWND **)a1 + 13)) )
        return 1;
      v8 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
      if ( v8 )
      {
        GetMonitorRectForDpi(v9, v8, (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) & 0x1FF);
        if ( *(_QWORD *)(*(_QWORD *)(v8 + 40) + 28LL) != v9[0] )
          return 1;
      }
    }
  }
  return v2;
}
