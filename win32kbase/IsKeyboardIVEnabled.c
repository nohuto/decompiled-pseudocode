/*
 * XREFs of IsKeyboardIVEnabled @ 0x1C008BA18
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C00087B0 (NtMITSynthesizeKeyboardInput.c)
 *     RIMInitialize @ 0x1C008B310 (RIMInitialize.c)
 * Callees:
 *     isChildPartition @ 0x1C0078FF0 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C008BA44 (UseVelocityToEnableIV.c)
 *     Feature_KeyboardInputVirtualization__private_ReportDeviceUsage @ 0x1C00E1194 (Feature_KeyboardInputVirtualization__private_ReportDeviceUsage.c)
 */

char IsKeyboardIVEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( (unsigned __int8)UseVelocityToEnableIV() )
  {
    Feature_KeyboardInputVirtualization__private_ReportDeviceUsage();
    return 1;
  }
  if ( isChildPartition() && byte_1C02D86F1 )
    return 1;
  return v0;
}
