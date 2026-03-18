/*
 * XREFs of IsInputThread @ 0x1C0037C40
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01D866C (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     <none>
 */

char IsInputThread()
{
  CInputThreadBase *v0; // rdi
  char *v1; // rbx

  v0 = gpInputThread;
  v1 = (char *)gpInputThread + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  LOBYTE(v0) = (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)v0 + 12);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return (char)v0;
}
