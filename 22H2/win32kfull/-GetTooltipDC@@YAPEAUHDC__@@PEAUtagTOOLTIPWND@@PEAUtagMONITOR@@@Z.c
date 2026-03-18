/*
 * XREFs of ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C0040D04
 * Callers:
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0040C9C (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C022537C (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0225638 (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C0225BF8 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C0041198 (GetDPIMETRICSForDpi.c)
 *     GreSelectFontInternal @ 0x1C0119F34 (GreSelectFontInternal.c)
 */

HDC __fastcall GetTooltipDC(struct tagTOOLTIPWND *a1, struct tagMONITOR *a2)
{
  HDC result; // rax
  HDC v5; // rsi
  unsigned __int16 v6; // cx
  __int64 DPIMETRICSForDpi; // rax

  result = (HDC)_GetDCEx(*(_QWORD *)a1, 0LL, 65539LL);
  v5 = result;
  if ( result )
  {
    if ( a2 )
      v6 = *(_WORD *)(*((_QWORD *)a2 + 5) + 60LL);
    else
      v6 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 284LL);
    DPIMETRICSForDpi = GetDPIMETRICSForDpi(v6);
    GreSelectFontInternal(v5, *(_QWORD *)(DPIMETRICSForDpi + 56), 1LL);
    return v5;
  }
  return result;
}
