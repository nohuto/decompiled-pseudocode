__int64 __fastcall FxDevice::AllocateCompanionTarget(FxDevice *this, FxCompanionTarget **DeviceCompanion)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  FxCompanionTarget *v5; // rax
  unsigned __int16 v6; // r8
  FxCompanionTarget *v7; // rax
  FxObject *v8; // rdi
  FxCompanionTarget *v9; // rsi
  int _a2; // ebx
  const void *_a1; // rax
  unsigned __int16 v12; // dx
  const void *ObjectHandleUnchecked; // rax
  FxPoolTypeOrPoolFlags v15; // [rsp+40h] [rbp-38h] BYREF

  p_m_Globals = &this->m_Globals;
  *(_QWORD *)&v15.UsePoolType = 0LL;
  v15.u.PoolFlags = 64LL;
  v5 = (FxCompanionTarget *)FxObjectHandleAllocCommon(this->m_Globals, &v15, 0xA0uLL, 0, 0LL, 0, FxObjectTypeExternal);
  if ( !v5 )
  {
    v9 = 0LL;
    goto LABEL_9;
  }
  FxCompanionTarget::FxCompanionTarget(v5, *p_m_Globals, v6);
  v8 = v7;
  v9 = v7;
  if ( !v7 )
  {
LABEL_9:
    _a2 = -1073741670;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, 0x1Du, WPP_FxDeviceKm_cpp_Traceguids, ObjectHandleUnchecked, -1073741670);
    goto LABEL_10;
  }
  _a2 = FxCompanionTarget::Init(v7, this);
  if ( _a2 < 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v12 = 30;
LABEL_7:
    WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, v12, WPP_FxDeviceKm_cpp_Traceguids, _a1, _a2);
    FxObject::ClearEvtCallbacks(v8);
    v8->DeleteObject(v8);
    v9 = 0LL;
    goto LABEL_10;
  }
  _a2 = FxObject::Commit(v8, 0LL, 0LL, (_FX_DRIVER_GLOBALS *)this, 1u);
  if ( _a2 < 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v12 = 31;
    goto LABEL_7;
  }
LABEL_10:
  *DeviceCompanion = v9;
  return (unsigned int)_a2;
}
