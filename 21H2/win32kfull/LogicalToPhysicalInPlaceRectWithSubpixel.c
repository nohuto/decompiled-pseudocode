/*
 * XREFs of LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00FD738
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C004BDA0 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004DF70 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     GetRect @ 0x1C00688B4 (GetRect.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x1C006A228 (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C00FD5BC (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ?GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z @ 0x1C01DECC4 (-GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z.c)
 *     NtUserLogicalToPhysicalDpiPointForWindow @ 0x1C01F9050 (NtUserLogicalToPhysicalDpiPointForWindow.c)
 * Callees:
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x1C0003DF4 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1C0069908 (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall LogicalToPhysicalInPlaceRectWithSubpixel(const struct tagWND *a1, int *a2, float *a3)
{
  unsigned int v5; // ebx
  const struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  float *v8; // rax
  __int64 v9; // r11
  __int64 v10; // r11
  __int64 v11; // r11
  float *v12; // rdx
  __int64 v13; // r11
  __int64 v14; // rcx
  int v15; // edx
  int v16; // eax

  v5 = 0;
  TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a1);
  if ( TopLevelOrDpiBoundaryWindow )
  {
    v8 = (float *)*((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
    if ( v8 )
    {
      ScaleValueWithSubpixel(a2, a3, *v8);
      ScaleValueWithSubpixel(
        a2 + 1,
        (float *)((unsigned __int64)(a3 + 1) & -(__int64)(a3 != 0LL)),
        *(float *)(*(_QWORD *)(v9 + 216) + 20LL));
      ScaleValueWithSubpixel(a2 + 2, 0LL, **(float **)(v10 + 216));
      ScaleValueWithSubpixel(a2 + 3, v12, *(float *)(*(_QWORD *)(v11 + 216) + 20LL));
      v14 = *(_QWORD *)(v13 + 216);
      v5 = 1;
      v15 = (int)*(float *)(v14 + 52);
      v16 = (int)*(float *)(v14 + 48);
      a2[3] += v15;
      *a2 += v16;
      a2[2] += v16;
      a2[1] += v15;
    }
  }
  return v5;
}
