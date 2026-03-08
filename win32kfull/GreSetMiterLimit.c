/*
 * XREFs of GreSetMiterLimit @ 0x1C02C3294
 * Callers:
 *     NtGdiSetMiterLimit @ 0x1C02C7660 (NtGdiSetMiterLimit.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreSetMiterLimit(HDC a1, float a2, _DWORD *a3)
{
  __int64 v4; // rcx
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v4 = v6[0];
  if ( v6[0] && a2 >= 1.0 )
  {
    if ( a3 )
      *a3 = *(_DWORD *)(v6[0] + 224LL);
    *(float *)(v4 + 224) = a2;
    if ( v6[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v6);
    return 1LL;
  }
  else
  {
    EngSetLastError(0x57u);
    DCOBJ::~DCOBJ((DCOBJ *)v6);
    return 0LL;
  }
}
