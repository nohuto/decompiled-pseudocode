DXGHANDLETABLELOCKEXCLUSIVE *__fastcall DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
        DXGHANDLETABLELOCKEXCLUSIVE *this,
        struct DXGPROCESS *a2)
{
  bool v2; // zf
  struct _KTHREAD **v3; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  DXGHANDLETABLELOCKEXCLUSIVE *result; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // r9

  v2 = (struct DXGPROCESS *)((char *)a2 + 248) == 0LL;
  v3 = (struct _KTHREAD **)((char *)a2 + 248);
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = v3;
  if ( !v2 && v3[1] == KeGetCurrentThread() )
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
  v5 = *((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v12 = *(unsigned int *)(v5 + 24);
      if ( (_DWORD)v12 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, "g", v7, v12);
    }
    ExAcquirePushLockExclusiveEx(v5, 0LL);
  }
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  result = this;
  *((_DWORD *)this + 4) = 2;
  return result;
}
