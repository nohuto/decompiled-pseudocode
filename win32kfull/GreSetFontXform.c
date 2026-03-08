/*
 * XREFs of GreSetFontXform @ 0x1C029102C
 * Callers:
 *     NtGdiSetFontXform @ 0x1C02C75E0 (NtGdiSetFontXform.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreSetFontXform(HDC a1, float a2, float a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v3 = v6[0];
  if ( v6[0] )
  {
    *(float *)(v6[0] + 452LL) = a2;
    v4 = 1;
    *(float *)(v3 + 456) = a3;
    *(_DWORD *)(v6[0] + 252LL) |= 1u;
    v3 = v6[0];
  }
  else
  {
    v4 = 0;
  }
  if ( v3 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  return v4;
}
