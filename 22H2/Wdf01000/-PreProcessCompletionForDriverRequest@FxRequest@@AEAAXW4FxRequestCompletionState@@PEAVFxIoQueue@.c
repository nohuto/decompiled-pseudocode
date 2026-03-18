/*
 * XREFs of ?PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C004F008
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007EE0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?PreRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C004F070 (-PreRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 */

void __fastcall FxRequest::PreProcessCompletionForDriverRequest(
        FxRequest *this,
        FxRequestCompletionState State,
        FxIoQueue *Queue)
{
  if ( State == FxRequestCompletionStateQueue )
  {
    FxIoQueue::PreRequestCompletedCallback(Queue, this);
  }
  else if ( Queue )
  {
    FxObject::AddRef(this, (void *)0x706D6F43, 995, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
  }
  this->Release(this, (void *)1129464644, 1001, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
}
