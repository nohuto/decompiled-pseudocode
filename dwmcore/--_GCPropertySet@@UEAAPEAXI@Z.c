/*
 * XREFs of ??_GCPropertySet@@UEAAPEAXI@Z @ 0x1800EBAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1CPropertySet@@UEAA@XZ @ 0x180097604 (--1CPropertySet@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CPropertySet *__fastcall CPropertySet::`scalar deleting destructor'(CPropertySet *this, char a2)
{
  CPropertySet::~CPropertySet(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xA0uLL);
    else
      operator delete(this);
  }
  return this;
}
