/*
 * XREFs of ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x1C006E220
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqqd @ 0x1C002EB50 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qqqq @ 0x1C005B24C (WPP_IFR_SF_qqqq.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006DA2C (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C006DCB4 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 */

void __fastcall FxUsbPipeContinuousReader::_FxUsbPipeRequestComplete(
        WDFREQUEST__ *Request,
        WDFUSBPIPE__ *Target,
        _WDF_REQUEST_COMPLETION_PARAMS *Params,
        FxUsbPipeRepeatReader *Context)
{
  FxRequest *v4; // r10
  FxUsbPipeContinuousReader *Parent; // r14
  char v6; // bp
  char v7; // si
  FxNonPagedObject *m_Pipe; // rdi
  int Status; // r8d
  const void *_a1; // rax
  int _a4; // r8d
  const void *_a2; // r10
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // r8
  const void *ObjectHandleUnchecked; // rax
  const void *_a3; // r10
  const void *v18; // rax
  int irql; // [rsp+88h] [rbp+20h] BYREF

  v4 = Context->Request;
  Parent = Context->Parent;
  v6 = 0;
  v7 = 0;
  m_Pipe = Parent->m_Pipe;
  Status = Context->Request->m_Irp.m_Irp->IoStatus.Status;
  irql = Status;
  if ( Status < 0 )
  {
    if ( Status == -1073741536 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(m_Pipe);
      WPP_IFR_SF_qqqq(
        m_Pipe->m_Globals,
        4u,
        0xEu,
        0x12u,
        (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids,
        ObjectHandleUnchecked,
        Context,
        _a3,
        Context->RequestIrp);
    }
    else
    {
      LOBYTE(irql) = 0;
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(m_Pipe);
      WPP_IFR_SF_qqqd(
        m_Pipe->m_Globals,
        4u,
        0xEu,
        0x11u,
        (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids,
        _a1,
        _a2,
        (__int64)Context->RequestIrp,
        _a4);
      FxNonPagedObject::Lock(m_Pipe, (unsigned __int8 *)&irql, v14);
      KeSetEvent(&Context->ReadCompletedEvent.m_Event, 0, 0);
      v6 = 1;
      FxUsbPipeContinuousReader::QueueWorkItemLocked(Parent, Context);
      FxNonPagedObject::Unlock(m_Pipe, irql, v15);
    }
  }
  else
  {
    Parent->m_ReadCompleteCallback(
      Target,
      *(WDFMEMORY__ **)(v4->m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value + 8),
      *(_QWORD *)(v4->m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value + 16),
      Parent->m_ReadCompleteContext);
    v7 = FxUsbPipeContinuousReader::ResubmitRepeater(Parent, Context, &irql);
  }
  if ( (v7 & 1) != 0 )
  {
    KeInsertQueueDpc(&Context->Dpc, 0LL, 0LL);
  }
  else if ( (v7 & 2) != 0 )
  {
    v18 = (const void *)FxObject::GetObjectHandleUnchecked(m_Pipe);
    WPP_IFR_SF_qqqq(
      m_Pipe->m_Globals,
      4u,
      0xEu,
      0x13u,
      (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids,
      v18,
      Context,
      Context->Request,
      Context->RequestIrp);
  }
  else if ( !v6 )
  {
    KeSetEvent(&Context->ReadCompletedEvent.m_Event, 0, 0);
  }
}
