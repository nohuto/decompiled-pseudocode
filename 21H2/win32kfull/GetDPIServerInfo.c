/*
 * XREFs of GetDPIServerInfo @ 0x1C00BA3D4
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0063E00 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetWindowNCMetrics @ 0x1C006492C (GetWindowNCMetrics.c)
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     xxxDrawCaptionTemp @ 0x1C00B97AC (xxxDrawCaptionTemp.c)
 *     CreateCompatiblePublicDC @ 0x1C00BA240 (CreateCompatiblePublicDC.c)
 *     GetCharDimensions @ 0x1C00C40F8 (GetCharDimensions.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C015A5CC (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01ED4B8 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01EE0D4 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C021CC64 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0225AF0 (SfnINLPKDRAWSWITCHWND.c)
 *     xxxDrawState @ 0x1C024DD1C (xxxDrawState.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025B488 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 *     IsSysFontAndDefaultMode @ 0x1C025BB6C (IsSysFontAndDefaultMode.c)
 * Callees:
 *     GetProcessDpiServerInfo @ 0x1C00BA408 (GetProcessDpiServerInfo.c)
 */

__int64 __fastcall GetDPIServerInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2) & 0xF) != 0 )
    return GetProcessDpiServerInfo();
  else
    return Get96DpiServerInfo(v3, v2, v4);
}
