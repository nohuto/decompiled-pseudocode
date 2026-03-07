__int64 __fastcall FxPkgPnp::PnpEventRestartReleaseHardware(FxPkgPnp *This)
{
  int v2; // edi
  FxDeviceBase *m_DeviceBase; // rcx
  __int64 result; // rax

  v2 = FxPkgPnp::PnpReleaseHardware(This);
  if ( v2 >= 0 )
    return This->PnpSendStartDeviceDownTheStackOverload(This) != 0 ? 307 : 314;
  m_DeviceBase = This->m_DeviceBase;
  This->m_InternalFailure = 1;
  IoInvalidateDeviceState(m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
  result = 299LL;
  This->m_PendingPnPIrp->IoStatus.Status = v2;
  return result;
}
