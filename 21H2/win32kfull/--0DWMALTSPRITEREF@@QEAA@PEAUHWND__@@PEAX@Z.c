/*
 * XREFs of ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00EDBC0
 * Callers:
 *     GreGetDxSharedSurface @ 0x1C00ED940 (GreGetDxSharedSurface.c)
 *     GreGetHwndUpdateIds @ 0x1C026D470 (GreGetHwndUpdateIds.c)
 *     GreSetHwndPresentFlags @ 0x1C026DB6C (GreSetHwndPresentFlags.c)
 * Callees:
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00EDC30 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00EDC64 (-hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

DWMALTSPRITEREF *__fastcall DWMALTSPRITEREF::DWMALTSPRITEREF(DWMALTSPRITEREF *this, HWND a2, HSPRITE a3)
{
  *(_QWORD *)this = 0LL;
  if ( a2 )
    a3 = DWMALTSPRITEREF::hspLookupWindow(a2);
  if ( a3 )
    DWMALTSPRITEREF::AltLockSpriteObj(this, a3);
  return this;
}
