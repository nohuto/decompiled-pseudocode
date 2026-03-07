__int64 __fastcall imp_WdfIoTargetSelfAssignDefaultIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFQUEUE__ *Queue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxDeviceBase *m_DeviceBase; // rbx
  FxObject *v7; // r8
  const void *_a3; // rax
  unsigned int v9; // ebx
  const void *_a5; // rdx
  const void *ObjectHandleUnchecked; // rax
  unsigned __int16 v13; // r9
  FxIoTargetSelf *pTargetSelf; // [rsp+70h] [rbp+8h] BYREF
  FxIoQueue *pFxIoQueue; // [rsp+88h] [rbp+20h] BYREF

  pTargetSelf = 0LL;
  pFxIoQueue = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)IoTarget,
    0x1205u,
    (void **)&pTargetSelf);
  m_Globals = pTargetSelf->m_Globals;
  m_DeviceBase = pTargetSelf->m_DeviceBase;
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Queue, 0x1003u, (void **)&pFxIoQueue);
  if ( m_DeviceBase != pFxIoQueue->m_DeviceBase )
  {
    FxObject::GetObjectHandleUnchecked(m_DeviceBase);
    _a3 = (const void *)FxObject::GetObjectHandleUnchecked(v7);
    v9 = -1073741808;
    WPP_IFR_SF_qqqqd(
      m_Globals,
      (unsigned __int8)WPP_FxIoTargetAPI_cpp_Traceguids,
      0xDu,
      0x3Au,
      WPP_FxIoTargetAPI_cpp_Traceguids,
      Queue,
      _a3,
      IoTarget,
      _a5,
      -1073741808);
    return v9;
  }
  if ( BYTE5(m_DeviceBase[1].m_Globals) )
  {
    if ( (m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags & 0x80u) == 0 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(m_DeviceBase);
      v13 = 59;
LABEL_7:
      v9 = -1073741436;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, v13, WPP_FxIoTargetAPI_cpp_Traceguids, ObjectHandleUnchecked, -1073741436);
      return v9;
    }
  }
  else if ( LODWORD(m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) != 261 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(m_DeviceBase);
    v13 = 60;
    goto LABEL_7;
  }
  pTargetSelf->m_DispatchQueue = pFxIoQueue;
  return 0LL;
}
