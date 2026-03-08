/*
 * XREFs of ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C0083C28
 * Callers:
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B820 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C00839D0 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C0083BF0 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     ?PoxRegisterDevice@FxPoxInterface@@AEAAJXZ @ 0x1C0084378 (-PoxRegisterDevice@FxPoxInterface@@AEAAJXZ.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C008485C (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

__int64 __fastcall FxPoxInterface::InitializeComponents(FxPoxInterface *this)
{
  int _a3; // edi
  const void *_a1; // rax
  __int64 v5; // r8
  __int64 v6; // r10
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 (__fastcall *v10)(unsigned __int64, POHANDLE__ *); // r8
  const void *ObjectHandleUnchecked; // rax
  __int64 v12; // rdx
  __int64 v13; // r10
  void (__fastcall *EvtDeviceWdmPrePoFxUnregisterDevice)(WDFDEVICE__ *, POHANDLE__ *); // rax

  if ( (this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) == 0 )
    return 0LL;
  if ( this->m_DevicePowerRequirementMachine
    || (_a3 = FxPoxInterface::CreateDevicePowerRequirementMachine(this), _a3 >= 0) )
  {
    _a3 = FxPoxInterface::PoxRegisterDevice(this);
    if ( _a3 >= 0 )
    {
      PoFxActivateComponent(this->m_PoHandle, 0LL, 0LL);
      PoFxStartDevicePowerManagement(this->m_PoHandle);
      PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(this);
      v8 = PowerFrameworkSettings;
      if ( PowerFrameworkSettings
        && PowerFrameworkSettings->EvtDeviceWdmPostPoFxRegisterDevice
        && (v9 = FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase),
            _a3 = v10(v9, this->m_PoHandle),
            _a3 < 0) )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
        WPP_IFR_SF_qid(
          *(_FX_DRIVER_GLOBALS **)(v13 + 16),
          2u,
          0xCu,
          0xEu,
          WPP_PoxInterface_cpp_Traceguids,
          ObjectHandleUnchecked,
          *(_QWORD *)(v12 + 144),
          _a3);
        EvtDeviceWdmPrePoFxUnregisterDevice = v8->EvtDeviceWdmPrePoFxUnregisterDevice;
        if ( EvtDeviceWdmPrePoFxUnregisterDevice )
          EvtDeviceWdmPrePoFxUnregisterDevice((WDFDEVICE__ *)v9, this->m_PoHandle);
        PoFxUnregisterDevice(this->m_PoHandle);
      }
      else
      {
        FxDevicePwrRequirementMachine::ProcessEvent(this->m_DevicePowerRequirementMachine, DprEventRegisteredWithPox);
      }
    }
    else
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
      WPP_IFR_SF_qid(
        *(_FX_DRIVER_GLOBALS **)(v6 + 16),
        2u,
        0xCu,
        0xDu,
        WPP_PoxInterface_cpp_Traceguids,
        _a1,
        *(_QWORD *)(v5 + 144),
        _a3);
    }
  }
  return (unsigned int)_a3;
}
