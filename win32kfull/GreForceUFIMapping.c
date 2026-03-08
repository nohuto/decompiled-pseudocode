/*
 * XREFs of GreForceUFIMapping @ 0x1C027A4EC
 * Callers:
 *     NtGdiForceUFIMapping @ 0x1C02C4A90 (NtGdiForceUFIMapping.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreForceUFIMapping(HDC a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v3 = v6[0];
  if ( v6[0] )
  {
    v5 = *a2;
    *(_DWORD *)(v6[0] + 252LL) |= 4u;
    *(_QWORD *)(v3 + 256) = v5;
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
