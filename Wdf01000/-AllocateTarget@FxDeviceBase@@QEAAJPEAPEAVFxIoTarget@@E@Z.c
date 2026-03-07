__int64 __fastcall FxDeviceBase::AllocateTarget(FxDeviceBase *this, FxIoTarget **Target, unsigned __int8 SelfTarget)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxIoTarget *v6; // rax
  FxIoTarget *v7; // rbx
  FxIoTarget *v8; // rax
  FxIoTarget *v9; // rax
  int v10; // edi
  const void *_a1; // rax
  unsigned __int16 v12; // r9
  int _a2; // edx
  const void *ObjectHandleUnchecked; // rax
  FxPoolTypeOrPoolFlags v16; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)&v16.UsePoolType = 0LL;
  v16.u.PoolFlags = 64LL;
  m_Globals = this->m_Globals;
  if ( SelfTarget )
  {
    v6 = (FxIoTarget *)FxObjectHandleAllocCommon(m_Globals, &v16, 0x160uLL, 0, 0LL, 0, FxObjectTypeExternal);
    v7 = v6;
    if ( v6 )
    {
      FxIoTarget::FxIoTarget(v6, this->m_Globals, 0x160u, 0x1205u);
      v7[1].__vftable = 0LL;
      v7->__vftable = (FxIoTarget_vtbl *)FxIoTargetSelf::`vftable';
      goto LABEL_8;
    }
    v7 = 0LL;
  }
  else
  {
    v8 = (FxIoTarget *)FxObjectHandleAllocCommon(m_Globals, &v16, 0x158uLL, 0, 0LL, 0, FxObjectTypeExternal);
    if ( !v8 )
    {
      v7 = 0LL;
      goto LABEL_17;
    }
    FxIoTarget::FxIoTarget(v8, this->m_Globals, 0x158u);
    v7 = v9;
  }
  if ( !v7 )
  {
LABEL_17:
    v10 = -1073741670;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0x12u, 0xDu, WPP_FxDeviceBase_cpp_Traceguids, ObjectHandleUnchecked, -1073741670);
    goto LABEL_18;
  }
LABEL_8:
  v10 = this->AddIoTarget(this, v7);
  if ( v10 >= 0 )
  {
    v10 = FxIoTarget::Init(v7, this);
    if ( v10 >= 0 )
    {
      v10 = FxObject::Commit(v7, 0LL, 0LL, (_FX_DRIVER_GLOBALS *)this, 1u);
      if ( v10 >= 0 )
      {
        v10 = 0;
        goto LABEL_18;
      }
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v12 = 16;
    }
    else
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v12 = 15;
    }
  }
  else
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v12 = 14;
    _a2 = v10;
  }
  WPP_IFR_SF_qd(this->m_Globals, 2u, 0x12u, v12, WPP_FxDeviceBase_cpp_Traceguids, _a1, _a2);
  FxObject::ClearEvtCallbacks(v7);
  v7->DeleteObject(v7);
  v7 = 0LL;
LABEL_18:
  *Target = v7;
  return (unsigned int)v10;
}
