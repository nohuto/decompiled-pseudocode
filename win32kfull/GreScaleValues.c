/*
 * XREFs of GreScaleValues @ 0x1C02AA82C
 * Callers:
 *     NtGdiScaleValues @ 0x1C02C70B0 (NtGdiScaleValues.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C02A9FFC (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 */

__int64 __fastcall GreScaleValues(HDC a1, int *a2, unsigned int a3)
{
  DC *v6[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  if ( v6[0] )
  {
    GreScaleValuesInternal(v6, a2, a3);
    if ( v6[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v6);
    return 1LL;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v6);
    return 0LL;
  }
}
