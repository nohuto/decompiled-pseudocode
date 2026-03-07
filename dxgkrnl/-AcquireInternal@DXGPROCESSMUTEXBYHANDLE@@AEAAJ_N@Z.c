__int64 __fastcall DXGPROCESSMUTEXBYHANDLE::AcquireInternal(DXGPROCESSMUTEXBYHANDLE *this, bool a2)
{
  ACCESS_MASK v4; // edx
  struct _KAPC_STATE *v5; // rbp
  _BYTE *v6; // r14
  int v7; // ebx
  DXGPROCESS *v9; // rbx
  void *v10; // rdi
  _BYTE v11[16]; // [rsp+50h] [rbp-28h] BYREF
  DXGPROCESS *v12; // [rsp+80h] [rbp+8h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v11);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v4 = *((_DWORD *)this + 6);
  v12 = 0LL;
  v5 = (struct _KAPC_STATE *)((char *)this + 32);
  v6 = (char *)this + 29;
  v7 = DXGPROCESS::GetByHandle(
         *((HANDLE *)this + 1),
         v4,
         a2,
         (bool *)this + 29,
         (LUID)((char *)this + 30),
         (struct _KAPC_STATE *)((char *)this + 32),
         &v12);
  if ( v7 >= 0 )
  {
    DXGPROCESS::AcquireReference(v12);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
    v9 = v12;
    if ( *((struct _KTHREAD **)v12 + 16) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 3251LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!pProcess->IsMutexOwner()", 3251LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_BYTE *)this + 28) )
      WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
    DXGFASTMUTEX::Acquire((DXGPROCESS *)((char *)v9 + 104));
    if ( *((_DWORD *)v9 + 10) == 1 )
    {
      *((_QWORD *)this + 2) = v9;
      v7 = 0;
      *((_BYTE *)this + 28) = 1;
    }
    else
    {
      DXGFASTMUTEX::Release((struct _KTHREAD **)v9 + 13);
      v10 = (void *)*((_QWORD *)v9 + 7);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
      DXGPROCESS::ReleaseReference(v9);
      if ( *v6 )
      {
        KeUnstackDetachProcess(v5);
        *v6 = 0;
      }
      ObfDereferenceObject(v10);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
      v7 = -1073741130;
    }
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return (unsigned int)v7;
}
