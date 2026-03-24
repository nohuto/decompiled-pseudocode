/*
 * XREFs of ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C003E37C
 * Callers:
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C003E504 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01CFDFC (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01D0B88 (ReduceArrangedRectangleByFrameMargin.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C020B708 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     UpdateSizeTrackingInfo @ 0x1C02110F8 (UpdateSizeTrackingInfo.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023F2D8 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     ?ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023F3D0 (-ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C006DEB0 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

char __fastcall GetWindowExtendedMargin(const struct tagWND *a1, struct FRAME_MARGIN *a2)
{
  char v4; // di
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  INT ScaledLogPixels; // ebx
  __int16 v10; // ax
  INT v11; // ecx
  __int16 v12; // ax
  INT v13; // ecx
  __int16 v14; // ax
  INT v15; // ecx
  _OWORD v16[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h]

  memset(v16, 0, sizeof(v16));
  v17 = 0LL;
  *(_QWORD *)a2 = 0LL;
  if ( !(unsigned int)IsTopLevelWindow(a1)
    || !(unsigned int)GetWindowCompositionInfo(a1, v16)
    || !(_WORD)v17 && __PAIR32__(WORD1(v17), 0) == HIWORD(v17) && !WORD2(v17) )
  {
    return 0;
  }
  v4 = 1;
  if ( W32GetThreadWin32Thread(KeGetCurrentThread())
    && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) != 0
    && (v6 = *((_QWORD *)a1 + 5), v7 = *(_DWORD *)(v6 + 288), (v7 & 0xF) == 0)
    && (v7 & 0x40000000) != 0
    && (v8 = *(unsigned __int16 *)(v6 + 284), (_WORD)v8 != 96) )
  {
    ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(v8);
    v10 = EngMulDiv((__int16)v17, 96, ScaledLogPixels);
    v11 = SWORD2(v17);
    *(_WORD *)a2 = v10;
    v12 = EngMulDiv(v11, 96, ScaledLogPixels);
    v13 = SWORD1(v17);
    *((_WORD *)a2 + 2) = v12;
    v14 = EngMulDiv(v13, 96, ScaledLogPixels);
    v15 = SHIWORD(v17);
    *((_WORD *)a2 + 1) = v14;
    *((_WORD *)a2 + 3) = EngMulDiv(v15, 96, ScaledLogPixels);
  }
  else
  {
    *(_QWORD *)a2 = v17;
  }
  return v4;
}
