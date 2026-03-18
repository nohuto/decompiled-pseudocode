/*
 * XREFs of ??_ECGlobalDrawingContext@@UEAAPEAXI@Z @ 0x18003C5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18003C614 (--1CDrawingContext@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CGlobalDrawingContext *__fastcall CGlobalDrawingContext::`vector deleting destructor'(
        CGlobalDrawingContext *this,
        char a2)
{
  CDrawingContext::~CDrawingContext(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x1FF0uLL);
    else
      operator delete(this);
  }
  return this;
}
