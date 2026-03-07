void __fastcall VIDMM_PROCESS_FENCE_STORAGE::FreeSharedFenceStorageSlot(
        KSPIN_LOCK *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  unsigned int v6; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this + 7, &LockHandle);
  v3 = *(_QWORD **)a2;
  v3[12] = *(_QWORD *)(*(_QWORD *)a2 + 96LL) & ~(1LL << ((unsigned __int64)*((unsigned int *)a2 + 4) >> 6));
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v3, v6);
}
