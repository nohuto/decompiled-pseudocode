/*
 * XREFs of GreGetSystemPaletteUse @ 0x1C00FA6A8
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00FA1BC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     CreateScreenPalette @ 0x1C022ADA8 (CreateScreenPalette.c)
 *     NtGdiGetSystemPaletteUse @ 0x1C02C5CC0 (NtGdiGetSystemPaletteUse.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreGetSystemPaletteUse(HDC a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  int v4; // edi
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v2 = *(_QWORD *)(v5[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
    if ( (*(_DWORD *)(v2 + 2140) & 0x100) != 0 )
    {
      v4 = *(_DWORD *)(*(_QWORD *)(v2 + 1776) + 24LL);
      if ( (v4 & 0x1000) != 0 )
        v1 = 2;
      else
        v1 = (v4 & 0x10000 | 0x8000u) >> 15;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
    if ( v5[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  return v1;
}
