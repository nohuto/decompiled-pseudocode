__int64 __fastcall imp_WdfIoTargetQueryTargetProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        __int32 DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        PULONG ResultLength)
{
  unsigned int *v9; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void *v11; // rdi
  __int64 result; // rax
  _DEVICE_OBJECT *m_TargetPdo; // rcx
  unsigned int v14; // edi
  NTSTATUS _a3; // eax
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]
  FxIoTarget *pTarget; // [rsp+60h] [rbp+8h] BYREF

  pTarget = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  v9 = ResultLength;
  m_Globals = pTarget->m_Globals;
  if ( !ResultLength )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v11 = PropertyBuffer;
  if ( BufferLength && !PropertyBuffer )
    FxVerifierNullBugCheck(pTarget->m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(pTarget->m_Globals, 0);
  if ( (int)result >= 0 )
  {
    m_TargetPdo = pTarget->m_TargetPdo;
    if ( m_TargetPdo )
    {
      _a3 = IoGetDeviceProperty(m_TargetPdo, (DEVICE_REGISTRY_PROPERTY)DeviceProperty, BufferLength, v11, v9);
      v14 = _a3;
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qdd(m_Globals, 5u, 0xEu, 0x11u, WPP_FxIoTargetAPIKm_cpp_Traceguids, IoTarget, DeviceProperty, _a3);
    }
    else
    {
      v14 = -1073741808;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x10u, WPP_FxIoTargetAPIKm_cpp_Traceguids, IoTarget, -1073741808);
    }
    return v14;
  }
  return result;
}
