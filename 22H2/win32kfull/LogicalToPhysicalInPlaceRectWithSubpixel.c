/*
 * XREFs of LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00D1C18
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0033750 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x1C008E62C (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     GetRect @ 0x1C00C7BD0 (GetRect.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C00CFC14 (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00D0C30 (xxxInheritWindowMonitor.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F58E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0123FE0 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z @ 0x1C01B9118 (-GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z.c)
 *     NtUserLogicalToPhysicalDpiPointForWindow @ 0x1C01D6340 (NtUserLogicalToPhysicalDpiPointForWindow.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1C00D1C5C (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x1C0151912 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 */

__int64 __fastcall LogicalToPhysicalInPlaceRectWithSubpixel(const struct tagWND *a1, int *a2, unsigned __int64 a3)
{
  unsigned int v5; // ebx
  const struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  float *v8; // rcx
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
      ScaleValueWithSubpixel(a2, (float *)(a3 & ((unsigned __int128)-(__int128)a3 >> 64)), *v8);
      ScaleValueWithSubpixel(
        a2 + 1,
        (float *)((a3 + 4) & -(__int64)(a3 != 0)),
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
