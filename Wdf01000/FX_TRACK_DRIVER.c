/*
 * XREFs of FX_TRACK_DRIVER @ 0x1C0006D3C
 * Callers:
 *     ?WorkItemHandler@FxWorkItem@@AEAAXXZ @ 0x1C0005A28 (-WorkItemHandler@FxWorkItem@@AEAAXXZ.c)
 *     ?WorkItemHandler@FxSystemWorkItem@@AEAAXXZ @ 0x1C0006BE0 (-WorkItemHandler@FxSystemWorkItem@@AEAAXXZ.c)
 *     ?DpcHandler@FxInterrupt@@QEAAXPEAX0@Z @ 0x1C0006CE4 (-DpcHandler@FxInterrupt@@QEAAXPEAX0@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0006D6C (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?Dispatch@FxPkgPnp@@MEAAJPEAU_IRP@@@Z @ 0x1C00079C0 (-Dispatch@FxPkgPnp@@MEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C000D160 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?DpcHandler@FxDpc@@QEAAXPEAU_KDPC@@PEAX1@Z @ 0x1C002323C (-DpcHandler@FxDpc@@QEAAXPEAU_KDPC@@PEAX1@Z.c)
 *     ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C002A310 (-Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 *     ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C00802A4 (-WorkItemHandler@FxInterrupt@@QEAAXXZ.c)
 *     ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C008124C (-EventQueueWorker@FxEventQueue@@IEAAXXZ.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0085470 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FX_TRACK_DRIVER(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  if ( FxDriverGlobals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C009FEF8.m_DriverUsage->FxDriverGlobals
                                    + stru_1C009FEF8.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = FxDriverGlobals;
}
