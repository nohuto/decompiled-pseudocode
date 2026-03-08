/*
 * XREFs of NtGdiMakeInfoDC @ 0x1C02D7320
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall NtGdiMakeInfoDC(HDC a1, int a2)
{
  unsigned int InfoDC; // ebx
  DC *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  InfoDC = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
  {
    InfoDC = DC::bMakeInfoDC(v5[0], a2);
    if ( v5[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  return InfoDC;
}
