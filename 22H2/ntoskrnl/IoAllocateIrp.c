/*
 * XREFs of IoAllocateIrp @ 0x14022E630
 * Callers:
 *     PopAllocateIrp @ 0x14028F314 (PopAllocateIrp.c)
 *     CcSetValidData @ 0x140354824 (CcSetValidData.c)
 *     SmKmIssueVolumeIo @ 0x1405CB65C (SmKmIssueVolumeIo.c)
 *     CmpGetVolumeClusterSize @ 0x14068936C (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrp @ 0x1406C7448 (WmipSendWmiIrp.c)
 *     CmpFileFlushAndPurge @ 0x1407510D4 (CmpFileFlushAndPurge.c)
 *     IopSynchronousCall @ 0x1407688B4 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140790740 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x1407954A4 (PnpAsynchronousCall.c)
 *     WmipGetFilePDO @ 0x1407C3F1C (WmipGetFilePDO.c)
 *     PopFxRegisterDeviceWorker @ 0x1408381FC (PopFxRegisterDeviceWorker.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x14084A0E4 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x14084DFB0 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x14084F044 (PopAcquireCoolingInterface.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x140854C40 (PpIrpAllocateDeviceUsageNotification.c)
 *     WmipSetTraceNotify @ 0x14086C250 (WmipSetTraceNotify.c)
 *     IopEjectDevice @ 0x14096CDC8 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D8DAC (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x14022EFC0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14028FCA0 (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140AC1CE0 (IovAllocateIrp.c)
 */

PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return (PIRP)IopAllocateIrpPrivate(0LL, (unsigned __int8)StackSize, ChargeQuota);
  if ( IopDispatchAllocateIrp == 2 || ViVerifyAllDrivers != 1 )
    return (PIRP)IopAllocateIrpWithExtension(StackSize, (unsigned __int8)StackSize, ChargeQuota);
  return (PIRP)IovAllocateIrp(0LL, (unsigned __int8)StackSize, ChargeQuota, retaddr);
}
