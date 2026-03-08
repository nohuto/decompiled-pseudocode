/*
 * XREFs of NtGdiCreateMetafileDC @ 0x1C0199440
 * Callers:
 *     <none>
 * Callees:
 *     UserGetDesktopDC @ 0x1C003D300 (UserGetDesktopDC.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0053708 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00550A0 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     GreCreateDisplayDC @ 0x1C0055340 (GreCreateDisplayDC.c)
 */

HDC __fastcall NtGdiCreateMetafileDC(HDC a1)
{
  HDC DisplayDC; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DisplayDC = 0LL;
  if ( !a1 )
    return (HDC)UserGetDesktopDC(2u, 1LL, 0);
  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
  {
    DisplayDC = GreCreateDisplayDC(*(HDEV *)(v3[0] + 48LL), 2u, 1);
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  return DisplayDC;
}
