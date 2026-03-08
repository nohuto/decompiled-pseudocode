/*
 * XREFs of ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C00667A8
 * Callers:
 *     imp_WdfIoQueueStart @ 0x1C0061CE0 (imp_WdfIoQueueStart.c)
 *     ?AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x1C00620F0 (-AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z.c)
 *     ?ResetStateForRestart@FxPkgIo@@QEAAXXZ @ 0x1C00629F8 (-ResetStateForRestart@FxPkgIo@@QEAAXXZ.c)
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C00641C4 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00658E8 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0065D48 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0066A68 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 */

void __fastcall FxIoQueue::SetState(FxIoQueue *this, _FX_IO_QUEUE_SET_STATE NewStatus)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  char v3; // di
  const void *_a1; // rax
  _FX_IO_QUEUE_STATE *p_m_QueueState; // rbx
  const void *ObjectHandleUnchecked; // rax

  m_Globals = this->m_Globals;
  v3 = NewStatus;
  if ( (NewStatus & 0x7FFCFFF0) != 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x16u, WPP_FxIoQueue_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    p_m_QueueState = &this->m_QueueState;
    if ( (NewStatus & 0x20000) != 0 )
      *p_m_QueueState &= ~0x10000u;
    if ( (NewStatus & 0x10000) != 0 )
      *p_m_QueueState |= 0x10000u;
    if ( (NewStatus & 1) != 0 )
    {
      if ( (*p_m_QueueState & 0x10000) != 0 )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(m_Globals, 4u, 0xDu, 0x17u, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked);
      }
      else
      {
        *p_m_QueueState |= 1u;
      }
    }
    if ( (v3 & 2) != 0 )
      *p_m_QueueState &= ~1u;
    if ( (v3 & 4) != 0 )
    {
      *p_m_QueueState |= 2u;
      this->m_CancelDispatchedRequests = 0;
    }
    if ( (v3 & 8) != 0 )
      *p_m_QueueState &= ~2u;
  }
}
