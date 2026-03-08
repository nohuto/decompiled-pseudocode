/*
 * XREFs of ??_ECVisualReferenceController@@MEAAPEAXI@Z @ 0x1800E7B20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1CVisualReferenceController@@MEAA@XZ @ 0x1800E7B64 (--1CVisualReferenceController@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CVisualReferenceController *__fastcall CVisualReferenceController::`vector deleting destructor'(
        CVisualReferenceController *this,
        char a2)
{
  CVisualReferenceController::~CVisualReferenceController(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x50uLL);
    else
      operator delete(this);
  }
  return this;
}
