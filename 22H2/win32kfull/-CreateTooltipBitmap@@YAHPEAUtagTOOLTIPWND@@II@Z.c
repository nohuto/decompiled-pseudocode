/*
 * XREFs of ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C022537C
 * Callers:
 *     xxxTooltipWndProc @ 0x1C001FBD0 (xxxTooltipWndProc.c)
 * Callees:
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C0040D04 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0057310 (GreCreateCompatibleBitmapInternal.c)
 *     ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00BD578 (-DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 */

__int64 __fastcall CreateTooltipBitmap(struct tagTOOLTIPWND *a1, unsigned int a2, unsigned int a3)
{
  HDC TooltipDC; // rbx
  __int64 v7; // rcx

  if ( !*((_QWORD *)a1 + 2) )
    return 0LL;
  DestroyTooltipBitmap(a1);
  TooltipDC = GetTooltipDC(a1, 0LL);
  *((_QWORD *)a1 + 3) = GreCreateCompatibleBitmapInternal((__int64)TooltipDC, a2, a3, 0, 0LL, 0LL);
  _ReleaseDC(TooltipDC);
  v7 = *((_QWORD *)a1 + 3);
  if ( !v7 )
    return 0LL;
  GreSetBitmapOwner(v7, 0LL);
  GreSelectBitmap(*((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3));
  return 1LL;
}
