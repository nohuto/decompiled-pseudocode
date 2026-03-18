/*
 * XREFs of ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C000B164
 * Callers:
 *     GreGetDxSharedSurface @ 0x1C000AE98 (GreGetDxSharedSurface.c)
 *     GreGetHwndUpdateIds @ 0x1C0267938 (GreGetHwndUpdateIds.c)
 *     GreSetHwndPresentFlags @ 0x1C02680D4 (GreSetHwndPresentFlags.c)
 * Callees:
 *     ?hspLookupWindow@DWMALTSPRITEREF@@QEAAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C000B2D0 (-hspLookupWindow@DWMALTSPRITEREF@@QEAAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00AE284 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 */

DWMALTSPRITEREF *__fastcall DWMALTSPRITEREF::DWMALTSPRITEREF(DWMALTSPRITEREF *this, HWND a2, HSPRITE a3)
{
  *(_QWORD *)this = 0LL;
  if ( a2 )
    a3 = DWMALTSPRITEREF::hspLookupWindow(this, a2);
  if ( a3 )
    DWMALTSPRITEREF::AltLockSpriteObj(this, a3);
  return this;
}
