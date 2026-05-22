/*
 * XREFs of _anonymous_namespace_::UpdateIfChanged_float_ @ 0x180168BBC
 * Callers:
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x18016D9B0 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::UpdateIfChanged_float_(float *a1, float a2, _BYTE *a3)
{
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*a1 - a2) & _xmm) > 0.001 )
  {
    *a1 = a2;
    *a3 = 1;
  }
}
