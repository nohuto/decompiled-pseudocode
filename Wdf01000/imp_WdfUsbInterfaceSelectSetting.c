/*
 * XREFs of imp_WdfUsbInterfaceSelectSetting @ 0x1C0057D80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_DDd @ 0x1C0017C28 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C005F080 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C005F404 (-SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_D.c)
 *     ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C005F550 (-SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z.c)
 */

__int64 __fastcall imp_WdfUsbInterfaceSelectSetting(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS *Params)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  unsigned __int8 v8; // dl
  unsigned int _a2; // ecx
  unsigned int v10; // ebx
  _USB_INTERFACE_DESCRIPTOR *v11; // rax
  _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor; // r8
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxUsbInterface *pUsbInterface; // [rsp+50h] [rbp+8h] BYREF

  pUsbInterface = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbInterface,
    0x1204u,
    (void **)&pUsbInterface);
  m_Globals = pUsbInterface->m_Globals;
  if ( !Params )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    _a2 = Params->Size;
    if ( Params->Size != 16 )
    {
      v10 = -1073741820;
      WPP_IFR_SF_DDd(m_Globals, v8, 0xEu, 0xAu, WPP_FxUsbInterfaceAPI_cpp_Traceguids, _a2, 16, -1073741820);
      return v10;
    }
    result = FxValidateObjectAttributes(m_Globals, PipesAttributes, 1);
    if ( (int)result < 0 )
      return result;
    switch ( Params->Type )
    {
      case WdfUsbInterfaceSelectSettingTypeDescriptor:
        InterfaceDescriptor = Params->Types.Descriptor.InterfaceDescriptor;
        if ( !InterfaceDescriptor )
        {
          v10 = -1073741811;
          WPP_IFR_SF_D(m_Globals, 2u, 0xEu, 0xBu, WPP_FxUsbInterfaceAPI_cpp_Traceguids, 0xC000000D);
          return v10;
        }
        return (unsigned int)FxUsbInterface::SelectSettingByDescriptor(
                               pUsbInterface,
                               PipesAttributes,
                               InterfaceDescriptor);
      case WdfUsbInterfaceSelectSettingTypeSetting:
        return (unsigned int)FxUsbInterface::SelectSettingByIndex(
                               pUsbInterface,
                               PipesAttributes,
                               Params->Types.Interface.SettingIndex);
      case WdfUsbInterfaceSelectSettingTypeUrb:
        v11 = Params->Types.Descriptor.InterfaceDescriptor;
        if ( !v11 || *(_WORD *)&v11->bInterfaceNumber != 1 || *(_WORD *)&v11->bLength < 0x38u )
        {
          v10 = -1073741811;
          WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0xCu, WPP_FxUsbInterfaceAPI_cpp_Traceguids, v11, -1073741811);
          return v10;
        }
        return (unsigned int)FxUsbInterface::SelectSetting(pUsbInterface, PipesAttributes, Params->Types.Urb.Urb);
      default:
        return (unsigned int)-1073741811;
    }
  }
  return result;
}
