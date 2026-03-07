__int64 __fastcall VidSchiCheckFlipQueueTimeout(
        KSPIN_LOCK *a1,
        int *a2,
        unsigned __int64 *a3,
        union _ULARGE_INTEGER *a4,
        unsigned int *a5)
{
  unsigned int v9; // r8d
  unsigned int v10; // edi
  unsigned int v11; // r10d
  char *v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1 + 216, &LockHandle);
  v9 = *((_DWORD *)a1 + 10);
  v10 = 0;
  v11 = 0;
  if ( !v9 )
  {
LABEL_6:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  v12 = (char *)(a1 + 400);
  while ( !*(_QWORD *)v12 || !*(_DWORD *)(*(_QWORD *)v12 + 3088LL) )
  {
    ++v11;
    v12 += 8;
    if ( v11 >= v9 )
      goto LABEL_6;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !*((_DWORD *)a1 + 10) )
    return 0LL;
  while ( !(unsigned int)VidSchiCheckHeadTimeout((struct _VIDSCH_GLOBAL *)a1, v10, a2, a3, a4) )
  {
    if ( ++v10 >= *((_DWORD *)a1 + 10) )
      return 0LL;
  }
  if ( a5 )
    *a5 = v10;
  return 1LL;
}
