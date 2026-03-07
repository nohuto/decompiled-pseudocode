__int64 __fastcall imp_WdfIoTargetAllocAndQueryTargetProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        __int32 DeviceProperty,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory)
{
  WDFMEMORY__ **v9; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  _WDF_OBJECT_ATTRIBUTES *v12; // rdi
  _DEVICE_OBJECT *m_TargetPdo; // r9
  unsigned int v14; // edi
  unsigned int Property; // eax
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]
  FxIoTarget *pTarget; // [rsp+60h] [rbp+8h] BYREF

  pTarget = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  v9 = PropertyMemory;
  m_Globals = pTarget->m_Globals;
  if ( !PropertyMemory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *PropertyMemory = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( m_Globals->FxVerifierOn )
      VfCheckNxPoolType((unsigned int)PoolType, retaddr, m_Globals->Tag);
    v12 = PropertyMemoryAttributes;
    result = FxValidateObjectAttributes(m_Globals, PropertyMemoryAttributes, 0);
    if ( (int)result >= 0 )
    {
      m_TargetPdo = pTarget->m_TargetPdo;
      if ( m_TargetPdo )
      {
        Property = FxDevice::_AllocAndQueryProperty(
                     m_Globals,
                     0LL,
                     0LL,
                     m_TargetPdo,
                     (DEVICE_REGISTRY_PROPERTY)DeviceProperty,
                     PoolType,
                     v12,
                     v9);
        v14 = Property;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_qdd(
            m_Globals,
            5u,
            0xEu,
            0x13u,
            WPP_FxIoTargetAPIKm_cpp_Traceguids,
            IoTarget,
            DeviceProperty,
            Property);
      }
      else
      {
        v14 = -1073741808;
        WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x12u, WPP_FxIoTargetAPIKm_cpp_Traceguids, IoTarget, -1073741808);
      }
      return v14;
    }
  }
  return result;
}
