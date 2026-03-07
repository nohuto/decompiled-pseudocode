__int64 __fastcall FxRequest::Reuse(FxRequest *this, _WDF_REQUEST_REUSE_PARAMS *ReuseParams)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxRequest *v4; // rdi
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *_a2; // rdx
  const void *_a1; // rcx
  unsigned int v10; // edx
  unsigned __int8 v11; // r8
  _IRP *m_Irp; // rbx
  FxRequestContext *m_RequestContext; // rcx
  unsigned __int8 m_IrpAllocation; // al
  _IRP *v16; // rcx
  unsigned __int64 v17; // rax
  unsigned int v18; // esi
  __int16 v19; // r8
  unsigned __int16 v20; // r9
  unsigned __int64 v21; // rax
  int v22; // edx
  unsigned __int64 v23; // rax
  unsigned __int8 v24; // r8
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v4 = this;
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)ReuseParams, 9u)
     || m_Globals->FxVerifyDownlevel) )
  {
    irql = 0;
    FxNonPagedObject::Lock(v4, &irql, v5);
    if ( _bittest16(&v4->m_VerifierFlags, 8u) )
    {
      FxObject::GetObjectHandleUnchecked(v4->m_Target);
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v4);
      _a1 = v4;
      if ( ObjectHandleUnchecked )
        _a1 = (const void *)ObjectHandleUnchecked;
      WPP_IFR_SF_qq(m_Globals, 2u, 0x10u, 0x2Au, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    FxNonPagedObject::Unlock(v4, irql, v6);
  }
  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)ReuseParams, 9u) )
  {
    v4->m_CompletionRoutine.m_Completion = 0LL;
    v4->m_TargetCompletionContext = 0LL;
  }
  m_Irp = v4->m_Irp.m_Irp;
  if ( m_Irp )
  {
    m_RequestContext = v4->m_RequestContext;
    if ( m_RequestContext )
      m_RequestContext->ReleaseAndRestore(m_RequestContext, v4);
    m_IrpAllocation = v4->m_IrpAllocation;
    if ( !m_IrpAllocation )
    {
      if ( (ReuseParams->Flags & 1) != 0 )
        return 3223323144LL;
      m_Irp->IoStatus.Status = ReuseParams->Status;
      m_Irp->Cancel = 0;
      *(_WORD *)&v4->m_Completed = 0;
      return 0LL;
    }
    if ( m_IrpAllocation == 2 && v4->m_CanComplete && !v4->m_Completed )
    {
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::ClearVerifierFlags(v4, 1, v11);
      v4->Release(v4, (void *)1129464644, 2242, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
  }
  if ( (ReuseParams->Flags & 1) != 0 )
  {
    m_Irp = ReuseParams->NewIrp;
    if ( v4->m_IrpAllocation == 1 )
    {
      v16 = v4->m_Irp.m_Irp;
      v4->m_Irp.m_Irp = m_Irp;
      if ( v16 )
        IoFreeIrp(v16);
    }
    else
    {
      v4->m_Irp.m_Irp = m_Irp;
    }
    v4->m_IrpAllocation = 2;
  }
  if ( v4->m_IrpAllocation == 1 && m_Irp )
  {
    IoReuseIrp(m_Irp, ReuseParams->Status);
    m_Irp->Cancel = 0;
  }
  if ( (ReuseParams->Flags & 2) != 0 )
  {
    if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v10, 0xBu) )
    {
      v17 = FxObject::GetObjectHandleUnchecked(v4);
      v18 = -1073741808;
      v20 = v19 + 32;
LABEL_38:
      if ( v17 )
        v4 = (FxRequest *)v17;
      WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v20, WPP_FxRequest_cpp_Traceguids, v4, v18);
      goto LABEL_49;
    }
    if ( !m_Irp )
    {
      v17 = FxObject::GetObjectHandleUnchecked(v4);
      v18 = -1073741811;
      v20 = 44;
      goto LABEL_38;
    }
    if ( v4->m_IrpAllocation == 1 )
    {
      v17 = FxObject::GetObjectHandleUnchecked(v4);
      v18 = -1073741808;
      v20 = 45;
      goto LABEL_38;
    }
    if ( v4->m_Refcnt != 1 )
    {
      v21 = FxObject::GetObjectHandleUnchecked(v4);
      v18 = -1073741808;
      if ( v21 )
        v4 = (FxRequest *)v21;
      WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x2Eu, WPP_FxRequest_cpp_Traceguids, v4, v22, 0xC0000010);
      goto LABEL_49;
    }
    if ( m_Irp->CurrentLocation > m_Irp->StackCount )
    {
      v23 = FxObject::GetObjectHandleUnchecked(v4);
      v18 = -1073741808;
      WPP_IFR_SF_qid(m_Globals, 2u, 0x10u, 0x2Fu, WPP_FxRequest_cpp_Traceguids, m_Irp, v23, -1073741808);
LABEL_49:
      FxVerifierDbgBreakPoint(m_Globals);
      return v18;
    }
    FxObject::AddRef(v4, (void *)0x43524344, 2395, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    v4->m_SystemBuffer.m_Buffer = 0LL;
    v4->m_OutputBuffer.m_Buffer = 0LL;
    FxRequestBase::ClearFieldsForReuse(v4);
    v4->m_CanComplete = 1;
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v4, 1, v24);
  }
  else
  {
    v4->m_CanComplete = 0;
    *(_WORD *)&v4->m_Completed = 0;
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::ClearVerifierFlags(v4, 1, v11);
  }
  return 0LL;
}
