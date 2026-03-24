/*
 * XREFs of IopAcquireReleaseConnectLockInternal @ 0x1407C4EE0
 * Callers:
 *     IopDestroyActiveConnectBlock @ 0x140761C70 (IopDestroyActiveConnectBlock.c)
 *     IopReleaseActiveConnectLock @ 0x140761DDC (IopReleaseActiveConnectLock.c)
 *     IopAcquireActiveConnectLock @ 0x140761E00 (IopAcquireActiveConnectLock.c)
 *     IopInitializeActiveConnectBlock @ 0x140761E24 (IopInitializeActiveConnectBlock.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall IopAcquireReleaseConnectLockInternal(__int64 a1, char a2, char a3)
{
  struct _KEVENT *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax

  if ( (a3 & 1) != 0 )
  {
    v3 = (struct _KEVENT *)(a1 + 40);
  }
  else if ( (a3 & 2) != 0 )
  {
    v3 = &ActiveConnectListLock;
  }
  else
  {
    v3 = *(struct _KEVENT **)(a1 + 24);
  }
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    return KeWaitForSingleObject(v3, Executive, 0, 0, 0LL);
  }
  else
  {
    KeSetEvent(v3, 0, 0);
    return (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
