/*
 * XREFs of imp_WdfDeviceAssignS0IdleSettings @ 0x1C0032030
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_DDd @ 0x1C0017C28 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C0074544 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 */

int __fastcall imp_WdfDeviceAssignS0IdleSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *Settings)
{
  unsigned __int8 v5; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  FxPkgPnp *m_PkgPnp; // r8
  unsigned __int16 v8; // r9
  int _a2; // ebx
  unsigned int v10; // r8d
  unsigned int Size; // ecx
  _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps; // edx
  _WDF_TRI_STATE PowerUpIdleDeviceOnSystemWake; // eax
  unsigned __int16 v14; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !Settings )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    Size = Settings->Size;
    if ( ((Settings->Size - 24) & 0xFFFFFFF3) != 0 || Size == 32 )
    {
      _a2 = -1073741820;
      WPP_IFR_SF_DDd(m_Globals, v5, 0x12u, 0xCu, WPP_FxDeviceApi_cpp_Traceguids, 36, Size, -1073741820);
      return _a2;
    }
    if ( (unsigned int)(Settings->DxState - 2) > 3
      || (IdleCaps = Settings->IdleCaps, (unsigned int)(IdleCaps - 1) > 2)
      || (unsigned int)(Settings->UserControlOfIdleSettings - 1) > 1
      || Settings->Enabled > (unsigned int)WdfUseDefault )
    {
      v14 = 13;
      goto LABEL_17;
    }
    if ( Size > 0x18 )
    {
      PowerUpIdleDeviceOnSystemWake = Settings->PowerUpIdleDeviceOnSystemWake;
      if ( (unsigned int)PowerUpIdleDeviceOnSystemWake > WdfUseDefault )
      {
        v14 = 14;
        goto LABEL_17;
      }
      if ( IdleCaps != IdleCannotWakeFromS0 && PowerUpIdleDeviceOnSystemWake != WdfUseDefault )
      {
        v14 = 15;
LABEL_17:
        _a2 = -1073741811;
        WPP_IFR_SF_D(m_Globals, 2u, 0x12u, v14, WPP_FxDeviceApi_cpp_Traceguids, 0xC000000D);
        return _a2;
      }
    }
    if ( Size <= 0x1C || Settings->IdleTimeoutType <= SystemManagedIdleTimeoutWithHint )
      return FxPkgPnp::PowerPolicySetS0IdleSettings(m_PkgPnp, Settings);
    v8 = 16;
    _a2 = -1073741811;
    v10 = 18;
    goto LABEL_5;
  }
  v8 = 11;
  _a2 = -1073741808;
  v10 = 12;
LABEL_5:
  WPP_IFR_SF_qd(m_Globals, 2u, v10, v8, WPP_FxDeviceApi_cpp_Traceguids, Device, _a2);
  return _a2;
}
