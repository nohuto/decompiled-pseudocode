/*
 * XREFs of ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C2130
 * Callers:
 *     ?IsOfType@CRedirectVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001B710 (-IsOfType@CRedirectVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C2100 (-IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C2060 (-IsOfType@-$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_T.c)
 *     ?IsOfType@?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180216FB0 (-IsOfType@-$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1802255A0 (-IsOfType@-$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1802428C0 (-IsOfType@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@UEBA_NW4MIL_RE.c)
 *     ?IsOfType@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180251970 (-IsOfType@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::IsOfType(__int64 a1, int a2)
{
  return a2 == 196 || a2 == 114 || a2 == 134;
}
