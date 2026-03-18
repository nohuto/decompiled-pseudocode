/*
 * XREFs of ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000C770
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0009160 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?CanComplete@FxRequestBase@@QEAAEXZ @ 0x1C000C910 (-CanComplete@FxRequestBase@@QEAAEXZ.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C000C930 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000C9A0 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C000C9D0 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?PropagatePendingReturned@FxIrp@@QEAAXXZ @ 0x1C000CAB0 (-PropagatePendingReturned@FxIrp@@QEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013DA4 (WPP_IFR_SF_qq.c)
 */

__int64 __fastcall FxIoTarget::_RequestCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        FxRequestBase *Context)
{
  FxIoTarget *m_Target; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxRequestBase *v6; // rsi
  unsigned __int8 v7; // r14
  unsigned __int8 CanComplete; // bp
  _FX_DRIVER_GLOBALS *v9; // rcx
  FxRequestBase *_a1; // rax
  FxRequestBase *v12; // rax
  _IRP *m_Irp; // rax
  _FX_DRIVER_GLOBALS *v14; // r10
  const void *v15; // rcx
  FxIrp PreviousIrql; // [rsp+78h] [rbp+10h] BYREF

  m_Target = Context->m_Target;
  PreviousIrql.m_Irp = Irp;
  if ( (void (__fastcall *)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, _KEVENT *))Context->m_CompletionRoutine.m_Completion != FxIoTarget::_SyncCompletionRoutine )
    FxIrp::PropagatePendingReturned(&PreviousIrql);
  LOBYTE(PreviousIrql.m_Irp) = 0;
  m_Globals = m_Target->m_Globals;
  v6 = (FxRequestBase *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( m_Globals->FxVerboseOn )
  {
    v12 = (FxRequestBase *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Context->m_ObjectSize )
      v12 = 0LL;
    if ( !v12 )
      v12 = Context;
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x31u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v12);
  }
  v7 = 0;
  CanComplete = 0;
  FxNonPagedObject::Lock(m_Target, (unsigned __int8 *)&PreviousIrql);
  Context->m_TargetFlags |= 1u;
  if ( FxRequestBase::CancelTimer(Context) && (CanComplete = FxRequestBase::CanComplete(Context)) != 0 )
  {
    if ( (Context->m_TargetFlags & 8) != 0 )
    {
      m_Irp = Context->m_Irp.m_Irp;
      if ( m_Irp->IoStatus.Status == -1073741536 )
        m_Irp->IoStatus.Status = -1073741643;
    }
    v7 = FxIoTarget::RemoveCompletedRequestLocked(m_Target, Context);
  }
  else
  {
    if ( Context->m_ObjectSize && v6 )
      _a1 = (FxRequestBase *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = Context;
    WPP_IFR_SF_q(m_Target->m_Globals, 4u, 0xEu, 0x32u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  FxNonPagedObject::Unlock(m_Target, (unsigned __int8)PreviousIrql.m_Irp);
  if ( CanComplete )
  {
    v9 = m_Target->m_Globals;
    if ( v9->FxVerboseOn )
    {
      if ( !Context->m_ObjectSize )
        v6 = 0LL;
      if ( !v6 )
        v6 = Context;
      WPP_IFR_SF_q(v9, 5u, 0xEu, 0x33u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v6);
    }
    FxRequestBase::CompleteSubmitted(Context);
  }
  if ( v7 )
  {
    v14 = m_Target->m_Globals;
    if ( v14->FxVerboseOn )
    {
      v15 = (const void *)((unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_Target->m_ObjectSize )
        v15 = 0LL;
      WPP_IFR_SF_qq(v14, 5u, 0xEu, 0x34u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v15, &m_Target->m_SentIoEvent);
    }
    KeSetEvent(&m_Target->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( CanComplete )
    FxIoTarget::DecrementIoCount(m_Target);
  return 3221225494LL;
}
