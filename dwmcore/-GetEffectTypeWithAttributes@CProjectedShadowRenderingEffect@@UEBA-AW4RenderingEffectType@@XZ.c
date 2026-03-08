/*
 * XREFs of ?GetEffectTypeWithAttributes@CProjectedShadowRenderingEffect@@UEBA?AW4RenderingEffectType@@XZ @ 0x180205D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProjectedShadowRenderingEffect::GetEffectTypeWithAttributes(__int64 a1)
{
  return *(_BYTE *)(a1 + 70) != 0 ? 65538 : 2;
}
