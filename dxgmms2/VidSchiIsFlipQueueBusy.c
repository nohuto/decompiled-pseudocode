__int64 __fastcall VidSchiIsFlipQueueBusy(__int64 a1)
{
  unsigned __int8 v2; // di
  unsigned int v3; // r8d
  unsigned int v4; // edx
  __int64 v5; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
  v3 = *(_DWORD *)(a1 + 40);
  v4 = 0;
  if ( v3 )
  {
    v5 = a1 + 3200;
    while ( !*(_QWORD *)v5 || !*(_DWORD *)(*(_QWORD *)v5 + 3088LL) )
    {
      ++v4;
      v5 += 8LL;
      if ( v4 >= v3 )
        goto LABEL_6;
    }
    v2 = 1;
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
