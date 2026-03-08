/*
 * XREFs of ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00F9B18
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00FA000 (xxxTooltipWndProc.c)
 * Callees:
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00F9B80 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 */

void __fastcall InitTooltipAnimation(struct tagTOOLTIPWND *a1)
{
  HDC TooltipDC; // rdi
  __int64 CompatibleDC; // rax

  TooltipDC = GetTooltipDC(a1, 0LL);
  CompatibleDC = GreCreateCompatibleDC(TooltipDC);
  *((_QWORD *)a1 + 2) = CompatibleDC;
  if ( CompatibleDC )
  {
    _ReleaseDC(TooltipDC);
    GreSetDCOwnerEx(*((_QWORD *)a1 + 2), 0LL, 0LL, 0LL);
  }
}
