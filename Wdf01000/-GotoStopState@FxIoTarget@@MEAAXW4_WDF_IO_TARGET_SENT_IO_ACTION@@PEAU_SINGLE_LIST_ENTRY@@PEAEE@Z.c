/*
 * XREFs of ?GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0053360
 * Callers:
 *     ?GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C005A890 (-GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ql @ 0x1C00190DC (WPP_IFR_SF_ql.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C0052E28 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
 */

void __fastcall FxIoTarget::GotoStopState(
        FxIoTarget *this,
        _WDF_IO_TARGET_SENT_IO_ACTION Action,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 *Wait,
        unsigned __int8 LockSelf)
{
  unsigned __int8 v5; // bp
  char v6; // r14
  unsigned __int8 m_WaitingForSentIo; // di
  _WDF_IO_TARGET_STATE m_State; // edx
  const void *_a1; // rax
  int _a2; // edx
  const _GUID *traceGuid; // r10
  int v16; // esi
  _LIST_ENTRY *p_m_SentIoListHead; // r8
  const void *ObjectHandleUnchecked; // rax
  const _GUID *v19; // r10
  FxCREvent *p_m_SentIoEvent; // rcx
  unsigned __int8 v21; // r8
  unsigned __int8 added; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+78h] [rbp+10h] BYREF

  v5 = 0;
  added = 0;
  v6 = 0;
  irql = 0;
  m_WaitingForSentIo = 0;
  if ( LockSelf )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)SentRequestListHead);
    v5 = irql;
  }
  m_State = this->m_State;
  if ( m_State == WdfIoTargetStarted || m_State == WdfIoTargetPurged )
  {
    this->m_State = WdfIoTargetStopped;
  }
  else if ( m_State != WdfIoTargetStopped )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_ql(this->m_Globals, 4u, 0xEu, 0x11u, traceGuid, _a1, _a2);
  }
  v16 = Action - 1;
  if ( v16 )
  {
    if ( v16 != 1 )
      goto LABEL_17;
  }
  else
  {
    v6 = 1;
  }
  p_m_SentIoListHead = &this->m_SentIoListHead;
  if ( p_m_SentIoListHead->Flink == p_m_SentIoListHead )
  {
    m_WaitingForSentIo = this->m_WaitingForSentIo;
    if ( m_WaitingForSentIo )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(this->m_Globals, 3u, 0xEu, 0x12u, v19, ObjectHandleUnchecked);
    }
  }
  else
  {
    m_WaitingForSentIo = 1;
    if ( v6 )
      FxIoTarget::GetSentRequestsListLocked(this, SentRequestListHead, p_m_SentIoListHead, (bool *)&added);
  }
LABEL_17:
  this->m_WaitingForSentIo = m_WaitingForSentIo;
  p_m_SentIoEvent = &this->m_SentIoEvent;
  *Wait = m_WaitingForSentIo;
  if ( m_WaitingForSentIo )
    KeClearEvent(&p_m_SentIoEvent->m_Event.m_Event);
  else
    KeSetEvent(&p_m_SentIoEvent->m_Event.m_Event, 0, 0);
  if ( LockSelf )
    FxNonPagedObject::Unlock(this, v5, v21);
}
