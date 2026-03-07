void __fastcall VidSchiDecrementContextReference(struct _VIDSCH_CONTEXT *a1, int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  struct _VIDSCH_CONTEXT **v7; // rcx
  __int64 v8; // rdx
  struct _VIDSCH_CONTEXT **v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  void *v13; // rcx
  _QWORD *v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1728), &LockHandle);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 18, 0xFFFFFFFF) == 1 )
  {
    v5 = *((_QWORD *)a1 + 12);
    if ( *(struct _VIDSCH_CONTEXT **)(v5 + 224) == a1 )
      *(_QWORD *)(v5 + 224) = 0LL;
    v6 = *((_QWORD *)a1 + 1);
    if ( *(struct _VIDSCH_CONTEXT **)(v6 + 8) != (struct _VIDSCH_CONTEXT *)((char *)a1 + 8)
      || (v7 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 2), *v7 != (struct _VIDSCH_CONTEXT *)((char *)a1 + 8))
      || (*v7 = (struct _VIDSCH_CONTEXT *)v6,
          *(_QWORD *)(v6 + 8) = v7,
          v8 = *((_QWORD *)a1 + 3),
          *(struct _VIDSCH_CONTEXT **)(v8 + 8) != (struct _VIDSCH_CONTEXT *)((char *)a1 + 24))
      || (v9 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 4), *v9 != (struct _VIDSCH_CONTEXT *)((char *)a1 + 24)) )
    {
      __fastfail(3u);
    }
    *v9 = (struct _VIDSCH_CONTEXT *)v8;
    *(_QWORD *)(v8 + 8) = v9;
    while ( 1 )
    {
      v10 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v4 + 1736), (_QWORD **)a1 + 89, (_DWORD *)a1 + 182);
      if ( !v10 )
        break;
      ExFreePoolWithTag(v10 - 1, 0);
    }
    if ( (*((_DWORD *)a1 + 28) & 0x100) != 0 )
    {
      while ( 1 )
      {
        v14 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v4 + 1736), (_QWORD **)a1 + 92, (_DWORD *)a1 + 188);
        if ( !v14 )
          break;
        ExFreePoolWithTag(v14 - 1, 0);
      }
    }
    if ( bTracingEnabled )
      VidSchiFlushGpuWorkEntries(a1, v11, v12);
    v13 = (void *)*((_QWORD *)a1 + 124);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    VidSchiDecrementDeviceReference(*((PVOID *)a1 + 13));
    ExFreePoolWithTag(a1, 0);
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
