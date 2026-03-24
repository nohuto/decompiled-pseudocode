/*
 * XREFs of ?IsPropertyAnimatable@CVisualMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C01E4FB0
 * Callers:
 *     ?IsPropertyAnimatable@CParticleEmitterVisualMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C01DC040 (-IsPropertyAnimatable@CParticleEmitterVisualMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_E.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CVisualMarshaler::IsPropertyAnimatable(__int64 a1, unsigned int a2, int a3)
{
  return (a2 <= 2 || a2 == 26) && a3 == 18;
}
