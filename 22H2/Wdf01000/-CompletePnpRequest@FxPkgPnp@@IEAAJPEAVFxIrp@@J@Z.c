/*
 * XREFs of ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0004B54
 * Callers:
 *     ?PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004568 (-PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004A78 (-PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpQueryId@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0018760 (-_PnpQueryId@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?FireAndForgetIrp@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C0079060 (-FireAndForgetIrp@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C00796E0 (-ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpCompleteIrp@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0079840 (-_PnpCompleteIrp@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0079860 (-_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryBusInformation@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0079920 (-_PnpQueryBusInformation@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryDeviceText@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0079970 (-_PnpQueryDeviceText@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0079AD0 (-_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0079B10 (-_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpSetLock@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0079C00 (-_PnpSetLock@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_QueryCapsWorkItem@FxPkgPdo@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0079CC0 (-_QueryCapsWorkItem@FxPkgPdo@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C007B4AC (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C00810DC (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0084370 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 *     ?_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0084A80 (-_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0084B50 (-_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C008A7DC (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C008A9B0 (-PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpFilterResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C008AB60 (-_PnpFilterResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C008BFF8 (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C008C450 (-_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::CompletePnpRequest(FxPkgPnp *this, FxIrp *Irp, unsigned int Status)
{
  _IRP *m_Irp; // rsi

  m_Irp = Irp->m_Irp;
  Irp->m_Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp->m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return Status;
}
