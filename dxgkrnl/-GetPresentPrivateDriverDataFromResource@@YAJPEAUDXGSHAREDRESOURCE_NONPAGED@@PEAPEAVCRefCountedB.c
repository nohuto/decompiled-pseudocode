__int64 __fastcall GetPresentPrivateDriverDataFromResource(
        KSPIN_LOCK *a1,
        KSPIN_LOCK *a2,
        struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA *a3)
{
  UINT PrivateDriverDataSize; // ebp
  unsigned int v7; // edi
  KSPIN_LOCK v8; // rbx
  UINT v9; // eax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  PrivateDriverDataSize = a3->PrivateDriverDataSize;
  a3->PrivateDriverDataSize = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 0;
  KeAcquireInStackQueuedSpinLock(a1 + 2, &LockHandle);
  v8 = a1[1];
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 8);
    a3->PrivateDriverDataSize = v9;
    if ( PrivateDriverDataSize >= v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 12));
    }
    else
    {
      v7 = -1073741306;
      WdLogSingleEntry2(3LL, -1073741306LL, 13808LL);
      v8 = 0LL;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = v7;
  *a2 = v8;
  return result;
}
