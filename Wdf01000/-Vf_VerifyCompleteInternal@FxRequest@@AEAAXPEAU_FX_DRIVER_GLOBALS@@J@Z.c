void __fastcall FxRequest::Vf_VerifyCompleteInternal(FxRequest *this, _FX_DRIVER_GLOBALS *Status, int FxDriverGlobals)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  const void *_a1; // rax
  unsigned int v7; // r8d
  _IRP *m_Irp; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int id; // edi
  unsigned __int8 v11; // dl
  const void *ObjectHandleUnchecked; // rax
  __int64 flags; // rdx
  unsigned int v14; // r8d
  unsigned int level; // r9d
  WDFREQUEST__ *v16; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  _WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA data; // [rsp+50h] [rbp-30h] BYREF
  _FX_DRIVER_GLOBALS *irql; // [rsp+A8h] [rbp+28h] BYREF

  irql = Status;
  LOBYTE(irql) = 0;
  FxNonPagedObject::Lock(this, (unsigned __int8 *)&irql, FxDriverGlobals);
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierIO && m_Globals->FxVerifierOn )
    FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
  if ( (this->m_VerifierFlags & 0x50) == 0x10 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(this->m_Globals, 2u, v7, v7 - 2, WPP_FxRequest_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 3 || CurrentStackLocation->MajorFunction == 4 )
  {
    id = CurrentStackLocation->Parameters.Read.Length;
  }
  else
  {
    if ( CurrentStackLocation->MajorFunction != 14 )
      goto LABEL_11;
    if ( m_Irp->RequestorMode != 1 )
      goto LABEL_11;
    id = CurrentStackLocation->Parameters.Read.Length;
    if ( !id )
      goto LABEL_11;
  }
  if ( FxDriverGlobals >= 0 && m_Irp->IoStatus.Information > id )
  {
    *(&data.OutputBufferLength + 1) = 0;
    *(_DWORD *)(&data.MajorFunction + 1) = 0;
    *(_WORD *)(&data.MajorFunction + 5) = 0;
    *(&data.MajorFunction + 7) = 0;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qDiD(this->m_Globals, flags, v14, level, traceGuid, ObjectHandleUnchecked, level, flags, id);
    v16 = (WDFREQUEST__ *)FxObject::GetObjectHandleUnchecked(this);
    data.Irp = this->m_Irp.m_Irp;
    data.Request = v16;
    data.OutputBufferLength = id;
    data.Information = data.Irp->IoStatus.Information;
    data.MajorFunction = data.Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_REQUEST_FATAL_ERROR, 4uLL, (ULONG_PTR)&data);
  }
LABEL_11:
  v11 = (unsigned __int8)irql;
  this->m_Completed = 1;
  FxNonPagedObject::Unlock(this, v11, (unsigned __int8)m_Irp);
}
