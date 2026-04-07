/*
 * XREFs of ?Release@CAnimationResource@@UEAAKXZ @ 0x180007A00
 * Callers:
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180034494 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 * Callees:
 *     ??_GCAnimationResource@@IEAAPEAXI@Z @ 0x180007A2C (--_GCAnimationResource@@IEAAPEAXI@Z.c)
 */

__int64 __fastcall CAnimationResource::Release(CAnimationResource *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 && this )
    CAnimationResource::`scalar deleting destructor'(this, a2);
  return v2;
}
