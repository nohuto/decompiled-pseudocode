/*
 * XREFs of ?PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV2@@Z @ 0x1C00073C8
 * Callers:
 *     imp_WdfIoQueueFindRequest @ 0x1C0007300 (imp_WdfIoQueueFindRequest.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C00074A0 (-PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0034C84 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BB710 (-Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::PeekRequest(
        FxIoQueue *this,
        FxRequest *TagRequest,
        _FILE_OBJECT *FileObject,
        _WDF_REQUEST_PARAMETERS *Parameters,
        FxRequest **pOutRequest)
{
  bool v6; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 *p_FxVerifierOn; // rbx
  int v12; // esi
  unsigned __int8 v13; // r8
  int result; // eax
  const void *_a1; // rax
  FxRequest *v16; // rdi
  FxRequest *pRequest; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  pRequest = 0LL;
  v6 = this->m_Type == WdfIoQueueDispatchManual;
  m_Globals = this->m_Globals;
  irql = 0;
  if ( v6 )
  {
    p_FxVerifierOn = &m_Globals->FxVerifierOn;
    if ( !TagRequest
      || !*p_FxVerifierOn
      || (result = FxIoQueue::Vf_VerifyPeekRequest(this, m_Globals, TagRequest), result >= 0) )
    {
      FxNonPagedObject::Lock(this, &irql, (unsigned __int8)FileObject);
      v12 = FxRequest::PeekRequest(&this->m_Queue, TagRequest, FileObject, Parameters, &pRequest);
      if ( v12 == -2147483622 && !FileObject && !TagRequest && this->m_Queue.m_RequestCount > 0 )
        this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 1;
      FxNonPagedObject::Unlock(this, irql, v13);
      if ( v12 >= 0 )
      {
        v16 = pRequest;
        if ( *p_FxVerifierOn )
          FxRequestBase::SetVerifierFlags(pRequest, 2);
        *pOutRequest = v16;
      }
      return v12;
    }
  }
  else
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Fu, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return -1073741808;
  }
  return result;
}
