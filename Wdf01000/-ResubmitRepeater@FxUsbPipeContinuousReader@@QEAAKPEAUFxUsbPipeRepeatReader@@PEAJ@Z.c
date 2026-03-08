/*
 * XREFs of ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C005AD1C
 * Callers:
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C005A2D8 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x1C005B230 (-_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PE.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0006670 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qdd @ 0x1C0026A80 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqqq @ 0x1C0047528 (WPP_IFR_SF_qqqq.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0059F5C (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C005AB54 (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     WPP_IFR_SF_qdq @ 0x1C005B8B8 (WPP_IFR_SF_qdq.c)
 */

__int64 __fastcall FxUsbPipeContinuousReader::ResubmitRepeater(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *Repeater,
        int *Status)
{
  unsigned int v3; // ebp
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  int v8; // ebx
  unsigned __int8 v9; // r8
  const void *_a1; // rax
  unsigned __int8 v11; // r8
  unsigned int v12; // eax
  const void *ObjectHandleUnchecked; // rax
  FxUsbPipe *m_Pipe; // r9
  unsigned __int8 m_NumReaders; // cl
  unsigned __int8 v16; // al
  const void *v17; // rax
  int v18; // edx
  unsigned int _a3; // r8d
  const void *v20; // rax
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0;
  irql = 0;
  m_Globals = this->m_Pipe->m_Globals;
  v8 = FxUsbPipeContinuousReader::FormatRepeater(this, Repeater);
  FxNonPagedObject::Lock(this->m_Pipe, &irql, v9);
  if ( this->m_WorkItemQueued )
  {
    v8 = -1073741536;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_Pipe);
    WPP_IFR_SF_qqqq(
      m_Globals,
      4u,
      0xEu,
      0xDu,
      (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids,
      _a1,
      Repeater,
      Repeater->Request,
      Repeater->RequestIrp);
  }
  else if ( v8 < 0 )
  {
    Repeater->Request->m_Irp.m_Irp->IoStatus.Status = v8;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_Pipe);
    WPP_IFR_SF_qdq(
      m_Globals,
      4u,
      0xEu,
      0xEu,
      (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids,
      ObjectHandleUnchecked,
      v8,
      Repeater);
    m_Pipe = this->m_Pipe;
    if ( m_Pipe->m_State == WdfIoTargetStarted )
    {
      m_NumReaders = this->m_NumReaders;
      v16 = this->m_NumFailedReaders + 1;
      this->m_NumFailedReaders = v16;
      if ( v16 == m_NumReaders )
      {
        FxUsbPipeContinuousReader::QueueWorkItemLocked(this, Repeater);
      }
      else
      {
        v17 = (const void *)FxObject::GetObjectHandleUnchecked(m_Pipe);
        WPP_IFR_SF_qdd(m_Globals, 4u, 0xEu, 0xFu, (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids, v17, v18, _a3);
      }
    }
    else
    {
      v20 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_Pipe);
      WPP_IFR_SF_q(m_Globals, 4u, 0xEu, 0x10u, (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids, v20);
    }
  }
  else
  {
    v12 = FxIoTarget::SubmitLocked(this->m_Pipe, Repeater->Request, 0LL, 0x80000000);
    v3 = v12;
    if ( (v12 & 1) != 0 )
    {
      KeClearEvent(&Repeater->ReadCompletedEvent.m_Event);
    }
    else if ( (v12 & 2) != 0 )
    {
      v8 = -1073741536;
    }
    else
    {
      v8 = Repeater->Request->m_Irp.m_Irp->IoStatus.Status;
    }
  }
  FxNonPagedObject::Unlock(this->m_Pipe, irql, v11);
  *Status = v8;
  return v3;
}
