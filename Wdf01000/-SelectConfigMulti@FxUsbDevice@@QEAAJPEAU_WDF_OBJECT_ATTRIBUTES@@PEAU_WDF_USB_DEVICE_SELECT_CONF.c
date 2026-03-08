/*
 * XREFs of ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C006078C
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C0058FF0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     WPP_IFR_SF_qddd @ 0x1C0019200 (WPP_IFR_SF_qddd.c)
 *     ?CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@@Z @ 0x1C005BB3C (-CreateConfigRequest@FxUsbDevice@@IEAAPEAU_URB@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INT.c)
 *     ?FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@EE@Z @ 0x1C005BD40 (-FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESC.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C005DC2C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x1C005F048 (-GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfigMulti(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  unsigned __int8 *p_NumberOfConfiguredInterfaces; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _WDF_OBJECT_ATTRIBUTES *v7; // r12
  __int64 m_NumInterfaces; // rdx
  bool v9; // zf
  ULONG Tag; // r8d
  void *v11; // rax
  FX_POOL **v12; // r15
  unsigned __int8 v14; // bl
  _USB_INTERFACE_DESCRIPTOR *SettingDescriptor; // rax
  __int64 v16; // r11
  const void *_a1; // rax
  unsigned int v18; // ebx
  unsigned __int8 v19; // si
  unsigned __int8 v20; // r14
  _FX_DRIVER_GLOBALS *v21; // rcx
  _USB_INTERFACE_DESCRIPTOR **v22; // rbx
  int v23; // r13d
  __int64 v24; // r12
  unsigned __int8 v25; // al
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rcx
  unsigned __int8 v27; // r8
  _USB_COMMON_DESCRIPTOR *v28; // rax
  const void *v29; // rax
  int _a4; // edx
  const void *ObjectHandleUnchecked; // rax
  unsigned __int8 v32; // dl
  FX_POOL **ConfigRequest; // rax
  FX_POOL_TRACKER *v34; // rsi
  void *PPObject[2]; // [rsp+50h] [rbp-168h] BYREF
  _WDF_OBJECT_ATTRIBUTES *v36; // [rsp+60h] [rbp-158h]
  unsigned __int8 *v37; // [rsp+68h] [rbp-150h]
  unsigned __int8 bitArray[256]; // [rsp+70h] [rbp-148h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+0h]

  p_NumberOfConfiguredInterfaces = &Params->Types.MultiInterface.NumberOfConfiguredInterfaces;
  v36 = PipesAttributes;
  v37 = &Params->Types.MultiInterface.NumberOfConfiguredInterfaces;
  m_Globals = this->m_Globals;
  Params->Types.MultiInterface.NumberOfConfiguredInterfaces = 0;
  v7 = PipesAttributes;
  m_NumInterfaces = this->m_NumInterfaces;
  v9 = m_Globals->FxPoolTrackingOn == 0;
  Tag = m_Globals->Tag;
  PPObject[0] = 0LL;
  PPObject[1] = (void *)64;
  if ( v9 )
    v11 = 0LL;
  else
    v11 = retaddr;
  v12 = FxPoolAllocator(
          m_Globals,
          &m_Globals->FxPoolFrameworks,
          (__m128i *)PPObject,
          16 * (m_NumInterfaces + 1),
          Tag,
          v11);
  if ( !v12 )
    return 3221225626LL;
  if ( Params->Type == WdfUsbTargetDeviceSelectConfigTypeMultiInterface )
  {
    v14 = 0;
    if ( this->m_NumInterfaces )
    {
      while ( 1 )
      {
        SettingDescriptor = FxUsbInterface::GetSettingDescriptor(this->m_Interfaces[v14], 0);
        v12[2 * v16] = (FX_POOL *)SettingDescriptor;
        if ( !SettingDescriptor )
          break;
        if ( ++v14 >= this->m_NumInterfaces )
          goto LABEL_23;
      }
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qd(
        this->m_Globals,
        2u,
        0xEu,
        0x1Du,
        WPP_FxusbDeviceKm_cpp_Traceguids,
        _a1,
        this->m_Interfaces[v14]->m_InterfaceNumber);
      v18 = -1073741811;
      goto $Done_56;
    }
  }
  else
  {
    v19 = 0;
    memset(bitArray, 0, 0xFFuLL);
    v20 = 0;
    if ( Params->Types.SingleInterface.NumberConfiguredPipes )
    {
      while ( 1 )
      {
        v21 = this->m_Globals;
        PPObject[0] = 0LL;
        v22 = &Params->Types.Descriptor.InterfaceDescriptors[2 * v20];
        FxObjectHandleGetPtr(v21, (unsigned __int64)*v22, 0x1204u, PPObject);
        v23 = *((unsigned __int8 *)v22 + 8);
        v24 = *((unsigned __int8 *)PPObject[0] + 146);
        v25 = bitArray[v24];
        if ( (v25 & 1) == 0 )
        {
          m_ConfigDescriptor = this->m_ConfigDescriptor;
          v27 = *((_BYTE *)v22 + 8);
          bitArray[v24] = v25 | 1;
          v28 = FxUsbParseConfigurationDescriptor(m_ConfigDescriptor, v24, v27);
          v12[2 * v19] = (FX_POOL *)v28;
          if ( !v28 )
          {
            v18 = -1073741811;
            ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
            WPP_IFR_SF_qddd(
              this->m_Globals,
              v32,
              0xEu,
              0x1Eu,
              WPP_FxusbDeviceKm_cpp_Traceguids,
              ObjectHandleUnchecked,
              v23,
              v24,
              -1073741811);
            goto $Done_56;
          }
          ++v19;
        }
        if ( ++v20 >= Params->Types.SingleInterface.NumberConfiguredPipes )
        {
          v7 = v36;
          break;
        }
      }
    }
    if ( this->m_NumInterfaces > v19 )
    {
      v18 = -1073741811;
      v29 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qddd(this->m_Globals, v19, 0xEu, 0x1Fu, WPP_FxusbDeviceKm_cpp_Traceguids, v29, v19, _a4, -1073741811);
      goto $Done_56;
    }
    p_NumberOfConfiguredInterfaces = v37;
  }
LABEL_23:
  ConfigRequest = FxUsbDevice::CreateConfigRequest(
                    this,
                    (FX_POOL *)this->m_ConfigDescriptor,
                    (_USBD_INTERFACE_LIST_ENTRY *)v12);
  v34 = (FX_POOL_TRACKER *)ConfigRequest;
  if ( ConfigRequest )
  {
    v18 = FxUsbDevice::SelectConfig(
            this,
            v7,
            (_FILE_OBJECT *)ConfigRequest,
            FxUrbTypeLegacy,
            p_NumberOfConfiguredInterfaces);
    FxPoolFree(v34);
  }
  else
  {
    v18 = -1073741670;
  }
$Done_56:
  FxPoolFree((FX_POOL_TRACKER *)v12);
  return v18;
}
