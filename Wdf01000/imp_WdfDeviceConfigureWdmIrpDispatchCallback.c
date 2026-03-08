/*
 * XREFs of imp_WdfDeviceConfigureWdmIrpDispatchCallback @ 0x1C00324B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_cd @ 0x1C0031714 (WPP_IFR_SF_cd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C00621F0 (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 */

__int64 __fastcall imp_WdfDeviceConfigureWdmIrpDispatchCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFDRIVER__ *Driver,
        unsigned __int8 MajorFunction,
        int (__fastcall *EvtDeviceWdmIrpDispatch)(WDFDEVICE__ *, unsigned __int8, unsigned __int8, unsigned int, void *, _IRP *, void *),
        void *DriverContext)
{
  int v7; // ebp
  _LIST_ENTRY *Flink; // rbx
  FxDevice *v9; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int v11; // ebx
  unsigned __int16 v12; // r9
  FxDriver *pDriver; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDevice *pDevice; // [rsp+60h] [rbp+8h] BYREF

  pDevice = 0LL;
  v7 = MajorFunction;
  Flink = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  v9 = pDevice;
  m_Globals = pDevice->m_Globals;
  if ( v7 == 3 || v7 == 4 || (unsigned int)(v7 - 14) < 2 )
  {
    if ( Driver )
    {
      pDriver = 0LL;
      FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
      v9 = pDevice;
      Flink = pDevice->m_CxDeviceInfoListHead.Flink;
      if ( Flink == &pDevice->m_CxDeviceInfoListHead )
      {
LABEL_9:
        Flink = 0LL;
      }
      else
      {
        while ( (FxDriver *)Flink[1].Flink != pDriver )
        {
          Flink = Flink->Flink;
          if ( Flink == &pDevice->m_CxDeviceInfoListHead )
            goto LABEL_9;
        }
      }
    }
    if ( !EvtDeviceWdmIrpDispatch )
      FxVerifierNullBugCheck(m_Globals, retaddr);
    if ( v9->m_Legacy )
    {
      if ( (v9->m_DeviceObject.m_DeviceObject->Flags & 0x80u) == 0 )
      {
        v11 = -1073741436;
        v12 = 61;
LABEL_15:
        WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, v12, WPP_FxDeviceApi_cpp_Traceguids, v9, -1073741436);
        return v11;
      }
    }
    else if ( v9->m_CurrentPnpState != WdfDevStatePnpInit )
    {
      v11 = -1073741436;
      v12 = 62;
      goto LABEL_15;
    }
    return (unsigned int)FxPkgIo::ConfigureDynamicDispatching(
                           v9->m_PkgIo,
                           v7,
                           (FxCxDeviceInfo *)Flink,
                           EvtDeviceWdmIrpDispatch,
                           DriverContext);
  }
  v11 = -1073741811;
  WPP_IFR_SF_cd(m_Globals, v7 - 14, 0xCu, 0x3Cu, WPP_FxDeviceApi_cpp_Traceguids, v7);
  return v11;
}
