/*
 * XREFs of IsKeyboardIVEnabled @ 0x1C0006EF4
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C0005F10 (NtMITSynthesizeKeyboardInput.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C00C1E80 (RIMChildInputTypeIsVirtualized.c)
 * Callees:
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C0038478 (UseVelocityToEnableIV.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

char IsKeyboardIVEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( (unsigned __int8)UseVelocityToEnableIV() )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_KeyboardInputVirtualization__private_reporting,
      18837801LL,
      0LL,
      0LL,
      &Feature_KeyboardInputVirtualization_logged_traits,
      1,
      3);
  }
  else if ( !(unsigned __int8)isChildPartition() || !byte_1C02A0542 )
  {
    return 0;
  }
  return v0;
}
