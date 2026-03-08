/*
 * XREFs of ?Release@CRadialGradientEffect@@UEAAKXZ @ 0x1800FD620
 * Callers:
 *     ?Release@CPassthroughEffect@@WBA@EAAKXZ @ 0x18011FE10 (-Release@CPassthroughEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CRadialGradientEffect::Release(CRadialGradientEffect *this)
{
  return CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>::InternalRelease(this);
}
