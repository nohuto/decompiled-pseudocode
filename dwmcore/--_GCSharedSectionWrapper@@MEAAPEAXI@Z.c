/*
 * XREFs of ??_GCSharedSectionWrapper@@MEAAPEAXI@Z @ 0x18024E370
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x18009A0B0 (--1CResource@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
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
