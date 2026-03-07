__int64 __fastcall imp_WdfIoQueueGetState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        unsigned __int64 QueueCount,
        unsigned int *DriverCount)
{
  unsigned int *v4; // rdi
  FxIoQueue *v6; // rcx
  unsigned int m_RequestCount; // r8d
  unsigned int m_DriverIoCount; // edx
  __int64 result; // rax
  FxIoQueue *pQueue; // [rsp+48h] [rbp+10h] BYREF

  v4 = (unsigned int *)QueueCount;
  LOWORD(QueueCount) = 0;
  pQueue = 0LL;
  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  v6 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
  {
    QueueCount = LOWORD(v6->FxNonPagedObject::FxObject::__vftable);
    v6 = (FxIoQueue *)((char *)v6 - QueueCount);
  }
  if ( v6->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pQueue, (void *)Queue, 0x1003u, QueueCount);
    v6 = pQueue;
  }
  m_RequestCount = v6->m_Queue.m_RequestCount;
  m_DriverIoCount = v6->m_DriverIoCount;
  if ( v4 )
    *v4 = m_RequestCount;
  if ( DriverCount )
    *DriverCount = m_DriverIoCount;
  result = pQueue->m_QueueState & 3;
  if ( !m_RequestCount )
    result = (unsigned int)result | 4;
  if ( !m_DriverIoCount )
    result = (unsigned int)result | 8;
  if ( pQueue->m_PowerManaged )
  {
    if ( pQueue->m_PowerState != FxIoQueuePowerOn )
      return (unsigned int)result | 0x10;
  }
  return result;
}
