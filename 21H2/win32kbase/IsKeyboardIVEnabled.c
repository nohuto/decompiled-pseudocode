/*
 * XREFs of IsKeyboardIVEnabled @ 0x1C01BA704
 * Callers:
 *     RIMChildInputTypeIsVirtualized @ 0x1C0055848 (RIMChildInputTypeIsVirtualized.c)
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01BD0A4 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 * Callees:
 *     isChildPartition @ 0x1C0040F30 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C0041550 (UseVelocityToEnableIV.c)
 *     Feature_KeyboardInputVirtualization__private_ReportDeviceUsage @ 0x1C00CD9D8 (Feature_KeyboardInputVirtualization__private_ReportDeviceUsage.c)
 */

char IsKeyboardIVEnabled()
{
  char v0; // dl

  if ( UseVelocityToEnableIV() )
  {
    Feature_KeyboardInputVirtualization__private_ReportDeviceUsage();
    return 1;
  }
  if ( isChildPartition() && byte_1C02595D1 != v0 )
    return 1;
  return v0;
}
