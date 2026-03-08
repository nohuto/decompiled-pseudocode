/*
 * XREFs of imp_WdfDeviceSetFailed @ 0x1C00334D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1C0075A7C (-SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z.c)
 */

void __fastcall imp_WdfDeviceSetFailed(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        unsigned __int32 FailedAction)
{
  _FX_DRIVER_GLOBALS *v3; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  pDevice = 0LL;
  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( FailedAction - 1 > 1 )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0x23u, WPP_FxDeviceApi_cpp_Traceguids, FailedAction);
    FxVerifierDbgBreakPoint(pDevice->m_Globals);
  }
  else
  {
    WPP_IFR_SF_qid(
      m_Globals,
      4u,
      0x12u,
      0x24u,
      WPP_FxDeviceApi_cpp_Traceguids,
      Device,
      (__int64)pDevice->m_DeviceObject.m_DeviceObject,
      FailedAction);
    FxPkgPnp::SetDeviceFailed(pDevice->m_PkgPnp, v3, (_WDF_DEVICE_FAILED_ACTION)FailedAction);
  }
}
