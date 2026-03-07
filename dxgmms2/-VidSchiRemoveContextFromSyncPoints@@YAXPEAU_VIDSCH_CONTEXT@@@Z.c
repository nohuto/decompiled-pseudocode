void __fastcall VidSchiRemoveContextFromSyncPoints(struct _VIDSCH_CONTEXT *a1)
{
  __int64 v1; // rbx
  KSPIN_LOCK *v3; // rcx
  __int64 **v4; // rbx
  __int64 *i; // rax
  unsigned int v6; // r8d
  unsigned int v7; // edx
  __int64 v8; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 13);
  v3 = (KSPIN_LOCK *)(*(_QWORD *)(v1 + 32) + 1728LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v3, &LockHandle);
  v4 = (__int64 **)(v1 + 1608);
  for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
  {
    v6 = *((_DWORD *)i + 16);
    v7 = 0;
    if ( v6 )
    {
      v8 = i[3];
      while ( *(struct _VIDSCH_CONTEXT **)(v8 + 16LL * v7) != a1 )
      {
        if ( ++v7 >= v6 )
          goto LABEL_10;
      }
      *(_QWORD *)(v8 + 16LL * v7) = 0LL;
    }
LABEL_10:
    ;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
