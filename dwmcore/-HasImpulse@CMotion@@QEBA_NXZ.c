/*
 * XREFs of ?HasImpulse@CMotion@@QEBA_NXZ @ 0x180261990
 * Callers:
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x18022F824 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsInMotion@CMotion@@QEBA_NXZ @ 0x18026B694 (-IsInMotion@CMotion@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMotion::HasImpulse(CMotion *this)
{
  return *((float *)this + 10) != 0.0;
}
