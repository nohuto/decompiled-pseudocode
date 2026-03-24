/*
 * XREFs of ??1CRedirectedGDISurface@@MEAA@XZ @ 0x1800D1A64
 * Callers:
 *     ??_ECRedirectedGDISurface@@MEAAPEAXI@Z @ 0x1800D1A20 (--_ECRedirectedGDISurface@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveLogicalSurfaceEntry@CLogicalSurfaceHandleMap@@QEAAXPEBVCGdiSpriteBitmap@@PEAX@Z @ 0x1800D1C10 (-RemoveLogicalSurfaceEntry@CLogicalSurfaceHandleMap@@QEAAXPEBVCGdiSpriteBitmap@@PEAX@Z.c)
 */

void __fastcall CRedirectedGDISurface::~CRedirectedGDISurface(CRedirectedGDISurface *this)
{
  bool v1; // zf

  v1 = *((_BYTE *)this + 41) == 0;
  *(_QWORD *)this = &CRedirectedGDISurface::`vftable';
  if ( !v1 )
    DwmHLSurfCloseCompositorRef(*((_QWORD *)this + 3));
  if ( *((_BYTE *)this + 40) )
    CLogicalSurfaceHandleMap::RemoveLogicalSurfaceEntry(
      *((CLogicalSurfaceHandleMap **)this + 2),
      *((const struct CGdiSpriteBitmap **)this + 4),
      *((void **)this + 3));
}
