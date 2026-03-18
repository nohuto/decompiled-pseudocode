/*
 * XREFs of ??_ECMatrixResource@@UEAAPEAXI@Z @ 0x1801C3290
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x18009A260 (--1CResource@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CMatrixResource *__fastcall CMatrixResource::`vector deleting destructor'(CMatrixResource *this, char a2)
{
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
