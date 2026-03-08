/*
 * XREFs of ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C005AB54
 * Callers:
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C005AD1C (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x1C005B230 (-_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PE.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0007508 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qdL @ 0x1C005B7CC (WPP_IFR_SF_qdL.c)
 */

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
