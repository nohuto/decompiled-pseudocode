/*
 * XREFs of GreSetColorAdjustment @ 0x1C02AA960
 * Callers:
 *     NtGdiSetColorAdjustment @ 0x1C02C7490 (NtGdiSetColorAdjustment.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreSetColorAdjustment(HDC a1, __int128 *a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int128 v5; // xmm2
  __int64 v6; // xmm0_8
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v3 = v8[0];
  if ( v8[0] )
  {
    v5 = *a2;
    v6 = *((_QWORD *)a2 + 2);
    v4 = 1;
    *(_OWORD *)(v8[0] + 176LL) = v5;
    *(_QWORD *)(v3 + 192) = v6;
    *(_WORD *)(v8[0] + 178LL) &= 3u;
  }
  else
  {
    EngSetLastError(6u);
    v4 = 0;
  }
  if ( v8[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  return v4;
}
