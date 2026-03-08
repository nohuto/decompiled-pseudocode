/*
 * XREFs of ?CompleteSubmittedNoContext@FxRequestBase@@IEAAXXZ @ 0x1C003FA70
 * Callers:
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0006D6C (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000AC00 (memset.c)
 */

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
