/*
 * XREFs of ??_GCRadialGradientEffect@@EEAAPEAXI@Z @ 0x1802696D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 */

CRadialGradientEffect *__fastcall CRadialGradientEffect::`scalar deleting destructor'(
        CRadialGradientEffect *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
