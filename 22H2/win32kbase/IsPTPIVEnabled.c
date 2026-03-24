/*
 * XREFs of IsPTPIVEnabled @ 0x1C00A9B40
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004ABB0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C0056848 (RIMChildInputTypeIsVirtualized.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C0189634 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0190000 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     isChildPartition @ 0x1C00423A0 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C00429C0 (UseVelocityToEnableIV.c)
 *     Feature_PTPInputVirtualization__private_ReportDeviceUsage @ 0x1C00CDC00 (Feature_PTPInputVirtualization__private_ReportDeviceUsage.c)
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
  if ( isChildPartition() && byte_1C02585C0 != v3 )
    return 1;
  return v3;
}
