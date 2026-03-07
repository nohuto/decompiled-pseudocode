__int64 __fastcall FxRequestBase::ValidateTarget(FxRequestBase *this, FxIoTarget *Target)
{
  _IRP *m_Irp; // rdi
  FxRequestBase *v4; // rbx
  CCHAR m_TargetStackSize; // cl
  unsigned int _a3; // edi
  _IRP *Irp; // rax
  unsigned __int8 v9; // r8
  _IRP *v10; // rax
  FxObject *v11; // rcx
  _IRP *v12; // rsi
  const void *_a1; // rax
  FxRequestBase *ObjectHandleUnchecked; // rax
  __int64 _a2; // rdx
  unsigned __int16 v16; // r9
  FxRequestBase *v17; // rcx
  FxRequestBase *v18; // rax
  _FX_DRIVER_GLOBALS *v19; // r10

  m_Irp = this->m_Irp.m_Irp;
  v4 = this;
  FxRequestBase::ContextReleaseAndRestore(this);
  m_TargetStackSize = Target->m_TargetStackSize;
  if ( !m_TargetStackSize )
  {
    _a3 = -1073741436;
    _a1 = FxObject::GetObjectHandleUnchecked(Target);
    WPP_IFR_SF_qd(v4->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, _a1, -1073741436);
    return _a3;
  }
  if ( m_Irp )
  {
    if ( m_Irp->CurrentLocation > m_TargetStackSize )
      return 0;
    if ( v4->m_IrpAllocation != 1 )
    {
      _a3 = -1073741616;
      FxObject::GetObjectHandleUnchecked(Target);
      ObjectHandleUnchecked = (FxRequestBase *)FxObject::GetObjectHandleUnchecked(v4);
      v16 = 13;
LABEL_13:
      v17 = v4;
      if ( ObjectHandleUnchecked )
        v17 = ObjectHandleUnchecked;
      WPP_IFR_SF_qid(v4->m_Globals, 2u, 0xEu, v16, WPP_FxRequestBase_cpp_Traceguids, v17, _a2, _a3);
      return _a3;
    }
  }
  Irp = IoAllocateIrp(m_TargetStackSize, 0);
  if ( !Irp )
  {
    _a3 = -1073741670;
    FxObject::GetObjectHandleUnchecked(Target);
    ObjectHandleUnchecked = (FxRequestBase *)FxObject::GetObjectHandleUnchecked(v4);
    v16 = 12;
    goto LABEL_13;
  }
  v10 = FxRequestBase::SetSubmitIrp(v4, Irp, v9);
  _a3 = 0;
  v4->m_IrpAllocation = 1;
  v12 = v10;
  if ( v10 )
  {
    if ( v4->m_Globals->FxVerboseOn )
    {
      v18 = (FxRequestBase *)FxObject::GetObjectHandleUnchecked(v11);
      if ( v18 )
        v4 = v18;
      WPP_IFR_SF_qq(v19, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v12, v4);
    }
    IoFreeIrp(v12);
  }
  return _a3;
}
