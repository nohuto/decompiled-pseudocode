__int64 __fastcall FxRequest::PeekRequest(
        FxIrpQueue *IrpQueue,
        FxRequest *TagRequest,
        _FILE_OBJECT *FileObject,
        _WDF_REQUEST_PARAMETERS *Parameters,
        FxRequest **ppOutRequest)
{
  FxIrpQueue *Flink; // r10
  unsigned __int64 v8; // r11
  bool v9; // dl
  unsigned int v10; // ebx
  FxNonPagedObject *m_LockObject; // rcx
  int v13; // r8d
  FxRequest *v14; // rdi
  unsigned __int8 v15; // r8

  Flink = (FxIrpQueue *)IrpQueue->m_Queue.Flink;
  v8 = (unsigned __int64)&TagRequest->120 & -(__int64)(TagRequest != 0LL);
  v9 = v8 == 0;
  if ( (FxIrpQueue *)IrpQueue->m_Queue.Flink == IrpQueue )
  {
LABEL_2:
    if ( !v8 )
      return (unsigned int)-2147483622;
    v10 = -1073741275;
    if ( v9 )
      return (unsigned int)-2147483622;
    return v10;
  }
  while ( 1 )
  {
    if ( BYTE4(Flink[-3].m_LockObject) )
      goto LABEL_11;
    m_LockObject = Flink[-1].m_LockObject;
    if ( !v9 )
    {
      v9 = m_LockObject == (FxNonPagedObject *)v8;
      goto LABEL_11;
    }
    if ( !FileObject )
      break;
    if ( *(_FILE_OBJECT **)&Flink->m_LockObject->m_SpinLock.m_DbgFlagIsInitialized == FileObject )
    {
      v13 = 432;
      goto LABEL_14;
    }
LABEL_11:
    Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
    if ( Flink == IrpQueue )
      goto LABEL_2;
  }
  v13 = 447;
LABEL_14:
  v10 = 0;
  v14 = (FxRequest *)&m_LockObject[-1];
  FxObject::AddRef(m_LockObject - 1, 0LL, v13, "minkernel\\wdf\\framework\\shared\\core\\fxirpqueue.cpp");
  *ppOutRequest = v14;
  if ( Parameters )
    return (unsigned int)FxRequest::GetParameters(v14, Parameters, v15);
  return v10;
}
