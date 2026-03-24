/*
 * XREFs of IsPTPIVEnabled @ 0x1C00A9640
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0049550 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C0055848 (RIMChildInputTypeIsVirtualized.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C0189704 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01900D0 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     isChildPartition @ 0x1C0040F30 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C0041550 (UseVelocityToEnableIV.c)
 *     Feature_PTPInputVirtualization__private_ReportDeviceUsage @ 0x1C00CDAA0 (Feature_PTPInputVirtualization__private_ReportDeviceUsage.c)
 */

char IsPTPIVEnabled()
{
  char v0; // al
  __int64 v1; // rcx
  __int64 v2; // rdx
  char v3; // dl

  v0 = UseVelocityToEnableIV();
  LOBYTE(v2) = 0;
  if ( v0 )
  {
    Feature_PTPInputVirtualization__private_ReportDeviceUsage(v1, v2);
    return 1;
  }
  if ( isChildPartition() && byte_1C02595C2 != v3 )
    return 1;
  return v3;
}
