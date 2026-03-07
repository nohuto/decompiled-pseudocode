__int64 __fastcall FxIoTarget::SubmitLocked(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        int Flags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned int v5; // esi
  char v6; // r13
  _WDF_REQUEST_SEND_OPTIONS *v8; // rax
  _WDF_IO_TARGET_STATE m_State; // r10d
  int Timer; // edi
  bool v13; // zf
  $B4160BD2E650AF3CBE6CB685E9139346 *v14; // rax
  _LIST_ENTRY *p_m_IgnoredIoListHead; // rcx
  _IRP *Blink; // rdx
  FxRequestTimer *m_Timer; // rcx
  __int64 Timeout; // rdx
  FxRequestBase *ObjectHandleUnchecked; // rax
  FxRequestBase *v21; // rcx
  void *v22; // rax
  FxRequestBase *v23; // rax
  FxRequestBase *v24; // rcx
  FxIrp *p_m_Irp; // r12
  const void *v26; // rax
  const void *_a3; // r8
  unsigned int v28; // r10d
  const void *v29; // rax
  __int64 v30; // rdx
  int v31; // r10d
  FxRequestBase *v32; // rax
  __int64 v33; // rdx
  int v34; // r10d
  FxRequestBase *v35; // rcx
  FxRequestBase *v36; // rax
  __int64 v37; // rdx
  FxRequestBase *v38; // rcx
  FxRequestBase *v39; // rax
  FxRequestBase *v40; // rcx
  unsigned __int8 traceGuid; // [rsp+20h] [rbp-78h]
  unsigned __int8 _a1; // [rsp+28h] [rbp-70h]
  unsigned __int8 _a2; // [rsp+30h] [rbp-68h]
  char v44; // [rsp+50h] [rbp-48h]
  char action; // [rsp+A0h] [rbp+8h]
  char v46; // [rsp+A8h] [rbp+10h]

  m_Globals = this->m_Globals;
  v5 = 0;
  v6 = 0;
  action = 0;
  v8 = Options;
  v44 = 0;
  if ( Request->m_IrpCompletionReferenceCount )
  {
    ObjectHandleUnchecked = (FxRequestBase *)FxObject::GetObjectHandleUnchecked(Request);
    v21 = Request;
    if ( ObjectHandleUnchecked )
      v21 = ObjectHandleUnchecked;
    WPP_IFR_SF_q(m_Globals, 2u, 0xEu, 0x1Du, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v21);
    v22 = FxObject::GetObjectHandleUnchecked(Request);
    FxVerifierBugCheckWorker(m_Globals, WDF_REQUEST_FATAL_ERROR, 3uLL, (unsigned __int64)v22);
  }
  if ( !m_Globals->FxVerifierOn || !m_Globals->FxVerifierIO )
  {
    v46 = 0;
LABEL_4:
    if ( (Flags & 1) != 0 && v8->Timeout )
    {
      Timer = FxRequestBase::CreateTimer(Request);
      if ( Timer < 0 )
      {
        v23 = (FxRequestBase *)FxObject::GetObjectHandleUnchecked(Request);
        v24 = Request;
        if ( v23 )
          v24 = v23;
        WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x1Eu, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v24, Timer);
        goto LABEL_35;
      }
      action = 1;
    }
    m_State = this->m_State;
    if ( (Flags & 4) != 0 )
    {
      if ( (unsigned int)(m_State - 3) <= 2 && !this->m_Removing )
      {
        Timer = -1073741436;
        FxObject::GetObjectHandleUnchecked(Request);
        v26 = FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qLqd(
          m_Globals,
          4u,
          0xEu,
          0x1Fu,
          (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids,
          v26,
          v28,
          _a3,
          -1073741436);
        goto LABEL_35;
      }
      v5 = 1;
      FxObject::GetObjectHandleUnchecked(Request);
      v29 = FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qid(m_Globals, 4u, 0xEu, 0x20u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v29, v30, v31);
      Request->m_TargetFlags |= 0x10u;
      v6 = 1;
    }
    else
    {
      if ( m_State != WdfIoTargetStarted )
      {
        if ( m_State == WdfIoTargetStopped )
        {
          if ( Flags >= 0 )
          {
            Timer = 1075838976;
            v5 = 2;
            goto LABEL_9;
          }
        }
        else
        {
          FxObject::GetObjectHandleUnchecked(this);
          v32 = (FxRequestBase *)FxObject::GetObjectHandleUnchecked(Request);
          v35 = Request;
          if ( v32 )
            v35 = v32;
          WPP_IFR_SF_qid(m_Globals, 2u, 0xEu, 0x21u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v35, v33, v34);
        }
        Timer = -1073741436;
        goto LABEL_35;
      }
      v5 = 1;
    }
    Timer = 0;
LABEL_9:
    Request->m_CsqContext.Irp = (_IRP *)&Request->120;
    Request->m_ListEntry.Flink = (_LIST_ENTRY *)&Request->120;
    goto $Done_1;
  }
  v46 = 1;
  Timer = FxIoTarget::Vf_VerifySubmitLocked(this, m_Globals, Request);
  if ( Timer >= 0 )
  {
    v8 = Options;
    goto LABEL_4;
  }
$Done_1:
  if ( Timer < 0 )
  {
LABEL_35:
    p_m_Irp = &Request->m_Irp;
    goto LABEL_36;
  }
  Request->m_Target = this;
  _InterlockedIncrement(&this->m_IoCount);
  FxObject::AddRef(Request, this, 1472, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  v13 = Request->m_Canceled == 0;
  v44 = 1;
  Request->m_IrpCompletionReferenceCount = 1;
  if ( !v13 )
  {
    Timer = -1073741536;
    v5 = 2 * (_InterlockedAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) != 0);
    goto LABEL_35;
  }
  if ( (v5 & 1) != 0 )
  {
    v14 = &Request->120;
    if ( v6 )
      p_m_IgnoredIoListHead = &this->m_IgnoredIoListHead;
    else
      p_m_IgnoredIoListHead = &this->m_SentIoListHead;
    Blink = (_IRP *)p_m_IgnoredIoListHead->Blink;
    if ( *(_LIST_ENTRY **)&Blink->Type != p_m_IgnoredIoListHead )
      __fastfail(3u);
    v14->m_ListEntry.Flink = p_m_IgnoredIoListHead;
    Request->m_CsqContext.Irp = Blink;
    *(_QWORD *)&Blink->Type = v14;
    p_m_IgnoredIoListHead->Blink = (_LIST_ENTRY *)v14;
    FxIrp::SetCompletionRoutineEx(
      &Request->m_Irp,
      this->m_InStackDevice,
      FxIoTarget::_RequestCompletionRoutine,
      Request,
      traceGuid,
      _a1,
      _a2);
  }
  else
  {
    Timer = FxIoTarget::PendRequestLocked(this, Request);
    FxObject::GetObjectHandleUnchecked(this);
    v36 = (FxRequestBase *)FxObject::GetObjectHandleUnchecked(Request);
    v38 = Request;
    if ( v36 )
      v38 = v36;
    WPP_IFR_SF_qid(m_Globals, 4u, 0xEu, 0x22u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v38, v37, Timer);
    p_m_Irp = &Request->m_Irp;
    if ( Timer < 0 )
    {
      if ( _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
        v5 = 0;
LABEL_36:
      v5 &= ~1u;
      p_m_Irp->m_Irp->IoStatus.Status = Timer;
      if ( !v44 )
        return v5;
      goto LABEL_20;
    }
  }
  if ( action )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v39 = (FxRequestBase *)FxObject::GetObjectHandleUnchecked(Request);
      v40 = Request;
      if ( v39 )
        v40 = v39;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x23u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v40);
    }
    m_Timer = Request->m_Timer;
    Timeout = Options->Timeout;
    Request->m_TargetFlags |= 4u;
    MxTimer::Start(&m_Timer->Timer, (_LARGE_INTEGER)Timeout, 0);
  }
  if ( v46 )
    FxRequestBase::SetVerifierFlags(Request, 256);
LABEL_20:
  if ( !v5 )
  {
    Request->Release(Request, this, 1630, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
    FxIoTarget::DecrementIoCount(this);
  }
  return v5;
}
