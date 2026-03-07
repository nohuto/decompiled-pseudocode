void __fastcall FxDriver::Unload(_DRIVER_OBJECT *DriverObject)
{
  FxObject **DriverObjectExtension; // rax
  FxObject *v3; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a1; // rax
  unsigned __int64 ObjectHandleUnchecked; // rax
  void (__fastcall *v7)(unsigned __int64); // rdx
  const void *v8; // rax

  DriverObjectExtension = (FxObject **)IoGetDriverObjectExtension(DriverObject, FxDriver::GetFxDriver);
  v3 = *DriverObjectExtension;
  if ( *DriverObjectExtension )
  {
    m_Globals = v3->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(*DriverObjectExtension);
      WPP_IFR_SF_qq(m_Globals, 5u, 0x11u, 0xDu, WPP_FxDriver_cpp_Traceguids, _a1, DriverObject);
    }
    if ( *(_QWORD *)&v3[3].m_SpinLock.m_DbgFlagIsInitialized )
    {
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v3);
      v7(ObjectHandleUnchecked);
      if ( m_Globals->FxVerboseOn )
      {
        v8 = (const void *)FxObject::GetObjectHandleUnchecked(v3);
        WPP_IFR_SF_qq(m_Globals, 5u, 0x11u, 0xEu, WPP_FxDriver_cpp_Traceguids, v8, DriverObject);
      }
    }
    v3->DeleteObject(v3);
    m_Globals->Driver = 0LL;
    FxDestroy(m_Globals);
  }
}
