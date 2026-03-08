/*
 * XREFs of ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C000A514
 * Callers:
 *     GreGetDxSharedSurface @ 0x1C000A248 (GreGetDxSharedSurface.c)
 *     GreGetHwndUpdateIds @ 0x1C026A324 (GreGetHwndUpdateIds.c)
 *     GreSetHwndPresentFlags @ 0x1C026AA44 (GreSetHwndPresentFlags.c)
 * Callees:
 *     ?hspLookupWindow@DWMALTSPRITEREF@@QEAAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C000A680 (-hspLookupWindow@DWMALTSPRITEREF@@QEAAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00E6724 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
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
