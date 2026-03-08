/*
 * XREFs of ??_ECInjectionAnimation@@UEAAPEAXI@Z @ 0x18022BA90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CInjectionAnimation@@UEAA@XZ @ 0x18022BA50 (--1CInjectionAnimation@@UEAA@XZ.c)
 */

void **__fastcall CInjectionAnimation::`vector deleting destructor'(void **this, char a2)
{
  CInjectionAnimation::~CInjectionAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
