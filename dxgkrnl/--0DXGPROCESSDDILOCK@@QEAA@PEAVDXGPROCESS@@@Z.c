DXGPROCESSDDILOCK *__fastcall DXGPROCESSDDILOCK::DXGPROCESSDDILOCK(DXGPROCESSDDILOCK *this, struct DXGPROCESS *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // r9
  int v9; // edx
  int v10; // ecx
  int v11; // r8d

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = ((unsigned __int64)a2 + 152) & -(__int64)(a2 != 0LL);
  if ( (((unsigned __int64)a2 + 152) & -(__int64)(a2 != 0LL)) != 0
    && *(struct _KTHREAD **)((((unsigned __int64)a2 + 152) & -(__int64)(a2 != 0LL)) + 8) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v10,
          v9,
          v11,
          0,
          2,
          -1,
          (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          1453LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( a2 )
  {
    v4 = *((_QWORD *)this + 1);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v4, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v8 = *(unsigned int *)(v4 + 24);
        if ( (_DWORD)v8 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v5, "g", v6, v8);
      }
      ExAcquirePushLockExclusiveEx(v4, 0LL);
    }
    *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
    *((_DWORD *)this + 4) = 2;
  }
  return this;
}
