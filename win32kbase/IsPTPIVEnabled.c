/*
 * XREFs of IsPTPIVEnabled @ 0x1C008B994
 * Callers:
 *     RIMInitialize @ 0x1C008B310 (RIMInitialize.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01EB57C (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01F3D8C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C022F50C (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     isChildPartition @ 0x1C0078FF0 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C008BA44 (UseVelocityToEnableIV.c)
 *     Feature_PTPInputVirtualization__private_ReportDeviceUsage @ 0x1C00E125C (Feature_PTPInputVirtualization__private_ReportDeviceUsage.c)
 */

char IsPTPIVEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( (unsigned __int8)UseVelocityToEnableIV() )
  {
    Feature_PTPInputVirtualization__private_ReportDeviceUsage();
    return 1;
  }
  if ( isChildPartition() && byte_1C02D86F2 )
    return 1;
  return v0;
}
