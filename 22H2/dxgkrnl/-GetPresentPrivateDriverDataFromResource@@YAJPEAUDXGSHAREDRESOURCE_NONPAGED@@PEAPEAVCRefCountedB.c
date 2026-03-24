/*
 * XREFs of ?GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedBuffer@@PEAU_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA@@@Z @ 0x1C003F790
 * Callers:
 *     DxgkGetResourcePresentPrivateDriverData @ 0x1C022A550 (DxgkGetResourcePresentPrivateDriverData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPresentPrivateDriverDataFromResource(
        KSPIN_LOCK *a1,
        KSPIN_LOCK *a2,
        struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA *a3)
{
  UINT PrivateDriverDataSize; // ebp
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  KSPIN_LOCK v11; // rbx
  UINT v12; // eax
  __int64 v13; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  PrivateDriverDataSize = a3->PrivateDriverDataSize;
  a3->PrivateDriverDataSize = 0;
  v7 = 0;
  KeAcquireInStackQueuedSpinLock(a1 + 2, &LockHandle);
  v11 = a1[1];
  if ( v11 )
  {
    v12 = *(_DWORD *)(v11 + 8);
    a3->PrivateDriverDataSize = v12;
    if ( PrivateDriverDataSize >= v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 12));
    }
    else
    {
      v13 = WdLogNewEntry5_WdWarning(v9, v8, v10);
      v7 = -1073741306;
      *(_QWORD *)(v13 + 24) = -1073741306LL;
      *(_QWORD *)(v13 + 32) = 13353LL;
      WdLogEvent5_WdWarning(v13);
      v11 = 0LL;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = v7;
  *a2 = v11;
  return result;
}
