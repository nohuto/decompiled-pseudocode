/*
 * XREFs of ??_GCNaturalAnimation@@UEAAPEAXI@Z @ 0x1801C0100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CNaturalAnimation@@UEAA@XZ @ 0x180238804 (--1CNaturalAnimation@@UEAA@XZ.c)
 */

CNaturalAnimation *__fastcall CNaturalAnimation::`scalar deleting destructor'(CNaturalAnimation *this, char a2)
{
  CNaturalAnimation::~CNaturalAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
