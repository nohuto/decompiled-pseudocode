/*
 * XREFs of ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C00071A0
 * Callers:
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0006AA0 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C00527B8 (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C00534D8 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0054098 (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 */

unsigned __int8 __fastcall FxIoTarget::RemoveCompletedRequestLocked(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned __int8 a3)
{
  $B4160BD2E650AF3CBE6CB685E9139346 *v5; // rax
  _LIST_ENTRY *Flink; // rcx
  _IRP *Irp; // rdx
  unsigned __int8 m_TargetFlags; // cl
  unsigned __int8 v9; // si
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  const void *_a1; // rax
  const void *_a2; // r8
  _FX_DRIVER_GLOBALS *v14; // r10
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // r8
  FxIoTarget_vtbl *v17; // rax
  unsigned __int8 PreviousIrql; // [rsp+50h] [rbp+8h] BYREF

  if ( this->m_Globals->FxVerboseOn )
  {
    FxObject::GetObjectHandleUnchecked(Request);
    _a1 = FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(v14, 5u, 0xEu, 0x28u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  v5 = &Request->120;
  Flink = Request->m_ListEntry.Flink;
  if ( ($B4160BD2E650AF3CBE6CB685E9139346 *)Flink->Blink != &Request->120
    || (Irp = Request->m_CsqContext.Irp, *($B4160BD2E650AF3CBE6CB685E9139346 **)&Irp->Type != v5) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)&Irp->Type = Flink;
  Flink->Blink = (_LIST_ENTRY *)Irp;
  m_TargetFlags = Request->m_TargetFlags;
  Request->m_CsqContext.Irp = (_IRP *)&Request->120;
  v9 = m_TargetFlags;
  v5->m_ListEntry.Flink = (_LIST_ENTRY *)v5;
  Request->m_TargetFlags = m_TargetFlags & 0xE2;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerifierIO )
  {
    PreviousIrql = 0;
    FxNonPagedObject::Lock(Request, &PreviousIrql, a3);
    v15 = PreviousIrql;
    Request->m_VerifierFlags &= ~0x100u;
    FxNonPagedObject::Unlock(Request, v15, v16);
  }
  if ( !this->m_Removing )
  {
    if ( this->m_WaitingForSentIo && (v9 & 0x10) == 0 && this->m_SentIoListHead.Flink == &this->m_SentIoListHead )
    {
      this->m_WaitingForSentIo = 0;
      return 1;
    }
    return 0;
  }
  if ( this->m_SentIoListHead.Flink != &this->m_SentIoListHead
    || this->m_IgnoredIoListHead.Flink != &this->m_IgnoredIoListHead )
  {
    return 0;
  }
  v17 = this->__vftable;
  this->m_Removing = 0;
  v17->ClearTargetPointers(this);
  return 1;
}
