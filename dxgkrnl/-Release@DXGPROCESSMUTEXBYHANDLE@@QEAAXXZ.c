void __fastcall DXGPROCESSMUTEXBYHANDLE::Release(DXGPROCESSMUTEXBYHANDLE *this)
{
  struct _KTHREAD **v2; // rcx
  DXGPROCESS *v3; // rcx
  void *v4; // rdi
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 28) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
  v2 = (struct _KTHREAD **)(*((_QWORD *)this + 2) + 104LL);
  *((_BYTE *)this + 28) = 0;
  DXGFASTMUTEX::Release(v2);
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v5);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  v3 = (DXGPROCESS *)*((_QWORD *)this + 2);
  v4 = (void *)*((_QWORD *)v3 + 7);
  DXGPROCESS::ReleaseReference(v3);
  *((_QWORD *)this + 2) = 0LL;
  if ( *((_BYTE *)this + 29) )
  {
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 32));
    *((_BYTE *)this + 29) = 0;
  }
  ObfDereferenceObject(v4);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
}
