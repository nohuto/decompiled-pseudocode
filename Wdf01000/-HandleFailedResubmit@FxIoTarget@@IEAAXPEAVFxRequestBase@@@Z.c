/*
 * XREFs of ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C00534D8
 * Callers:
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0053AFC (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C0006BB4 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0006D6C (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C00071A0 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 */

void __fastcall FxIoTarget::HandleFailedResubmit(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *_a1; // rdx
  _FX_DRIVER_GLOBALS *v7; // r10
  unsigned __int8 v8; // r8
  _IRP *m_Irp; // rax
  unsigned __int8 v10; // si
  unsigned __int8 v11; // r8
  unsigned __int64 v12; // rax
  _FX_DRIVER_GLOBALS *v13; // r10
  FxRequestBase *v14; // rdx
  const void *v15; // rax
  _FX_DRIVER_GLOBALS *v16; // r10
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  irql = 0;
  if ( this->m_Globals->FxVerboseOn )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(Request);
    if ( ObjectHandleUnchecked )
      _a1 = (const void *)ObjectHandleUnchecked;
    WPP_IFR_SF_q(v7, 5u, 0xEu, 0x2Eu, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  FxNonPagedObject::Lock(this, &irql, a3);
  Request->m_TargetFlags |= 1u;
  if ( (Request->m_TargetFlags & 8) != 0 )
  {
    m_Irp = Request->m_Irp.m_Irp;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  v10 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v8);
  FxNonPagedObject::Unlock(this, irql, v11);
  if ( this->m_Globals->FxVerboseOn )
  {
    v12 = FxObject::GetObjectHandleUnchecked(Request);
    v14 = Request;
    if ( v12 )
      v14 = (FxRequestBase *)v12;
    WPP_IFR_SF_q(v13, 5u, 0xEu, 0x2Fu, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v14);
  }
  FxRequestBase::CompleteSubmitted(Request);
  if ( v10 )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      v15 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qq(v16, 5u, 0xEu, 0x30u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v15, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  FxIoTarget::DecrementIoCount(this);
}
