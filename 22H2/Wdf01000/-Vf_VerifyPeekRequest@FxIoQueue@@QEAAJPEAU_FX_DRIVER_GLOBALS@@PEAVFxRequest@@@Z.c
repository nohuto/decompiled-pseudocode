/*
 * XREFs of ?Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C76B0
 * Callers:
 *     ?PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV2@@Z @ 0x1C000C2CC (-PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPE.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyRequestIsTagRequest@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6A78 (-Vf_VerifyRequestIsTagRequest@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoQueue::Vf_VerifyPeekRequest(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *TagRequest)
{
  unsigned int IsTagRequest; // ebx
  unsigned __int8 v6; // r8
  FxIoQueue *irql; // [rsp+30h] [rbp+8h] OVERLAPPED BYREF

  irql = this;
  IsTagRequest = 0;
  LOBYTE(irql) = 0;
  FxNonPagedObject::Lock(TagRequest, (unsigned __int8 *)&irql, (unsigned __int8)TagRequest);
  if ( FxDriverGlobals->FxVerifierOn )
    IsTagRequest = FxRequest::Vf_VerifyRequestIsTagRequest(TagRequest, FxDriverGlobals);
  FxNonPagedObject::Unlock(TagRequest, (unsigned __int8)irql, v6);
  return IsTagRequest;
}
