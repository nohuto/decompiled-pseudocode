/*
 * XREFs of PopIrpWatchdogBugcheck @ 0x140580EF4
 * Callers:
 *     PopCompleteIrpWatchdog @ 0x1402BB9F4 (PopCompleteIrpWatchdog.c)
 *     PopDisableIrpWatchdog @ 0x140580BBC (PopDisableIrpWatchdog.c)
 *     PopIrpWatchdog @ 0x140580EE0 (PopIrpWatchdog.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140580CC0 (PopInternalAddToDumpFile.c)
 */

void __fastcall __noreturn PopIrpWatchdogBugcheck(__int64 MaxDataSize)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  ULONG_PTR BugCheckParameter4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3[5]; // [rsp+48h] [rbp-28h] BYREF

  HIDWORD(BugCheckParameter3[0]) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (struct _KTHREAD *)PopIrpLockThread != KeGetCurrentThread() )
  {
    KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
    PopIrpLockThread = (__int64)KeGetCurrentThread();
  }
  if ( !*(_DWORD *)(MaxDataSize + 188) )
  {
    v2 = *(_QWORD *)(MaxDataSize + 24);
    if ( v2 )
      v3 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL);
    else
      v3 = 0LL;
    v4 = *(_QWORD *)(v3 + 264);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 72LL * *(char *)(v4 + 66) + 200);
      if ( *(_BYTE *)(v5 + 184) == *(_BYTE *)(MaxDataSize + 184) )
        MaxDataSize = v5;
    }
  }
  BugCheckParameter4 = *(_QWORD *)(MaxDataSize + 16);
  PopInternalAddToDumpFile(0LL, 0, *(_QWORD *)(MaxDataSize + 24));
  IoAddTriageDumpDataBlock(BugCheckParameter4, (PVOID)*(unsigned __int16 *)(BugCheckParameter4 + 2));
  IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x138);
  BugCheckParameter3[1] = (ULONG_PTR)&PopIrpList;
  BugCheckParameter3[0] = 163840LL;
  BugCheckParameter3[2] = (ULONG_PTR)&PopIrpThreadList;
  BugCheckParameter3[3] = ExWorkerQueue;
  BugCheckParameter3[4] = IoWorkerQueue;
  KeBugCheckEx(0x9Fu, 3uLL, *(_QWORD *)(MaxDataSize + 24), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
}
