__int64 __fastcall FxUsbDevice::SelectConfigDescriptor(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  __int64 NumInterfaceDescriptors; // rbx
  unsigned int v6; // ecx
  FX_POOL *ConfigurationDescriptor; // r14
  _USB_INTERFACE_DESCRIPTOR **InterfaceDescriptors; // rsi
  _USB_INTERFACE_DESCRIPTOR **v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  bool v13; // zf
  ULONG Tag; // ecx
  unsigned __int64 v15; // r9
  void *v16; // rax
  FX_POOL **v18; // rax
  _USBD_INTERFACE_LIST_ENTRY *v19; // rbp
  unsigned int v20; // ebx
  FX_POOL **v21; // rcx
  __int64 v22; // rdx
  FX_POOL *v23; // rax
  FX_POOL **ConfigRequest; // rax
  FX_POOL_TRACKER *v25; // rsi
  __m128i v26; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

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
      v13 = m_Globals->FxPoolTrackingOn == 0;
      Tag = m_Globals->Tag;
      v26.m128i_i64[0] = 0LL;
      v26.m128i_i64[1] = 64LL;
      v15 = (unsigned int)v12;
      if ( v13 )
        v16 = 0LL;
      else
        v16 = retaddr;
      v18 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v26, v15, Tag, v16);
      v19 = (_USBD_INTERFACE_LIST_ENTRY *)v18;
      if ( v18 )
      {
        if ( (_DWORD)NumInterfaceDescriptors )
        {
          v21 = v18;
          v22 = NumInterfaceDescriptors;
          do
          {
            v23 = (FX_POOL *)*InterfaceDescriptors++;
            *v21 = v23;
            v21 += 2;
            --v22;
          }
          while ( v22 );
        }
        if ( !ConfigurationDescriptor )
          ConfigurationDescriptor = (FX_POOL *)this->m_ConfigDescriptor;
        ConfigRequest = FxUsbDevice::CreateConfigRequest(this, ConfigurationDescriptor, v19);
        v25 = (FX_POOL_TRACKER *)ConfigRequest;
        if ( ConfigRequest )
        {
          v20 = FxUsbDevice::SelectConfig(this, PipesAttributes, (_FILE_OBJECT *)ConfigRequest, FxUrbTypeLegacy, 0LL);
          FxPoolFree(v25);
        }
        else
        {
          v20 = -1073741670;
        }
        FxPoolFree((FX_POOL_TRACKER *)v19);
      }
      else
      {
        v20 = -1073741670;
        WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x13u, WPP_FxUsbDevice_cpp_Traceguids, 0xC000009A);
      }
      return v20;
    }
  }
}
