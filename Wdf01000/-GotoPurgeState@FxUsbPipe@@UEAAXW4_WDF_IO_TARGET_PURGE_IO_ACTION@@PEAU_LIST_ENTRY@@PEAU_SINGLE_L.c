/*
 * XREFs of ?GotoPurgeState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C005A4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0052ED0 (-GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_.c)
 *     WPP_IFR_SF_qLL @ 0x1C005B6D8 (WPP_IFR_SF_qLL.c)
 */

void __fastcall FxUsbPipe::GotoPurgeState(
        FxUsbPipe *this,
        unsigned __int32 Action,
        _LIST_ENTRY *PendedRequestListHead,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 *Wait,
        unsigned __int8 LockSelf)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  const void *level; // rax
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  unsigned __int8 *v14; // rsi
  unsigned __int8 v15; // r8
  FxUsbPipeContinuousReader *m_Reader; // rax
  const void *ObjectHandleUnchecked; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]
  unsigned int v19; // [rsp+38h] [rbp-20h]
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  if ( LockSelf )
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)PendedRequestListHead);
  if ( this->m_Reader )
  {
    level = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qLL(m_Globals, v12, v13, 0x16u, traceGuid, level, Action, v19);
    Action = 1;
  }
  v14 = Wait;
  FxIoTarget::GotoPurgeState(
    this,
    (_WDF_IO_TARGET_PURGE_IO_ACTION)Action,
    PendedRequestListHead,
    SentRequestListHead,
    Wait,
    0);
  m_Reader = this->m_Reader;
  if ( m_Reader )
  {
    m_Reader->m_ReadersSubmitted = 0;
    if ( this->m_Reader->m_WorkItemThread == KeGetCurrentThread() )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 2u, 0xEu, 0x17u, (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids, ObjectHandleUnchecked);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    *v14 = 1;
  }
  if ( LockSelf )
    FxNonPagedObject::Unlock(this, irql, v15);
}
