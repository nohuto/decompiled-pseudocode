/*
 * XREFs of ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0006AA0
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0007250 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00528E8 (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_RequestCancelled@FxIoTarget@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C0054420 (-_RequestCancelled@FxIoTarget@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z.c)
 *     ?_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C005E804 (-_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C0006B8C (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C0006BB4 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0006D6C (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C00071A0 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 */

void __fastcall FxIoTarget::RequestCompletionRoutine(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  unsigned __int8 v5; // bp
  char v6; // si
  unsigned __int8 v7; // r8
  void *ObjectHandleUnchecked; // rax
  const void *_a1; // rdx
  _FX_DRIVER_GLOBALS *v10; // r10
  _IRP *m_Irp; // rax
  FxRequestBase *v12; // rax
  FxRequestBase *v13; // rcx
  FxRequestBase *v14; // rax
  _FX_DRIVER_GLOBALS *v15; // r10
  FxRequestBase *v16; // rdx
  const void *v17; // rax
  _FX_DRIVER_GLOBALS *v18; // r10
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  irql = 0;
  if ( this->m_Globals->FxVerboseOn )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(Request);
    if ( ObjectHandleUnchecked )
      _a1 = ObjectHandleUnchecked;
    WPP_IFR_SF_q(v10, 5u, 0xEu, 0x31u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  v5 = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  v6 = 1;
  Request->m_TargetFlags |= 1u;
  if ( FxRequestBase::CancelTimer(Request)
    && _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
  {
    if ( (Request->m_TargetFlags & 8) != 0 )
    {
      m_Irp = Request->m_Irp.m_Irp;
      if ( m_Irp->IoStatus.Status == -1073741536 )
        m_Irp->IoStatus.Status = -1073741643;
    }
    v5 = FxIoTarget::RemoveCompletedRequestLocked(this, Request);
  }
  else
  {
    v12 = (FxRequestBase *)FxObject::GetObjectHandleUnchecked(Request);
    v13 = Request;
    if ( v12 )
      v13 = v12;
    WPP_IFR_SF_q(this->m_Globals, 4u, 0xEu, 0x32u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v13);
    v6 = 0;
  }
  FxNonPagedObject::Unlock(this, irql, v7);
  if ( v6 )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      v14 = (FxRequestBase *)FxObject::GetObjectHandleUnchecked(Request);
      v16 = Request;
      if ( v14 )
        v16 = v14;
      WPP_IFR_SF_q(v15, 5u, 0xEu, 0x33u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v16);
    }
    FxRequestBase::CompleteSubmitted(Request);
  }
  if ( v5 )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      v17 = FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qq(v18, 5u, 0xEu, 0x34u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v17, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v6 )
    FxIoTarget::DecrementIoCount(this);
}
