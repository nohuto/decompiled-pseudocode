/*
 * XREFs of ??_GCSharedSectionWrapper@@MEAAPEAXI@Z @ 0x180251A50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078A28 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x18009A260 (--1CResource@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CSharedSectionWrapper *__fastcall CSharedSectionWrapper::`scalar deleting destructor'(
        CSharedSectionWrapper *this,
        char a2)
{
  CResource *v4; // rcx

  v4 = (CResource *)*((_QWORD *)this + 8);
  if ( v4 )
    CResource::InternalRelease(v4);
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
