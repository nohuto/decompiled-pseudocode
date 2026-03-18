/*
 * XREFs of ??_GCCursorVisual@@MEAAPEAXI@Z @ 0x180228A20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CCursorVisual@@MEAA@XZ @ 0x1802289B0 (--1CCursorVisual@@MEAA@XZ.c)
 */

CCursorVisual *__fastcall CCursorVisual::`scalar deleting destructor'(CCursorVisual *this, char a2)
{
  CCursorVisual::~CCursorVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
