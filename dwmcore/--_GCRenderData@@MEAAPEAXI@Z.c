/*
 * XREFs of ??_GCRenderData@@MEAAPEAXI@Z @ 0x1800BB820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1CRenderData@@MEAA@XZ @ 0x1800BBA08 (--1CRenderData@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CRenderData *__fastcall CRenderData::`scalar deleting destructor'(CRenderData *this, char a2)
{
  CRenderData::~CRenderData(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x158uLL);
    else
      operator delete(this);
  }
  return this;
}
