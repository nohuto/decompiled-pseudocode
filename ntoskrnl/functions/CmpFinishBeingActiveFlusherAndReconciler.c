signed __int32 __fastcall CmpFinishBeingActiveFlusherAndReconciler(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  struct _KEVENT *v6; // rbx
  __int64 v7; // rcx
  struct _KEVENT *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  CmpLockRegistry(a1, a2, a3, a4);
  HvLockHiveFlusherExclusive(a1);
  v6 = (struct _KEVENT *)CmpReleaseWriteQueue(v5, (_QWORD *)(a1 + 4192));
  v8 = (struct _KEVENT *)CmpReleaseWriteQueue(v7, (_QWORD *)(a1 + 4208));
  HvUnlockHiveFlusherExclusive(a1);
  CmpUnlockRegistry(v10, v9, v11, v12);
  CmpWakeWriteQueueWaiters(a1 + 4192, v6, -1073741823);
  return CmpWakeWriteQueueWaiters(a1 + 4208, v8, -1073741823);
}
