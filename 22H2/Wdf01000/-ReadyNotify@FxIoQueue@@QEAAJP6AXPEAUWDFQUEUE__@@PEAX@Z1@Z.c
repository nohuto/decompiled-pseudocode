/*
 * XREFs of ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0076F40
 * Callers:
 *     imp_WdfIoQueueReadyNotify @ 0x1C0074530 (imp_WdfIoQueueReadyNotify.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C002FD7C (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxIoQueue::ReadyNotify(
        FxIoQueue *this,
        void (__fastcall *QueueReady)(WDFQUEUE__ *, void *),
        void *Context)
{
  bool v3; // zf
  void *v4; // rbp
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a1; // rax
  unsigned int v9; // edi
  unsigned __int8 v11; // r8
  unsigned __int16 v12; // r9
  void (__fastcall *Method)(WDFQUEUE__ *, void *); // rax
  const void *ObjectHandleUnchecked; // rax
  __int64 _a2; // rdx
  unsigned __int16 v16; // r9
  const void *v17; // rax
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  v3 = this->m_Type == WdfIoQueueDispatchManual;
  v4 = Context;
  m_Globals = this->m_Globals;
  irql = 0;
  if ( !v3 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v9 = -1073741808;
    WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x3Cu, WPP_FxIoQueue_cpp_Traceguids, _a1, 0xC0000010);
    FxVerifierDbgBreakPoint(m_Globals);
    return v9;
  }
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Context);
  if ( this->m_Deleted )
  {
    v9 = -1073741738;
LABEL_15:
    FxNonPagedObject::Unlock(this, irql, v11);
    return v9;
  }
  Method = this->m_ReadyNotify.Method;
  if ( QueueReady )
  {
    if ( Method )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v16 = 61;
LABEL_13:
      v9 = -1073741808;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, v16, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked, _a2, -1073741808);
      goto LABEL_14;
    }
  }
  else
  {
    if ( !Method )
    {
      v17 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v9 = -1073741808;
      WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x3Eu, WPP_FxIoQueue_cpp_Traceguids, v17, 0xC0000010);
LABEL_14:
      FxVerifierDbgBreakPoint(m_Globals);
      goto LABEL_15;
    }
    if ( (this->m_QueueState & 2) != 0 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v16 = 63;
      goto LABEL_13;
    }
    v4 = 0LL;
    QueueReady = 0LL;
  }
  this->m_ReadyNotify.Method = QueueReady;
  this->m_ReadyNotifyContext = v4;
  FxIoQueue::DispatchEvents(this, irql, 0LL, v12);
  return 0LL;
}
