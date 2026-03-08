/*
 * XREFs of ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x1800972A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180097428 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CKeyframeAnimation *__fastcall CKeyframeAnimation::`scalar deleting destructor'(CKeyframeAnimation *this, char a2)
{
  CKeyframeAnimation::~CKeyframeAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x248uLL);
    else
      operator delete(this);
  }
  return this;
}
