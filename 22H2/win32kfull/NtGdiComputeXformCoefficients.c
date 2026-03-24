/*
 * XREFs of NtGdiComputeXformCoefficients @ 0x1C0150D50
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FD8F4 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

_BOOL8 __fastcall NtGdiComputeXformCoefficients(HDC a1)
{
  BOOL v1; // ebx
  __int64 v3; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v4[7]; // [rsp+30h] [rbp-38h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  if ( v4[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v3, (struct XDCOBJ *)v4, 516);
    v1 = (*(_BYTE *)(v3 + 32) & 1) != 0;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v4);
  return v1;
}
