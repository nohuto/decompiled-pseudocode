/*
 * XREFs of ?AddThreadToDxgThreadList@DXGGLOBAL@@QEAAXPEAUDXGTHREADPROCESS@@@Z @ 0x1C0050C3C
 * Callers:
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@E@Z @ 0x1C033ED08 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::AddThreadToDxgThreadList(KSPIN_LOCK *this, struct DXGTHREADPROCESS *a2)
{
  char *v4; // rbx
  __int64 v5; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this + 223, &LockHandle);
  v4 = (char *)(this + 65);
  v5 = *(_QWORD *)v4;
  if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 )
    __fastfail(3u);
  *(_QWORD *)a2 = v5;
  *((_QWORD *)a2 + 1) = v4;
  *(_QWORD *)(v5 + 8) = a2;
  *(_QWORD *)v4 = a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
