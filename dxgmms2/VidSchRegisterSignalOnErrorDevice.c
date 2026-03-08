/*
 * XREFs of VidSchRegisterSignalOnErrorDevice @ 0x1C0017900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchRegisterSignalOnErrorDevice(__int64 a1, _QWORD *a2)
{
  KSPIN_LOCK *v4; // rcx
  __int64 v5; // rbx
  _QWORD *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 32) + 1728LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v4, &LockHandle);
  v5 = a1 + 152;
  v6 = *(_QWORD **)(v5 + 8);
  if ( *v6 != v5 )
    __fastfail(3u);
  *a2 = v5;
  a2[1] = v6;
  *v6 = a2;
  *(_QWORD *)(v5 + 8) = a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
