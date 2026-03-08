/*
 * XREFs of ?GetEffectTypeWithAttributes@CCommonRenderingEffect@@UEBA?AW4RenderingEffectType@@XZ @ 0x1800DBFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonRenderingEffect::GetEffectTypeWithAttributes(__int64 a1)
{
  return *(_BYTE *)(a1 + 70) != 0 ? 65537 : 1;
}
