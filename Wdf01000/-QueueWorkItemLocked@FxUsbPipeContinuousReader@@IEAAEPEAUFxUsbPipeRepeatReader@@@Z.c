unsigned __int8 __fastcall FxUsbPipeContinuousReader::QueueWorkItemLocked(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *Repeater)
{
  char v3; // di
  FxUsbPipe *m_Pipe; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a1; // rax
  const void *ObjectHandleUnchecked; // rax
  __int64 v9; // rdx
  unsigned __int16 v10; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]

  v3 = 0;
  m_Pipe = this->m_Pipe;
  m_Globals = m_Pipe->m_Globals;
  if ( m_Pipe->m_State != WdfIoTargetStarted || this->m_WorkItemQueued )
    goto LABEL_6;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(m_Pipe);
  WPP_IFR_SF_q(m_Globals, 4u, 0xEu, 0xAu, (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids, _a1);
  if ( !FxSystemWorkItem::EnqueueWorker(
          this->m_WorkItem,
          FxUsbPipeContinuousReader::_FxUsbPipeRequestWorkItemThunk,
          Repeater,
          1u) )
  {
    WPP_IFR_SF_(m_Globals, 2u, 0xDu, 0xBu, (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids);
LABEL_6:
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_Pipe);
    WPP_IFR_SF_qdL(
      m_Globals,
      *(_DWORD *)(v9 + 328),
      this->m_WorkItemQueued,
      v10,
      traceGuid,
      ObjectHandleUnchecked,
      this->m_WorkItemQueued,
      *(_DWORD *)(v9 + 328));
    return v3;
  }
  this->m_WorkItemQueued = 1;
  return 1;
}
