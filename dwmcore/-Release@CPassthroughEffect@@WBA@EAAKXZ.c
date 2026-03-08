/*
 * XREFs of ?Release@CPassthroughEffect@@WBA@EAAKXZ @ 0x18011FE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPassthroughEffect::Release(__int64 a1)
{
  return CRadialGradientEffect::Release((CRadialGradientEffect *)(a1 - 16));
}
