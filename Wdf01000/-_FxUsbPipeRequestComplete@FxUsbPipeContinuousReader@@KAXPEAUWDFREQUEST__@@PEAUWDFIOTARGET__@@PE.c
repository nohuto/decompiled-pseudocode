void __fastcall FxUsbPipeContinuousReader::_FxUsbPipeRequestComplete(
        WDFREQUEST__ *Request,
        WDFUSBPIPE__ *Target,
        _WDF_REQUEST_COMPLETION_PARAMS *Params,
        char *Context)
{
  __int64 v4; // r10
  FxUsbPipeContinuousReader *v6; // rsi
  FxNonPagedObject *m_Pipe; // rdi
  int v8; // r8d
  char v9; // al
  const void *_a1; // rax
  const void *ObjectHandleUnchecked; // rax
  int _a4; // r8d
  const void *v13; // r10
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // r8
  const void *v16; // rax
  const void *_a3; // r10
  int irql; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_QWORD *)Context;
  v6 = (FxUsbPipeContinuousReader *)*((_QWORD *)Context + 2);
  m_Pipe = v6->m_Pipe;
  v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)Context + 152LL) + 48LL);
  irql = v8;
  if ( v8 < 0 )
  {
    if ( v8 != -1073741536 )
    {
      LOBYTE(irql) = 0;
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(m_Pipe);
      WPP_IFR_SF_qqqd(
        m_Pipe->m_Globals,
        4u,
        0xEu,
        0x11u,
        (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids,
        ObjectHandleUnchecked,
        v13,
        *((_QWORD *)Context + 1),
        _a4);
      FxNonPagedObject::Lock(m_Pipe, (unsigned __int8 *)&irql, v14);
      KeSetEvent((PRKEVENT)(Context + 88), 0, 0);
      FxUsbPipeContinuousReader::QueueWorkItemLocked(v6, (FxUsbPipeRepeatReader *)Context);
      FxNonPagedObject::Unlock(m_Pipe, irql, v15);
      return;
    }
    v16 = (const void *)FxObject::GetObjectHandleUnchecked(m_Pipe);
    WPP_IFR_SF_qqqq(
      m_Pipe->m_Globals,
      4u,
      0xEu,
      0x12u,
      (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids,
      v16,
      Context,
      _a3,
      *((const void **)Context + 1));
  }
  else
  {
    v6->m_ReadCompleteCallback(
      Target,
      *(WDFMEMORY__ **)(*(_QWORD *)(*(_QWORD *)(v4 + 168) + 32LL) + 8LL),
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 168) + 32LL) + 16LL),
      v6->m_ReadCompleteContext);
    v9 = FxUsbPipeContinuousReader::ResubmitRepeater(v6, (FxUsbPipeRepeatReader *)Context, &irql);
    if ( (v9 & 1) != 0 )
    {
      KeInsertQueueDpc((PRKDPC)(Context + 24), 0LL, 0LL);
      return;
    }
    if ( (v9 & 2) != 0 )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(m_Pipe);
      WPP_IFR_SF_qqqq(
        m_Pipe->m_Globals,
        4u,
        0xEu,
        0x13u,
        (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids,
        _a1,
        Context,
        *(const void **)Context,
        *((const void **)Context + 1));
      return;
    }
  }
  KeSetEvent((PRKEVENT)(Context + 88), 0, 0);
}
