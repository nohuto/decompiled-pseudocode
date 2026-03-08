/*
 * XREFs of ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C006B6BC
 * Callers:
 *     ?PnpEventFailedInit@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006A640 (-PnpEventFailedInit@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventFailedPowerPolicyRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006A6E0 (-PnpEventFailedPowerPolicyRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventFailedStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006A790 (-PnpEventFailedStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventFailedSurpriseRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006A7C0 (-PnpEventFailedSurpriseRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventInitSurpriseRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006AAE0 (-PnpEventInitSurpriseRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovedPdoSurpriseRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006B280 (-PnpEventRemovedPdoSurpriseRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006B450 (-PnpEventStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006B510 (-PnpEventStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C006C04C (-PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C000927C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 */

void __fastcall FxPkgPnp::PnpFinishProcessingIrp(FxPkgPnp *this, unsigned __int8 IrpMustBePresent)
{
  _IRP *m_PendingPnPIrp; // rdx
  unsigned int Status; // r8d
  FxIrp irp; // [rsp+30h] [rbp+8h] BYREF

  m_PendingPnPIrp = this->m_PendingPnPIrp;
  if ( m_PendingPnPIrp )
  {
    if ( m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation->MinorFunction && m_PendingPnPIrp->IoStatus.Status >= 0 )
    {
      this->m_PnpMachine.m_FireAndForget = 1;
    }
    else
    {
      this->m_PendingPnPIrp = 0LL;
      Status = m_PendingPnPIrp->IoStatus.Status;
      irp.m_Irp = m_PendingPnPIrp;
      FxPkgPnp::CompletePnpRequest(this, &irp, Status);
    }
  }
}
