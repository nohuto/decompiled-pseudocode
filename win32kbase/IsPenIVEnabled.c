/*
 * XREFs of IsPenIVEnabled @ 0x1C008B9C0
 * Callers:
 *     RIMInitialize @ 0x1C008B310 (RIMInitialize.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01EB57C (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01F3D8C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     isChildPartition @ 0x1C0078FF0 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C008BA44 (UseVelocityToEnableIV.c)
 *     Feature_PenInputVirtualization__private_ReportDeviceUsage @ 0x1C00E12C0 (Feature_PenInputVirtualization__private_ReportDeviceUsage.c)
 */

char IsPenIVEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( (unsigned __int8)UseVelocityToEnableIV() )
  {
    Feature_PenInputVirtualization__private_ReportDeviceUsage();
    return 1;
  }
  if ( isChildPartition() && byte_1C02D86F3 )
    return 1;
  return v0;
}
