/*
 * XREFs of ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C00664A0
 * Callers:
 *     imp_WdfRequestMarkCancelable @ 0x1C0035340 (imp_WdfRequestMarkCancelable.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x1C0035400 (imp_WdfRequestMarkCancelableEx.c)
 *     imp_WdfRequestUnmarkCancelable @ 0x1C0035ED0 (imp_WdfRequestUnmarkCancelable.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0034C84 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C003A8B8 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C003ABF4 (-InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?RemoveFromIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@@Z @ 0x1C003AD98 (-RemoveFromIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0063628 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z @ 0x1C00BB7FC (-Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z.c)
 */

int __fastcall FxIoQueue::RequestCancelable(
        FxIoQueue *this,
        FxRequest *pRequest,
        unsigned __int8 Cancelable,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *),
        unsigned __int8 FailIfIrpIsCancelled)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int result; // eax
  unsigned int *v11; // r8
  int inserted; // esi
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // r8
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  if ( !m_Globals->FxVerifierOn
    || (result = FxIoQueue::Vf_VerifyRequestCancelable(this, m_Globals, pRequest, Cancelable), result >= 0) )
  {
    if ( Cancelable )
    {
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::SetVerifierFlags(pRequest, 16, Cancelable);
      FxNonPagedObject::Lock(this, &irql, Cancelable);
      pRequest->m_CancelRoutine.m_Cancel = EvtRequestCancel;
      if ( this->m_CancelDispatchedRequests )
      {
        inserted = -1073741536;
      }
      else
      {
        inserted = FxRequest::InsertTailIrpQueue(pRequest, &this->m_DriverCancelable, v11);
        if ( inserted >= 0 )
        {
          FxNonPagedObject::Unlock(this, irql, (unsigned __int8)v11);
          return inserted;
        }
      }
      v13 = irql;
      if ( !FailIfIrpIsCancelled )
      {
        inserted = 0;
        pRequest->m_Canceled = 1;
        FxNonPagedObject::Unlock(this, v13, (unsigned __int8)v11);
        FxObject::AddRef(
          pRequest,
          (void *)0x75657551,
          2210,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxIoQueue::CancelForDriver(this, pRequest, v14);
        return inserted;
      }
      pRequest->m_CancelRoutine.m_Cancel = 0LL;
      FxNonPagedObject::Unlock(this, v13, (unsigned __int8)v11);
      if ( !m_Globals->FxVerifierOn )
        return inserted;
    }
    else
    {
      FxNonPagedObject::Lock(this, &irql, Cancelable);
      inserted = FxRequest::RemoveFromIrpQueue(pRequest, &this->m_DriverCancelable);
      if ( inserted >= 0 )
        pRequest->m_CancelRoutine.m_Cancel = 0LL;
      FxNonPagedObject::Unlock(this, irql, v16);
      if ( !m_Globals->FxVerifierOn || inserted < 0 )
        return inserted;
    }
    FxRequestBase::ClearVerifierFlags(pRequest, 16, v15);
    return inserted;
  }
  return result;
}
