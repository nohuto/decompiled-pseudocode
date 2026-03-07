__int64 __fastcall imp_WdfIoTargetQueryForInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        const _GUID *InterfaceType,
        _INTERFACE *Interface,
        unsigned __int16 Size,
        unsigned __int16 Version,
        _NAMED_PIPE_CREATE_PARAMETERS *InterfaceSpecificData)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  __int64 result; // rax
  _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  unsigned int v12; // ebx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  FxIoTarget *pTarget; // [rsp+40h] [rbp+8h] BYREF

  pTarget = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  if ( !InterfaceType )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !Interface )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(pTarget->m_TargetDevice);
    v12 = FxQueryInterface::_QueryForInterface(
            AttachedDeviceReference,
            InterfaceType,
            Interface,
            Size,
            Version,
            InterfaceSpecificData);
    ObfDereferenceObject(AttachedDeviceReference);
    return v12;
  }
  return result;
}
