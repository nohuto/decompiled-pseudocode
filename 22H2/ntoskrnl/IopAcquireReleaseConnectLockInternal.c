/*
 * XREFs of IopAcquireReleaseConnectLockInternal @ 0x1408498F4
 * Callers:
 *     IoDisconnectInterrupt @ 0x14078E6E0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14078EC70 (IopConnectInterrupt.c)
 *     IopInitializeActiveConnectBlock @ 0x14078F1A4 (IopInitializeActiveConnectBlock.c)
 *     IopDestroyActiveConnectBlock @ 0x14078F278 (IopDestroyActiveConnectBlock.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
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
