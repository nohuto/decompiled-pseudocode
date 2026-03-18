/*
 * XREFs of ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C00402B4
 * Callers:
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C003E07C (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C003E404 (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C003E4DC (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C003F9C8 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?_UpdateGuids@FxWmiIrpHandler@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0040E80 (-_UpdateGuids@FxWmiIrpHandler@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ @ 0x1C003E268 (-DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ.c)
 */

void __fastcall FxWmiIrpHandler::UpdateGuids(FxWmiIrpHandler *this)
{
  NTSTATUS _a2; // ecx

  _a2 = IoWMIRegistrationControl(this->m_DeviceBase->m_DeviceObject.m_DeviceObject, 4u);
  if ( _a2 < 0 )
    WPP_IFR_SF_qL(
      this->m_Globals,
      2u,
      0xDu,
      0xCu,
      WPP_FxWmiIrpHandler_cpp_Traceguids,
      this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
      _a2);
  FxWmiIrpHandler::DecrementUpdateCount(this);
}
