/*
 * XREFs of _anonymous_namespace_::AxisContainsInteraction @ 0x1801A84FC
 * Callers:
 *     ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801A6210 (--$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInterac.c)
 * Callees:
 *     <none>
 */

char __fastcall anonymous_namespace_::AxisContainsInteraction(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_BYTE *)a1
    || *(_BYTE *)(a1 + 1)
    || *(float *)(a1 + 4) != 0.0
    || *(float *)(a1 + 8) != 0.0
    || *(float *)(a1 + 12) != 0.0 )
  {
    return 1;
  }
  return result;
}
