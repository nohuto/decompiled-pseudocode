/*
 * XREFs of ?Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00BB778
 * Callers:
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C000FB4E (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAA2C (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoQueue::Vf_VerifyQueueDriverCreatedRequest(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *Request,
        __int16 *OldFlags)
{
  unsigned __int8 v7; // r8
  bool v8; // zf
  int IsNotCancelable; // ebx
  FxIoQueue *irql; // [rsp+30h] [rbp+8h] OVERLAPPED BYREF

  irql = this;
  LOBYTE(irql) = 0;
  FxNonPagedObject::Lock(Request, (unsigned __int8 *)&irql, (unsigned __int8)Request);
  v8 = FxDriverGlobals->FxVerifierOn == 0;
  *OldFlags = Request->m_VerifierFlags;
  if ( v8 )
  {
    IsNotCancelable = 0;
LABEL_5:
    Request->m_VerifierFlags &= ~1u;
    goto LABEL_6;
  }
  IsNotCancelable = FxRequest::Vf_VerifyRequestIsNotCancelable(Request, FxDriverGlobals);
  if ( IsNotCancelable >= 0 )
    goto LABEL_5;
LABEL_6:
  FxNonPagedObject::Unlock(Request, (unsigned __int8)irql, v7);
  return (unsigned int)IsNotCancelable;
}
