int __fastcall imp_WdfIoQueueRetrieveNextRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        WDFREQUEST__ **OutRequest)
{
  WDFREQUEST__ *v3; // rbx
  __int64 Offset; // r8
  FxIoQueue *v6; // rcx
  int result; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxIoQueue *pQueue; // [rsp+48h] [rbp+10h] BYREF
  FxRequest *pOutputRequest; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  pQueue = 0LL;
  pOutputRequest = 0LL;
  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(Offset) = 0;
  v6 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
  {
    Offset = LOWORD(v6->FxNonPagedObject::FxObject::__vftable);
    v6 = (FxIoQueue *)((char *)v6 - Offset);
  }
  if ( v6->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pQueue, (void *)Queue, 0x1003u, Offset);
    v6 = pQueue;
  }
  if ( !OutRequest )
    FxVerifierNullBugCheck(v6->m_Globals, retaddr);
  result = FxIoQueue::GetRequest(v6, 0LL, 0LL, &pOutputRequest);
  if ( result >= 0 && pOutputRequest->m_ObjectSize )
    v3 = (WDFREQUEST__ *)((unsigned __int64)pOutputRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
  *OutRequest = v3;
  return result;
}
