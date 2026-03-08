/*
 * XREFs of NtGdiComputeXformCoefficients @ 0x1C02AC8B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

_BOOL8 __fastcall NtGdiComputeXformCoefficients(HDC a1)
{
  BOOL v1; // ebx
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v4, (struct XDCOBJ *)v3, 516);
    v1 = (*(_BYTE *)(v4[0] + 32LL) & 1) != 0;
    if ( v3[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  return v1;
}
