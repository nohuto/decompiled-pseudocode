void __fastcall FxIoQueue::FlushByFileObject(FxIoQueue *this, _FILE_OBJECT *FileObject, unsigned __int8 a3)
{
  bool v4; // zf
  unsigned __int16 v6; // r9
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+40h] [rbp+18h] BYREF

  pRequest = 0LL;
  v4 = this->m_SupportForwardProgress == 0;
  irql = 0;
  if ( !v4 )
    FxIoQueue::PurgeForwardProgressIrps(this, FileObject);
  while ( 1 )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    if ( (int)FxRequest::GetNextRequest(&this->m_Queue, FileObject, 0LL, &pRequest) < 0 )
      break;
    FxObject::AddRef(
      pRequest,
      (void *)0x75657551,
      4330,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxIoQueue::CancelForQueue(this, pRequest, irql);
  }
  FxIoQueue::DispatchEvents(this, irql, 0LL, v6);
}
