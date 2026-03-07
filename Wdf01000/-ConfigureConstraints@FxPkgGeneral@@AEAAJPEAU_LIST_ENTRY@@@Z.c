__int64 __fastcall FxPkgGeneral::ConfigureConstraints(FxPkgGeneral *this, _LIST_ENTRY *FileObjInfoList)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int v5; // edx
  bool IsVersionGreaterThanOrEqualTo; // al
  _LIST_ENTRY *i; // r8
  _WDF_EXECUTION_LEVEL Flink; // eax
  _WDF_SYNCHRONIZATION_SCOPE Flink_high; // r10d
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rcx
  FxObject *v14; // rcx
  _WDF_SYNCHRONIZATION_SCOPE m_SynchronizationScope; // eax
  const void *ObjectHandleUnchecked; // rax
  int v17; // edx
  unsigned int _a4; // r10d
  const void *_a3; // r11
  FxDeviceBase *m_DeviceBase; // rcx
  const void *_a1; // rax
  int v22; // edx
  unsigned __int8 v23; // r11
  FxCallbackLock *v24; // rax
  _LIST_ENTRY *v25; // rcx
  _WDF_EXECUTION_LEVEL parentExecLevel; // [rsp+60h] [rbp+8h] BYREF
  _WDF_SYNCHRONIZATION_SCOPE parentSynchScope; // [rsp+68h] [rbp+10h] BYREF

  m_Globals = this->m_Globals;
  parentExecLevel = WdfExecutionLevelInvalid;
  parentSynchScope = WdfSynchronizationScopeInvalid;
  this->m_DeviceBase->GetConstraints(&this->m_DeviceBase->IFxHasCallbacks, &parentExecLevel, &parentSynchScope);
  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v5, 0xBu);
  this->m_SynchronizationScope = WdfSynchronizationScopeNone;
  this->m_ExecutionLevel = 3 - IsVersionGreaterThanOrEqualTo;
  for ( i = FileObjInfoList->Blink; i != FileObjInfoList; i = i->Blink )
  {
    if ( LODWORD(i[5].Blink) )
    {
      Flink = (_WDF_EXECUTION_LEVEL)i[7].Flink;
      if ( Flink == WdfExecutionLevelInheritFromParent )
        Flink = parentExecLevel;
      if ( Flink == WdfExecutionLevelPassive )
        this->m_ExecutionLevel = WdfExecutionLevelPassive;
      Flink_high = HIDWORD(i[7].Flink);
      if ( Flink_high == WdfSynchronizationScopeInheritFromParent )
        Flink_high = parentSynchScope;
      if ( BYTE4(i[9].Flink) )
      {
        if ( Flink_high != WdfSynchronizationScopeNone )
        {
          v10 = -1073741808;
          FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
          v13 = *(_QWORD *)(v12 + 152);
          if ( v13 )
            v14 = *(FxObject **)(v13 + 16);
          else
            v14 = *(FxObject **)(v11 + 136);
          ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v14);
          WPP_IFR_SF_qqLd(
            m_Globals,
            v17,
            0x12u,
            0xCu,
            WPP_FxPkgGeneral_cpp_Traceguids,
            ObjectHandleUnchecked,
            _a3,
            _a4,
            v17);
          FxVerifierDbgBreakPoint(m_Globals);
          return v10;
        }
      }
      else
      {
        this->m_SynchronizationScope = Flink_high;
      }
    }
  }
  m_SynchronizationScope = this->m_SynchronizationScope;
  if ( m_SynchronizationScope == WdfSynchronizationScopeQueue )
  {
    v10 = -1073741808;
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xDu, WPP_FxPkgGeneral_cpp_Traceguids, 0xC0000010);
    return v10;
  }
  if ( this->m_ExecutionLevel == WdfExecutionLevelPassive )
    this->m_ObjectFlags |= 0x11u;
  if ( m_SynchronizationScope == WdfSynchronizationScopeDevice )
  {
    m_DeviceBase = this->m_DeviceBase;
    if ( parentExecLevel != WdfExecutionLevelPassive )
    {
      v10 = -1073741808;
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(m_DeviceBase);
      WPP_IFR_SF_qd(m_Globals, v23, 0x12u, 0xEu, WPP_FxPkgGeneral_cpp_Traceguids, _a1, v22);
      return v10;
    }
    v24 = m_DeviceBase->GetCallbackLockPtr(&m_DeviceBase->IFxHasCallbacks, &this->m_CallbackLockObjectPtr);
    this->m_CallbackLockPtr = v24;
    v25 = FileObjInfoList->Flink;
    if ( FileObjInfoList->Flink != FileObjInfoList && !BYTE4(v25[9].Flink) )
    {
      v25[1].Flink = (_LIST_ENTRY *)v24;
      v25[3].Flink = (_LIST_ENTRY *)this->m_CallbackLockPtr;
      v25[4].Flink = (_LIST_ENTRY *)this->m_CallbackLockPtr;
    }
  }
  return 0;
}
