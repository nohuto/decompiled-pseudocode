void __fastcall FxRequestBase::CompleteSubmittedNoContext(FxRequestBase *this)
{
  _IRP *m_Irp; // rax
  FxIoTarget *m_Target; // rcx
  _IO_STATUS_BLOCK IoStatus; // xmm0
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v6; // rdx
  void (__fastcall *v7)(unsigned __int64, __int64, _WDF_REQUEST_COMPLETION_PARAMS *); // r10
  _WDF_REQUEST_COMPLETION_PARAMS params; // [rsp+30h] [rbp-58h] BYREF

  memset(&params, 0, sizeof(params));
  m_Irp = this->m_Irp.m_Irp;
  m_Target = this->m_Target;
  params.Type = WdfRequestTypeNoFormat;
  IoStatus = m_Irp->IoStatus;
  this->m_CompletionRoutine.m_Completion = 0LL;
  this->m_TargetCompletionContext = 0LL;
  params.IoStatus = IoStatus;
  memset(&params.Parameters, 0, sizeof(params.Parameters));
  FxObject::GetObjectHandleUnchecked(m_Target);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
  v7(ObjectHandleUnchecked, v6, &params);
}
