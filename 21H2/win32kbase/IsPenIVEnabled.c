/*
 * XREFs of IsPenIVEnabled @ 0x1C01BA73C
 * Callers:
 *     RIMChildInputTypeIsVirtualized @ 0x1C0055848 (RIMChildInputTypeIsVirtualized.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C0189704 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01900D0 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     isChildPartition @ 0x1C0040F30 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C0041550 (UseVelocityToEnableIV.c)
 *     Feature_PenInputVirtualization__private_ReportDeviceUsage @ 0x1C00CDB04 (Feature_PenInputVirtualization__private_ReportDeviceUsage.c)
 */

char IsPenIVEnabled()
{
  char v0; // dl

  if ( UseVelocityToEnableIV() )
  {
    Feature_PenInputVirtualization__private_ReportDeviceUsage();
    return 1;
  }
  if ( isChildPartition() && byte_1C02595C1 != v0 )
    return 1;
  return v0;
}
