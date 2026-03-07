FxDeviceBase *__fastcall FxDeviceBase::_SearchForDevice(FxObject *Object, IFxHasCallbacks **Callbacks)
{
  FxObject *v2; // rdi
  FxDeviceBase *m_DeviceBase; // rsi
  const void *_a1; // rax
  FxObject *ParentObjectReferenced; // rbx
  const void *ObjectHandleUnchecked; // rax
  const void *_a2; // rdx
  FxQueryInterfaceParams cbParams; // [rsp+40h] [rbp-18h] BYREF

  cbParams.Object = (void **)Callbacks;
  v2 = Object;
  cbParams.Type = 5379;
  *(_DWORD *)&cbParams.Offset = 0;
  *(&cbParams.Offset + 2) = 0;
  if ( Callbacks )
    *Callbacks = 0LL;
  m_DeviceBase = Object->m_DeviceBase;
  if ( m_DeviceBase )
  {
    if ( Callbacks )
    {
      FxObject::AddRef(Object, Object, 256, "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
      do
      {
        if ( v2->QueryInterface(v2, &cbParams) >= 0 )
        {
          v2->Release(v2, Object, 268, "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
          return m_DeviceBase;
        }
        ParentObjectReferenced = FxObject::GetParentObjectReferenced(v2, Object);
        v2->Release(v2, Object, 278, "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
        v2 = ParentObjectReferenced;
      }
      while ( ParentObjectReferenced );
      if ( m_DeviceBase->QueryInterface(m_DeviceBase, &cbParams) < 0 )
      {
        FxObject::GetObjectHandleUnchecked(m_DeviceBase);
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(Object);
        WPP_IFR_SF_qq(Object->m_Globals, 2u, 0x14u, 0xCu, WPP_FxDeviceBase_cpp_Traceguids, ObjectHandleUnchecked, _a2);
      }
    }
    return m_DeviceBase;
  }
  else
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Object);
    WPP_IFR_SF_q(v2->m_Globals, 2u, 0x14u, 0xBu, WPP_FxDeviceBase_cpp_Traceguids, _a1);
    return 0LL;
  }
}
