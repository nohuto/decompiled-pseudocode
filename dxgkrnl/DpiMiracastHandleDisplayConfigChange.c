void __fastcall DpiMiracastHandleDisplayConfigChange(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v5; // rbx
  __int64 v9; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 16) == 1953656900 && *(_DWORD *)(v5 + 20) == 2 )
      {
        KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
        v9 = *(_QWORD *)(v5 + 3248);
        if ( v9 )
        {
          if ( !*(_DWORD *)(v9 + 680) )
            *(_DWORD *)(v9 + 680) = a2;
          *(_DWORD *)(*(_QWORD *)(v5 + 3248) + 684LL) = a2;
          *(_DWORD *)(*(_QWORD *)(v5 + 3248) + 688LL) = a3;
          *(_DWORD *)(*(_QWORD *)(v5 + 3248) + 692LL) = a4;
          *(_DWORD *)(*(_QWORD *)(v5 + 3248) + 696LL) = a5;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
  }
}
