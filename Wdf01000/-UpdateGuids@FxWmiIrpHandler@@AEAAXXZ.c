/*
 * XREFs of ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C002A79C
 * Callers:
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C00281CC (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C0028554 (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C002862C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0029BA0 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?_UpdateGuids@FxWmiIrpHandler@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C002B4A0 (-_UpdateGuids@FxWmiIrpHandler@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ @ 0x1C00283B8 (-DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ.c)
 */

void __fastcall FxWmiIrpHandler::UpdateGuids(FxWmiIrpHandler *this)
{
  NTSTATUS _a2; // ecx

  _a2 = IoWMIRegistrationControl(this->m_DeviceBase->m_DeviceObject.m_DeviceObject, 4u);
  if ( _a2 < 0 )
    WPP_IFR_SF_qd(
      this->m_Globals,
      2u,
      0xDu,
      0xCu,
      WPP_FxWmiIrpHandler_cpp_Traceguids,
      this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
      _a2);
  FxWmiIrpHandler::DecrementUpdateCount(this);
}
