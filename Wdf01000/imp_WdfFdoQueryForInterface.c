/*
 * XREFs of imp_WdfFdoQueryForInterface @ 0x1C0022220
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C003B79C (-QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfFdoQueryForInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Fdo,
        const _GUID *InterfaceType,
        _INTERFACE *Interface,
        unsigned __int16 Size,
        unsigned __int16 Version,
        void *InterfaceSpecificData)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  FxQueryInterfaceParams params; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+18h]
  FxDeviceBase *pDeviceBase; // [rsp+70h] [rbp+20h] BYREF
  FxDevice *pDevice; // [rsp+80h] [rbp+30h] BYREF

  pDeviceBase = 0LL;
  pDevice = 0LL;
  params.Object = (void **)&pDevice;
  params.Type = 4098;
  *(_DWORD *)&params.Offset = 0;
  *(&params.Offset + 2) = 0;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Fdo, 0x1030u, (void **)&pDeviceBase);
  m_Globals = pDeviceBase->m_Globals;
  pDevice = 0LL;
  if ( !InterfaceType )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !Interface )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
  {
    if ( pDeviceBase->QueryInterface(pDeviceBase, &params) < 0
      || !pDevice->m_Legacy && pDevice->m_PkgPnp->m_Type == 4353 )
    {
      return FxDeviceBase::QueryForInterface(
               pDeviceBase,
               InterfaceType,
               Interface,
               Size,
               Version,
               InterfaceSpecificData,
               0LL);
    }
    else
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x10u, WPP_FxDeviceFdoAPI_cpp_Traceguids, Fdo, -1073741811);
      return -1073741811;
    }
  }
  return result;
}
