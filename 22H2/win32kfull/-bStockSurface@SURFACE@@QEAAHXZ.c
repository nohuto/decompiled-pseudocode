/*
 * XREFs of ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C02A32DC
 * Callers:
 *     vMirrorIncludeNotifyWrap @ 0x1C0093090 (vMirrorIncludeNotifyWrap.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C0096FB0 (vAccNotifyDeleteSurfaceWrap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFACE::bStockSurface(SURFACE *this)
{
  return (*(_DWORD *)this & 0x800000) != 0 && _bittest16((const signed __int16 *)this + 51, 9u);
}
