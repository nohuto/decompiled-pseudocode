void __fastcall imp_WdfDeviceSetPowerCapabilities(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_POWER_CAPABILITIES *PowerCapabilities)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int v6; // edx
  unsigned __int8 *p_Offset; // r8
  __int64 v8; // rcx
  int v9; // r10d
  unsigned int v10; // ecx
  _DEVICE_POWER_STATE *DeviceState; // rax
  unsigned int _a2; // eax
  FxPkgPnp *m_PkgPnp; // rcx
  unsigned __int16 v14; // r9
  _DEVICE_POWER_STATE IdealDxStateForSx; // edx
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !PowerCapabilities )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  if ( PowerCapabilities->Size == 80 )
  {
    v6 = 0;
    p_Offset = &offsets_0[0].Offset;
    while ( 1 )
    {
      v8 = *p_Offset;
      if ( (unsigned __int64)(v8 + 4) > 0x50 )
        break;
      v9 = *(unsigned int *)((char *)&PowerCapabilities->Size + v8);
      if ( v9 && (unsigned int)(v9 - 1) > 1 )
      {
        WPP_IFR_SF_qsd(m_Globals, v6, (unsigned int)p_Offset, 0x2Bu, traceGuid, Device, offsets_0[v6].Name, v9);
        goto LABEL_26;
      }
      ++v6;
      p_Offset += 16;
      if ( v6 >= 6 )
      {
        v10 = 0;
        DeviceState = PowerCapabilities->DeviceState;
        do
        {
          if ( *DeviceState > (unsigned int)PowerDeviceMaximum )
          {
            WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x2Cu, WPP_FxDeviceApi_cpp_Traceguids, Device);
            goto LABEL_26;
          }
          ++v10;
          ++DeviceState;
        }
        while ( v10 < 7 );
        _a2 = PowerCapabilities->DeviceWake;
        if ( _a2 > 5 )
        {
          v14 = 45;
          goto LABEL_18;
        }
        _a2 = PowerCapabilities->SystemWake;
        if ( _a2 > 7 )
        {
          v14 = 46;
          goto LABEL_18;
        }
        m_PkgPnp = pDevice->m_PkgPnp;
        if ( !m_PkgPnp->m_PowerPolicyMachine.m_Owner )
        {
          _a2 = PowerCapabilities->IdealDxStateForSx;
          if ( _a2 != 5 )
          {
            v14 = 47;
LABEL_18:
            WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, v14, WPP_FxDeviceApi_cpp_Traceguids, Device, _a2);
            goto LABEL_26;
          }
        }
        IdealDxStateForSx = PowerCapabilities->IdealDxStateForSx;
        if ( (unsigned int)(IdealDxStateForSx - 2) <= 3 )
        {
          FxPkgPnp::SetPowerCaps(m_PkgPnp, PowerCapabilities);
          return;
        }
        WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x30u, WPP_FxDeviceApi_cpp_Traceguids, Device, IdealDxStateForSx);
        goto LABEL_26;
      }
    }
  }
  else
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0x12u, 0x2Au, WPP_FxDeviceApi_cpp_Traceguids, Device, PowerCapabilities->Size, 0x50u);
LABEL_26:
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
