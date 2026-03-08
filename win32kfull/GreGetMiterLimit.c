/*
 * XREFs of GreGetMiterLimit @ 0x1C02C3230
 * Callers:
 *     NtGdiGetMiterLimit @ 0x1C02C5B50 (NtGdiGetMiterLimit.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreGetMiterLimit(HDC a1, _DWORD *a2)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  if ( v4[0] )
  {
    *a2 = *(_DWORD *)(v4[0] + 224LL);
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
    return 1LL;
  }
  else
  {
    EngSetLastError(0x57u);
    DCOBJ::~DCOBJ((DCOBJ *)v4);
    return 0LL;
  }
}
