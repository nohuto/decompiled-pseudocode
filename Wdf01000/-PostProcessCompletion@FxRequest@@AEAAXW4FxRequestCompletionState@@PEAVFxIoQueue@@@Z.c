/*
 * XREFs of ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0001238
 * Callers:
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C00011F8 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C0001304 (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000809C (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxRequest::PostProcessCompletion(FxRequest *this, FxRequestCompletionState State, FxIoQueue *Queue)
{
  if ( State )
  {
    if ( (State & 0x80u) == 0 )
      FxIoQueue::RequestCompletedCallback(Queue, this);
    FxObject::DeleteEarlyDisposedObject(this);
  }
  else
  {
    FxObject::AddRef(this, (void *)0x706D6F43, 925, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    this->DeleteObject(this);
  }
}
