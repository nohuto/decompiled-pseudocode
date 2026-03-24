/*
 * XREFs of ??_GCVisualSurface@@UEAAPEAXI@Z @ 0x18016DDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ??1CVisualSurface@@UEAA@XZ @ 0x1801F2230 (--1CVisualSurface@@UEAA@XZ.c)
 */

CVisualSurface *__fastcall CVisualSurface::`scalar deleting destructor'(CVisualSurface *this, char a2)
{
  CVisualSurface::~CVisualSurface(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
