/*
 * XREFs of imp_WdfUsbInterfaceGetEndpointInformation @ 0x1C0057BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0017C28 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C005EFD0 (-GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 */

void __fastcall imp_WdfUsbInterfaceGetEndpointInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        unsigned __int8 SettingIndex,
        unsigned __int8 EndpointIndex,
        _WDF_USB_PIPE_INFORMATION *EndpointInfo)
{
  unsigned __int8 v7; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxUsbInterface *pUsbInterface; // [rsp+50h] [rbp+8h] BYREF

  pUsbInterface = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbInterface,
    0x1204u,
    (void **)&pUsbInterface);
  m_Globals = pUsbInterface->m_Globals;
  if ( !EndpointInfo )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( EndpointInfo->Size == 20 )
  {
    FxUsbInterface::GetEndpointInformation(pUsbInterface, SettingIndex, EndpointIndex, EndpointInfo);
  }
  else
  {
    WPP_IFR_SF_DDd(m_Globals, v7, 0xEu, 0xDu, WPP_FxUsbInterfaceAPI_cpp_Traceguids, EndpointInfo->Size, 20, -1073741820);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
