/*
 * XREFs of ??_ECMatrixTransform@@MEAAPEAXI@Z @ 0x1800FA270
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x18009A260 (--1CResource@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CMatrixTransform *__fastcall CMatrixTransform::`vector deleting destructor'(CMatrixTransform *this, char a2)
{
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xB8uLL);
    else
      operator delete(this);
  }
  return this;
}
