/*
 * XREFs of IopAcquireReleaseConnectLockInternal @ 0x140847284
 * Callers:
 *     IoDisconnectInterrupt @ 0x1406F41C0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1406F43D8 (IopConnectInterrupt.c)
 *     IopInitializeActiveConnectBlock @ 0x1406F490C (IopInitializeActiveConnectBlock.c)
 *     IopDestroyActiveConnectBlock @ 0x1406F49E0 (IopDestroyActiveConnectBlock.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

char __fastcall IopAcquireReleaseConnectLockInternal(__int64 a1, char a2, char a3)
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
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
