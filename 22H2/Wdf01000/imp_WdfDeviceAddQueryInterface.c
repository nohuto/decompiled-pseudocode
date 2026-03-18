/*
 * XREFs of imp_WdfDeviceAddQueryInterface @ 0x1C0041090
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C00019B8 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     memmove @ 0x1C001D640 (memmove.c)
 *     WPP_IFR_SF_qddd @ 0x1C002F86C (WPP_IFR_SF_qddd.c)
 *     ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x1C0041054 (--_GFxQueryInterface@@QEAAPEAXI@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00592C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z @ 0x1C007F280 (-AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z.c)
 */

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
  FxQueryInterface *v13; // rbp
  unsigned __int8 v14; // r8
  FxDevice *v15; // rax
  FX_POOL **v16; // rax
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxDevice *pDevice; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0;
  pDevice = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
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
    Interface = InterfaceConfig->Interface;
    if ( InterfaceConfig->Size != 48 )
    {
      v4 = -1073741820;
      WPP_IFR_SF_qddd(
        m_Globals,
        v8,
        2u,
        0xAu,
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
      v11 = 11;
LABEL_14:
      WPP_IFR_SF_qL(m_Globals, 2u, 2u, v11, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, 0xC000000D);
      return v4;
    }
    if ( Interface || SendQueryToParentStack )
    {
      if ( !InterfaceConfig->ImportInterface )
        goto LABEL_23;
    }
    else if ( !InterfaceConfig->ImportInterface )
    {
      v4 = -1073741811;
      v11 = 12;
      goto LABEL_14;
    }
    if ( !InterfaceConfig->EvtDeviceProcessQueryInterfaceRequest )
    {
      v4 = -1073741811;
      v11 = 13;
      goto LABEL_14;
    }
LABEL_23:
    if ( Interface && (_a3 = Interface->Size, (unsigned __int16)_a3 < 0x20u) )
    {
      v4 = -1073741811;
      WPP_IFR_SF_qddd(m_Globals, 0x20u, 2u, 0xEu, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, _a3, 32, -1073741811);
    }
    else
    {
      v13 = (FxQueryInterface *)FxPoolAllocator(
                                  m_Globals,
                                  &m_Globals->FxPoolFrameworks,
                                  1u,
                                  0x38uLL,
                                  m_Globals->Tag,
                                  retaddr);
      if ( v13 )
      {
        v15 = pDevice;
        v13->m_ProcessRequest.m_Method = 0LL;
        v13->m_Device = v15;
        v13->m_Interface = 0LL;
        v13->m_Entry.Next = 0LL;
        v13->m_EmbeddedInterface = 0;
        v13->m_SendQueryToParentStack = InterfaceConfig->SendQueryToParentStack;
        v13->m_ImportInterface = InterfaceConfig->ImportInterface;
        v13->m_ProcessRequest.m_Method = InterfaceConfig->EvtDeviceProcessQueryInterfaceRequest;
        v13->m_InterfaceType = *InterfaceConfig->InterfaceType;
      }
      else
      {
        v13 = 0LL;
      }
      if ( v13 )
      {
        if ( Interface )
        {
          v16 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, 1u, Interface->Size, m_Globals->Tag, retaddr);
          v13->m_Interface = (_INTERFACE *)v16;
          if ( !v16 )
          {
            v4 = -1073741670;
            WPP_IFR_SF_qL(m_Globals, 2u, 2u, 0x10u, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, 0xC000009A);
            FxQueryInterface::`scalar deleting destructor'(v13);
            return v4;
          }
          memmove(v16, Interface, Interface->Size);
          if ( !Interface->InterfaceReference )
            v13->m_Interface->InterfaceReference = (void (__fastcall *)(void *))FxDeviceBase::AddChildList;
          if ( !Interface->InterfaceDereference )
            v13->m_Interface->InterfaceDereference = (void (__fastcall *)(void *))FxDeviceBase::AddChildList;
        }
        FxPkgPnp::AddQueryInterface(pDevice->m_PkgPnp, v13, v14);
        return v4;
      }
      v4 = -1073741670;
      WPP_IFR_SF_qL(m_Globals, 2u, 2u, 0xFu, WPP_FxQueryInterfaceAPI_cpp_Traceguids, Device, 0xC000009A);
    }
    return v4;
  }
  return result;
}
