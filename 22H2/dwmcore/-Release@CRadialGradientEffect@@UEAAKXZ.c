/*
 * XREFs of ?Release@CRadialGradientEffect@@UEAAKXZ @ 0x1800FE260
 * Callers:
 *     ?Release@CPassthroughEffect@@WBA@EAAKXZ @ 0x180123FC0 (-Release@CPassthroughEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CRadialGradientEffect::Release(CRadialGradientEffect *this)
{
  return CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>::InternalRelease(this);
}
