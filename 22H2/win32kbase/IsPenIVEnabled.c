/*
 * XREFs of IsPenIVEnabled @ 0x1C01BA66C
 * Callers:
 *     RIMChildInputTypeIsVirtualized @ 0x1C0056848 (RIMChildInputTypeIsVirtualized.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C0189634 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0190000 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     isChildPartition @ 0x1C00423A0 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C00429C0 (UseVelocityToEnableIV.c)
 *     Feature_PenInputVirtualization__private_ReportDeviceUsage @ 0x1C00CDC64 (Feature_PenInputVirtualization__private_ReportDeviceUsage.c)
 */

char IsPenIVEnabled()
{
  char v0; // dl

  if ( UseVelocityToEnableIV() )
  {
    Feature_PenInputVirtualization__private_ReportDeviceUsage();
    return 1;
  }
  if ( isChildPartition() && byte_1C02585DB != v0 )
    return 1;
  return v0;
}
