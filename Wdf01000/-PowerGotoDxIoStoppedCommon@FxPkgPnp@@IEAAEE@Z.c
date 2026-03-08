/*
 * XREFs of ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x1C006EDF4
 * Callers:
 *     ?PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006EC90 (-PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006ECC0 (-PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006EDA0 (-PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006EDD0 (-PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C000FEF8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     WPP_IFR_SF_qqLd @ 0x1C00581F8 (WPP_IFR_SF_qqLd.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C006CAB8 (-Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@.c)
 *     ?GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA?AW4_WDF_POWER_DEVICE_STATE@@XZ @ 0x1C006DD80 (-GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA-AW4_WDF_POWER_DEVICE_STAT.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C006FB28 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C006FCDC (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C0073524 (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0081E40 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerGotoDxIoStoppedCommon(FxPkgPnp *this, unsigned __int8 NonPageable)
{
  char v4; // bp
  _WDF_POWER_DEVICE_STATE _a4; // esi
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v7; // r8
  const void *_a2; // rax
  __int64 v9; // rdx
  int v10; // r8d
  const _GUID *_a1; // r10
  WDFDEVICE__ *v12; // rax
  const void *v13; // rax
  __int64 v14; // rdx
  int v15; // r10d
  unsigned int v16; // edx
  char v17; // bl
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v21; // rdx

  v4 = 0;
  _a4 = (unsigned int)FxPkgPnp::GetTargetDevicePowerStateFromPendingDevicePowerDownIrp(this);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  *(_QWORD *)(v7 + 24) = ObjectHandleUnchecked;
  *(_DWORD *)(v7 + 32) = _a4;
  if ( (int)FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v7) < 0 )
  {
    v4 = 1;
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqLd(this->m_Globals, v9, 0xCu, 0x16u, _a1, _a2, *(const void **)(v9 + 144), _a4, v10);
  }
  if ( !FxPkgPnp::PowerDmaPowerDown(this) )
    v4 = 1;
  v12 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  if ( (int)FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(&this->m_DeviceD0ExitPreInterruptsDisabled, v12, _a4) < 0 )
  {
    v4 = 1;
    v13 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      *(_QWORD *)(v14 + 144),
      0xCu,
      0x17u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v13,
      *(const void **)(v14 + 144),
      _a4,
      v15);
  }
  if ( NonPageable )
  {
    v16 = 1;
  }
  else
  {
    v16 = 16;
    if ( this->m_SharedPower.m_WaitWakeIrp || this->m_WakeInterruptsKeepConnected == 1 )
    {
      v16 = 80;
      this->m_WakeInterruptsKeepConnected = 0;
    }
  }
  v17 = v4;
  if ( FxPkgPnp::NotifyResourceObjectsDx(this, v16) < 0 )
    v17 = 1;
  v18 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  *(_QWORD *)(v19 + 32) = v18;
  *(_DWORD *)(v19 + 40) = _a4;
  if ( (int)FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v19) < 0 )
    v17 = 1;
  this->PowerParentPowerDereference(this);
  FxPkgPnp::PowerSetDevicePowerState(this, _a4);
  if ( this->m_PowerMachine.m_IoCallbackFailure )
  {
    this->m_PowerMachine.m_IoCallbackFailure = 0;
LABEL_19:
    this->m_PowerMachine.m_PowerDownFailure = 1;
    return 0;
  }
  if ( v17 )
    goto LABEL_19;
  FxPkgPnp::PowerSendPowerDownEvents(this, FxPowerDownTypeExplicit);
  LOBYTE(v21) = 1;
  this->PowerReleasePendingDeviceIrp(this, v21);
  return 1;
}
