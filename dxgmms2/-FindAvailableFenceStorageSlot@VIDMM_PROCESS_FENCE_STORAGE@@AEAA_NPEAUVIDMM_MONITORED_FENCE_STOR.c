char __fastcall VIDMM_PROCESS_FENCE_STORAGE::FindAvailableFenceStorageSlot(
        VIDMM_PROCESS_FENCE_STORAGE *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2)
{
  VIDMM_PROCESS_FENCE_STORAGE *v4; // rbx
  char v5; // bl
  VIDMM_PROCESS_FENCE_STORAGE *v7; // rax
  VIDMM_PROCESS_FENCE_STORAGE **v8; // rcx
  VIDMM_PROCESS_FENCE_STORAGE **v9; // rax
  __int64 v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 7, &LockHandle);
  v4 = (VIDMM_PROCESS_FENCE_STORAGE *)*((_QWORD *)this + 3);
  if ( v4 == (VIDMM_PROCESS_FENCE_STORAGE *)((char *)this + 24) )
  {
    v5 = 0;
  }
  else
  {
    VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(*((VIDMM_FENCE_STORAGE_PAGE **)this + 3), a2);
    if ( *((_QWORD *)v4 + 12) == -1LL )
    {
      v7 = *(VIDMM_PROCESS_FENCE_STORAGE **)v4;
      if ( *(VIDMM_PROCESS_FENCE_STORAGE **)(*(_QWORD *)v4 + 8LL) != v4
        || (v8 = (VIDMM_PROCESS_FENCE_STORAGE **)*((_QWORD *)v4 + 1), *v8 != v4)
        || (*v8 = v7,
            *((_QWORD *)v7 + 1) = v8,
            v9 = (VIDMM_PROCESS_FENCE_STORAGE **)((char *)this + 8),
            v10 = *((_QWORD *)this + 1),
            *(VIDMM_PROCESS_FENCE_STORAGE **)(v10 + 8) != (VIDMM_PROCESS_FENCE_STORAGE *)((char *)this + 8)) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v4 = v10;
      *((_QWORD *)v4 + 1) = v9;
      *(_QWORD *)(v10 + 8) = v4;
      *v9 = v4;
    }
    v5 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
