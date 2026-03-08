/*
 * XREFs of IoAllocateIrp @ 0x140208CF0
 * Callers:
 *     CcSetValidData @ 0x140209160 (CcSetValidData.c)
 *     PopAllocateIrp @ 0x1402BA774 (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x1405C91AC (SmKmIssueVolumeIo.c)
 *     PnpAsynchronousCall @ 0x1406885F8 (PnpAsynchronousCall.c)
 *     WmipSendWmiIrp @ 0x14069CD88 (WmipSendWmiIrp.c)
 *     IopSynchronousCall @ 0x14069DD78 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x1406F6A4C (IopFilterResourceRequirementsCall.c)
 *     CmpGetVolumeClusterSize @ 0x14072EFBC (CmpGetVolumeClusterSize.c)
 *     CmpFileFlushAndPurge @ 0x140731D18 (CmpFileFlushAndPurge.c)
 *     WmipGetFilePDO @ 0x14077437C (WmipGetFilePDO.c)
 *     PopFxRegisterDeviceWorker @ 0x14083714C (PopFxRegisterDeviceWorker.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140847A74 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x14084A820 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x14084BC94 (PopAcquireCoolingInterface.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x1408513D0 (PpIrpAllocateDeviceUsageNotification.c)
 *     WmipSetTraceNotify @ 0x140869620 (WmipSetTraceNotify.c)
 *     IopEjectDevice @ 0x140969DA8 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D5F0C (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x1402B18A4 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1403122C0 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x140ABDCE0 (IovAllocateIrp.c)
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
