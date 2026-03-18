/*
 * XREFs of IsTouchIVEnabled @ 0x1C01F0DB4
 * Callers:
 *     RIMChildInputTypeIsVirtualized @ 0x1C00C1E80 (RIMChildInputTypeIsVirtualized.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01BFDA0 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C0038478 (UseVelocityToEnableIV.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

char IsTouchIVEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( UseVelocityToEnableIV() )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_TouchInputVirtualization__private_reporting,
      18789657LL,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_Vail_logged_traits,
      1,
      3);
  }
  else if ( !isChildPartition() || !byte_1C02A0543 )
  {
    return 0;
  }
  return v0;
}
