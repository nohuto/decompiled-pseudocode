/*
 * XREFs of ?FreeFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0017264
 * Callers:
 *     ?FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C0017228 (-FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PROCESS_FENCE_STORAGE::FreeFenceStorageSlot(KSPIN_LOCK *this, KSPIN_LOCK **a2)
{
  KSPIN_LOCK *v4; // r8
  KSPIN_LOCK v5; // rcx
  KSPIN_LOCK **v6; // rax
  KSPIN_LOCK **v7; // rax
  KSPIN_LOCK v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this + 7, &LockHandle);
  v4 = *a2;
  v4[12] = (*a2)[12] & ~(1LL << ((unsigned __int64)*((unsigned int *)a2 + 4) >> 6));
  v5 = *v4;
  if ( *(KSPIN_LOCK **)(*v4 + 8) != v4
    || (v6 = (KSPIN_LOCK **)v4[1], *v6 != v4)
    || (*v6 = (KSPIN_LOCK *)v5,
        *(_QWORD *)(v5 + 8) = v6,
        v7 = (KSPIN_LOCK **)(this + 3),
        v8 = this[3],
        *(KSPIN_LOCK **)(v8 + 8) != this + 3) )
  {
    __fastfail(3u);
  }
  *v4 = v8;
  v4[1] = (KSPIN_LOCK)v7;
  *(_QWORD *)(v8 + 8) = v4;
  *v7 = v4;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
