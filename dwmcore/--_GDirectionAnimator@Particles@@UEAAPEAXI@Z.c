/*
 * XREFs of ??_GDirectionAnimator@Particles@@UEAAPEAXI@Z @ 0x180240920
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

Particles::DirectionAnimator *__fastcall Particles::DirectionAnimator::`scalar deleting destructor'(
        Particles::DirectionAnimator *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
