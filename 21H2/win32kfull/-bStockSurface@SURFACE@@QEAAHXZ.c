/*
 * XREFs of ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C0299B70
 * Callers:
 *     vMirrorIncludeNotifyWrap @ 0x1C00E1DD0 (vMirrorIncludeNotifyWrap.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00EDE70 (vAccNotifyDeleteSurfaceWrap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFACE::bStockSurface(SURFACE *this)
{
  return (*(_DWORD *)this & 0x800000) != 0 && _bittest16((const signed __int16 *)this + 51, 9u);
}
