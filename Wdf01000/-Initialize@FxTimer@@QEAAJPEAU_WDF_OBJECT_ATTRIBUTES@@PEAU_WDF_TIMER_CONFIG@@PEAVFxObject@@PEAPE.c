int __fastcall FxTimer::Initialize(
        FxTimer *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_TIMER_CONFIG *Config,
        FxObject *ParentObject,
        WDFTIMER__ **Timer)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  bool IsVersionGreaterThanOrEqualTo; // al
  void (__fastcall *v11)(struct _EX_TIMER *, void *); // r8
  int v12; // r9d
  unsigned int *v13; // r10
  MxTimer *p_m_Timer; // rcx
  signed int v15; // eax
  signed int v16; // esi
  FxDeviceBase *v18; // rax
  _WDF_EXECUTION_LEVEL ExecutionLevel; // esi
  int EffectiveLock; // edi
  signed int v21; // eax
  void **v22; // r8
  IFxHasCallbacks *pCallbacks; // [rsp+60h] [rbp+8h] BYREF

  pCallbacks = 0LL;
  m_Globals = this->m_Globals;
  this->m_Period = Config->Period;
  if ( Config->Size > 0x18 )
    this->m_TolerableDelay = Config->TolerableDelay;
  if ( Config->Size > 0x20 )
    this->m_UseHighResolutionTimer = Config->UseHighResolutionTimer;
  this->m_Callback = Config->EvtTimerFunc;
  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
                                    m_Globals,
                                    (unsigned int)Attributes,
                                    0xDu);
  p_m_Timer = &this->m_Timer;
  if ( IsVersionGreaterThanOrEqualTo )
    v15 = MxTimer::InitializeEx(p_m_Timer, this, v11, v12, *v13, this->m_UseHighResolutionTimer);
  else
    v15 = MxTimer::Initialize(
            p_m_Timer,
            this,
            (void (__fastcall *)(_KDPC *, void *, void *, void *))FxTimer::_FxTimerDpcThunk,
            v12);
  v16 = v15;
  if ( v15 < 0 )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xBu, WPP_FxTimer_cpp_Traceguids, v15);
    return v16;
  }
  FxObject::AddRef(this, this, 191, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
  v18 = FxDeviceBase::_SearchForDevice(ParentObject, &pCallbacks);
  this->m_DeviceBase = v18;
  if ( !v18 )
    return -1073741808;
  ExecutionLevel = Attributes->ExecutionLevel;
  EffectiveLock = FxObject::_GetEffectiveLock(
                    ParentObject,
                    pCallbacks,
                    Config->AutomaticSerialization,
                    ExecutionLevel == WdfExecutionLevelPassive,
                    &this->m_CallbackLock,
                    &this->m_CallbackLockObject);
  if ( EffectiveLock < 0 )
  {
    if ( EffectiveLock == -1071644148 )
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xCu, WPP_FxTimer_cpp_Traceguids, Attributes->ParentObject, -1071644148);
    return EffectiveLock;
  }
  if ( ExecutionLevel == WdfExecutionLevelPassive )
  {
    v21 = FxSystemWorkItem::_Create(
            m_Globals,
            this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            &this->m_SystemWorkItem);
    EffectiveLock = v21;
    if ( v21 < 0 )
    {
      WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xDu, WPP_FxTimer_cpp_Traceguids, v21);
      return EffectiveLock;
    }
  }
  FxObject::AddRef(ParentObject, this, 299, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
  v22 = (void **)Timer;
  this->m_Object = ParentObject;
  return FxObject::Commit(this, Attributes, v22, (_FX_DRIVER_GLOBALS *)ParentObject, 1u);
}
