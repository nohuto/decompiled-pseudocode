/*
 * XREFs of RaidAddPortDriver @ 0x1C003559C
 * Callers:
 *     RaInitializeDriver @ 0x1C007A25C (RaInitializeDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAddPortDriver(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 24), &LockHandle);
  v4 = (_QWORD *)(a1 + 8);
  v5 = (_QWORD *)(a2 + 24);
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v6 + 8) != a1 + 8 )
    __fastfail(3u);
  *v5 = v6;
  v5[1] = v4;
  *(_QWORD *)(v6 + 8) = v5;
  *v4 = v5;
  ++*(_DWORD *)(a1 + 32);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
