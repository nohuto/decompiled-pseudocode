__int64 __fastcall imp_WdfDeviceAddQueryInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_QUERY_INTERFACE_CONFIG *InterfaceConfig)
{
  unsigned int v4; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  unsigned __int8 v8; // dl
  _INTERFACE *Interface; // r14
  unsigned __int8 SendQueryToParentStack; // r8
  unsigned __int16 v11; // r9
  int _a3; // eax
  ULONG Tag; // ecx
  void *v14; // rax
  unsigned __int8 v15; // r8
  FxQueryInterface *v16; // r15
  FxDevice *v17; // rax
  unsigned __int64 Size; // r9
  ULONG v19; // ecx
  void *v20; // rax
  FX_POOL **v21; // rax
  __m128i v22; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  FxDevice *pDevice; // [rsp+90h] [rbp+30h] BYREF

  v4 = 0;
  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !Device )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !InterfaceConfig )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !InterfaceConfig->InterfaceType )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( pDevice->m_Legacy )
    {
      v4 = -1073741808;
      WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0xAu, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, -1073741808);
      return v4;
    }
    Interface = InterfaceConfig->Interface;
    if ( InterfaceConfig->Size != 48 )
    {
      v4 = -1073741820;
      WPP_IFR_SF_qddd(
        m_Globals,
        v8,
        2u,
        0xBu,
        WPP_FxQueryInterfaceAPI_cpp_Traceguids,
        Device,
        InterfaceConfig->Size,
        48,
        -1073741820);
      return v4;
    }
    SendQueryToParentStack = InterfaceConfig->SendQueryToParentStack;
    if ( SendQueryToParentStack && !FxDevice::IsPdo(pDevice) )
    {
      v4 = -1073741811;
      v11 = 12;
LABEL_16:
      WPP_IFR_SF_qd(m_Globals, 2u, 2u, v11, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, -1073741811);
      return v4;
    }
    if ( Interface || SendQueryToParentStack )
    {
      if ( !InterfaceConfig->ImportInterface )
        goto LABEL_24;
    }
    else if ( !InterfaceConfig->ImportInterface )
    {
      v4 = -1073741811;
      v11 = 13;
      goto LABEL_16;
    }
    if ( !InterfaceConfig->EvtDeviceProcessQueryInterfaceRequest )
    {
      v4 = -1073741811;
      v11 = 14;
      goto LABEL_16;
    }
LABEL_24:
    if ( !Interface || (_a3 = Interface->Size, (unsigned __int16)_a3 >= 0x20u) )
    {
      Tag = m_Globals->Tag;
      v14 = retaddr;
      v22.m128i_i64[0] = 0LL;
      v22.m128i_i64[1] = 256LL;
      if ( !m_Globals->FxPoolTrackingOn )
        v14 = 0LL;
      v16 = (FxQueryInterface *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v22, 0x38uLL, Tag, v14);
      if ( !v16 )
      {
        v4 = -1073741670;
        WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x10u, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, -1073741670);
        return v4;
      }
      v17 = pDevice;
      v16->m_ProcessRequest.m_Method = 0LL;
      v16->m_Device = v17;
      v16->m_Interface = 0LL;
      v16->m_Entry.Next = 0LL;
      v16->m_EmbeddedInterface = 0;
      v16->m_SendQueryToParentStack = InterfaceConfig->SendQueryToParentStack;
      v16->m_ImportInterface = InterfaceConfig->ImportInterface;
      v16->m_ProcessRequest.m_Method = InterfaceConfig->EvtDeviceProcessQueryInterfaceRequest;
      v16->m_InterfaceType = *InterfaceConfig->InterfaceType;
      if ( Interface )
      {
        Size = Interface->Size;
        v19 = m_Globals->Tag;
        v20 = retaddr;
        v22.m128i_i64[0] = 0LL;
        v22.m128i_i64[1] = 256LL;
        if ( !m_Globals->FxPoolTrackingOn )
          v20 = 0LL;
        v21 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v22, Size, v19, v20);
        v16->m_Interface = (_INTERFACE *)v21;
        if ( !v21 )
        {
          v4 = -1073741670;
          WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x11u, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, -1073741670);
          FxQueryInterface::`scalar deleting destructor'(v16);
          return v4;
        }
        memmove(v21, Interface, Interface->Size);
        if ( !Interface->InterfaceReference )
          v16->m_Interface->InterfaceReference = (void (__fastcall *)(void *))FxDeviceBase::AddChildList;
        if ( !Interface->InterfaceDereference )
          v16->m_Interface->InterfaceDereference = (void (__fastcall *)(void *))FxDeviceBase::AddChildList;
      }
      FxPkgPnp::AddQueryInterface(pDevice->m_PkgPnp, v16, v15);
      return v4;
    }
    v4 = -1073741811;
    WPP_IFR_SF_qddd(m_Globals, 0x20u, 2u, 0xFu, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, _a3, 32, -1073741811);
    return v4;
  }
  return result;
}
