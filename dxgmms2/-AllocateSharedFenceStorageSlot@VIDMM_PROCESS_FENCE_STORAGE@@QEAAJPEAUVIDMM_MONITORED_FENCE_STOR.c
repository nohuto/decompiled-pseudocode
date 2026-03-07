__int64 __fastcall VIDMM_PROCESS_FENCE_STORAGE::AllocateSharedFenceStorageSlot(
        KSPIN_LOCK *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2,
        struct VIDMM_PROCESS *a3)
{
  VIDMM_FENCE_STORAGE_PAGE *v6; // rax
  VIDMM_FENCE_STORAGE_PAGE *v7; // rax
  VIDMM_FENCE_STORAGE_PAGE *v8; // rbx
  int v9; // edi
  VIDMM_FENCE_STORAGE_PAGE **v10; // rax
  KSPIN_LOCK v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v6 = (VIDMM_FENCE_STORAGE_PAGE *)operator new(176LL, 0x34346956u, 64LL);
  if ( !v6 )
    return 3221225495LL;
  v7 = VIDMM_FENCE_STORAGE_PAGE::VIDMM_FENCE_STORAGE_PAGE(v6, (struct VIDMM_PROCESS_FENCE_STORAGE *)this);
  v8 = v7;
  if ( !v7 )
    return 3221225495LL;
  v9 = VIDMM_FENCE_STORAGE_PAGE::Init(v7, a3);
  if ( v9 < 0 )
  {
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v8, 1u);
    return (unsigned int)v9;
  }
  else
  {
    VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(v8, a2);
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(this + 7, &LockHandle);
    v10 = (VIDMM_FENCE_STORAGE_PAGE **)(this + 5);
    v11 = this[5];
    if ( *(KSPIN_LOCK **)(v11 + 8) != this + 5 )
      __fastfail(3u);
    *(_QWORD *)v8 = v11;
    *((_QWORD *)v8 + 1) = v10;
    *(_QWORD *)(v11 + 8) = v8;
    *v10 = v8;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
}
