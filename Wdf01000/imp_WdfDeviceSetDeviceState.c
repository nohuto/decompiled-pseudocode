/*
 * XREFs of imp_WdfDeviceSetDeviceState @ 0x1C0033370
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C00207E8 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_qdd @ 0x1C0026A80 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qsd @ 0x1C0031AC8 (WPP_IFR_SF_qsd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?SetPnpState@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_STATE@@@Z @ 0x1C0075D68 (-SetPnpState@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_STATE@@@Z.c)
 */

void __fastcall imp_WdfDeviceSetDeviceState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_STATE *DeviceState)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 _a2; // r10
  unsigned int v7; // edx
  unsigned __int8 *p_Offset; // r8
  __int64 v9; // r9
  int v10; // ecx
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !DeviceState )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  _a2 = DeviceState->Size;
  if ( (((_DWORD)_a2 - 28) & 0xFFFFFFFB) != 0 )
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0x12u, 0x17u, WPP_FxDeviceApi_cpp_Traceguids, Device, _a2, 0x20u);
LABEL_5:
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    v7 = 0;
    p_Offset = &offsets_1[0].Offset;
    while ( 1 )
    {
      v9 = *p_Offset;
      if ( (unsigned __int64)(v9 + 4) > 0x20 )
        break;
      if ( v9 + 4 <= _a2 )
      {
        v10 = *(unsigned int *)((char *)&DeviceState->Size + v9);
        if ( v10 && (unsigned int)(v10 - 1) > 1 )
        {
          WPP_IFR_SF_qsd(
            m_Globals,
            v7,
            (unsigned int)p_Offset,
            0x18u,
            traceGuid,
            Device,
            offsets_1[v7].Name,
            *(unsigned int *)((char *)&DeviceState->Size + v9));
          goto LABEL_5;
        }
        ++v7;
        p_Offset += 16;
        if ( v7 < 7 )
          continue;
      }
      FxPkgPnp::SetPnpState(pDevice->m_PkgPnp, DeviceState);
      SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(pDevice);
      if ( SafePhysicalDevice )
        IoInvalidateDeviceState(SafePhysicalDevice);
      return;
    }
  }
}
