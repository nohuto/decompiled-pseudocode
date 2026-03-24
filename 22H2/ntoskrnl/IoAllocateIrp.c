/*
 * XREFs of IoAllocateIrp @ 0x1403616C0
 * Callers:
 *     CcSetValidData @ 0x1403615C4 (CcSetValidData.c)
 *     PopAllocateIrp @ 0x1403707A0 (PopAllocateIrp.c)
 *     SmKmIssueVolumeIo @ 0x14059DEE4 (SmKmIssueVolumeIo.c)
 *     CmpFileFlushAndPurge @ 0x14071D008 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x14071D1A8 (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x14071D3C0 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140750270 (IopFilterResourceRequirementsCall.c)
 *     WmipSendWmiIrp @ 0x140756D0C (WmipSendWmiIrp.c)
 *     PnpAsynchronousCall @ 0x14076872C (PnpAsynchronousCall.c)
 *     WmipSetTraceNotify @ 0x140780C58 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x14078D304 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x14079AE50 (PopAcquireCoolingInterface.c)
 *     PopFxRegisterDeviceWorker @ 0x1407B531C (PopFxRegisterDeviceWorker.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407C1DF4 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x1407C4B28 (PopConnectToPolicyDevice.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x1407C9EAC (PpIrpAllocateDeviceUsageNotification.c)
 *     IopEjectDevice @ 0x1408B2A10 (IopEjectDevice.c)
 *     SmKmIsVolumeIoPossible @ 0x14092B644 (SmKmIsVolumeIoPossible.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x1402D2220 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x1402E5F20 (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x1409C47B0 (IovAllocateIrp.c)
 */

// local variable allocation has failed, the output may be wrong!
PIRP __stdcall IoAllocateIrp(CCHAR StackSize, BOOLEAN ChargeQuota)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return (PIRP)IopAllocateIrpPrivate(0LL, StackSize, ChargeQuota);
  if ( IopDispatchAllocateIrp == 2 )
    return (PIRP)IopAllocateIrpWithExtension(StackSize, StackSize, ChargeQuota);
  return (PIRP)IovAllocateIrp(0LL, StackSize, ChargeQuota, retaddr);
}
