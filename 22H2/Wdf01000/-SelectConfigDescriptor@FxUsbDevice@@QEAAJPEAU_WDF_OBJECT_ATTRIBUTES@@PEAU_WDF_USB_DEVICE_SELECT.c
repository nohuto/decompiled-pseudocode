/*
 * XREFs of ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C00715D8
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C006B670 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     memset @ 0x1C001D540 (memset.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C006EC64 (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C0070ECC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfigDescriptor(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  __int64 NumInterfaceDescriptors; // rbx
  unsigned int v6; // ecx
  FX_POOL *ConfigurationDescriptor; // rbp
  _USB_INTERFACE_DESCRIPTOR **InterfaceDescriptors; // r14
  _USB_INTERFACE_DESCRIPTOR **v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  size_t v13; // r15
  FX_POOL **v14; // rax
  _USBD_INTERFACE_LIST_ENTRY *v15; // rsi
  unsigned int v16; // ebx
  _USBD_INTERFACE_LIST_ENTRY *v18; // rcx
  __int64 v19; // rdx
  _USB_INTERFACE_DESCRIPTOR *v20; // rax
  FX_POOL **ConfigRequest; // rax
  FX_POOL_TRACKER *v22; // rbp
  void *Caller; // [rsp+58h] [rbp+0h]

  m_Globals = this->m_Globals;
  NumInterfaceDescriptors = Params->Types.Descriptor.NumInterfaceDescriptors;
  v6 = 0;
  ConfigurationDescriptor = (FX_POOL *)Params->Types.Descriptor.ConfigurationDescriptor;
  InterfaceDescriptors = Params->Types.Descriptor.InterfaceDescriptors;
  if ( (_DWORD)NumInterfaceDescriptors )
  {
    v10 = Params->Types.Descriptor.InterfaceDescriptors;
    while ( *v10 )
    {
      ++v6;
      ++v10;
      if ( v6 >= (unsigned int)NumInterfaceDescriptors )
        goto LABEL_5;
    }
    return 3221225485LL;
  }
  else
  {
LABEL_5:
    v11 = (unsigned int)(NumInterfaceDescriptors + 1);
    if ( (unsigned int)v11 < (unsigned int)NumInterfaceDescriptors )
      return 3221225621LL;
    v12 = 16 * v11;
    if ( v12 > 0xFFFFFFFF )
    {
      return 3221225621LL;
    }
    else
    {
      v13 = (unsigned int)v12;
      v14 = FxPoolAllocator(
              m_Globals,
              &m_Globals->FxPoolFrameworks,
              ExDefaultNonPagedPoolType,
              (unsigned int)v12,
              m_Globals->Tag,
              Caller);
      v15 = (_USBD_INTERFACE_LIST_ENTRY *)v14;
      if ( v14 )
      {
        memset(v14, 0, v13);
        if ( (_DWORD)NumInterfaceDescriptors )
        {
          v18 = v15;
          v19 = NumInterfaceDescriptors;
          do
          {
            v20 = *InterfaceDescriptors++;
            v18->InterfaceDescriptor = v20;
            ++v18;
            --v19;
          }
          while ( v19 );
        }
        if ( !ConfigurationDescriptor )
          ConfigurationDescriptor = (FX_POOL *)this->m_ConfigDescriptor;
        ConfigRequest = FxUsbCreateConfigRequest(this->m_Globals, ConfigurationDescriptor, v15, 0xFFFFFFFF);
        v22 = (FX_POOL_TRACKER *)ConfigRequest;
        if ( ConfigRequest )
        {
          v16 = FxUsbDevice::SelectConfig(this, PipesAttributes, (_FILE_OBJECT *)ConfigRequest, FxUrbTypeLegacy, 0LL);
          FxPoolFree(v22);
        }
        else
        {
          v16 = -1073741670;
        }
        FxPoolFree((FX_POOL_TRACKER *)v15);
      }
      else
      {
        v16 = -1073741670;
        WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x13u, WPP_FxUsbDevice_cpp_Traceguids, -1073741670);
      }
      return v16;
    }
  }
}
