__int64 __fastcall imp_WdfIoQueueRetrieveRequestByFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFFILEOBJECT__ *FileObject,
        WDFREQUEST__ **OutRequest)
{
  WDFREQUEST__ *ObjectHandleUnchecked; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int Request; // edx
  FxRequest *pOutputRequest; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  FxIoQueue *pQueue; // [rsp+40h] [rbp+8h] BYREF
  FxFileObject *pFO; // [rsp+58h] [rbp+20h] BYREF

  ObjectHandleUnchecked = 0LL;
  pQueue = 0LL;
  pOutputRequest = 0LL;
  pFO = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Queue, 0x1003u, (void **)&pQueue);
  m_Globals = pQueue->m_Globals;
  if ( !OutRequest )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)FileObject, 0x1018u, (void **)&pFO);
  Request = FxIoQueue::GetRequest(pQueue, pFO->m_FileObject.m_FileObject, 0LL, &pOutputRequest);
  if ( Request >= 0 )
    ObjectHandleUnchecked = (WDFREQUEST__ *)FxObject::GetObjectHandleUnchecked(pOutputRequest);
  *OutRequest = ObjectHandleUnchecked;
  return (unsigned int)Request;
}
