/*
 * XREFs of _anonymous_namespace_::StoreIfChanged_float_ @ 0x18020CFF8
 * Callers:
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@@Z @ 0x18020E9A0 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@AEBUManipula.c)
 * Callees:
 *     <none>
 */

char __fastcall anonymous_namespace_::StoreIfChanged_float_(float *a1, float *a2)
{
  char result; // al

  result = 0;
  if ( *a1 != *a2 )
  {
    *a2 = *a1;
    return 1;
  }
  return result;
}
