/*
 * XREFs of PsTerminateSystemThread @ 0x1406A3340
 * Callers:
 *     PopIrpWorker @ 0x14039F770 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FEE90 (InbvRotateGuiBootDisplay.c)
 *     EtwpLogger @ 0x1406BE4D0 (EtwpLogger.c)
 *     IopThreadStart @ 0x140770DE0 (IopThreadStart.c)
 *     CmpLoadHiveThread @ 0x14079F180 (CmpLoadHiveThread.c)
 *     ExpExpirationThread @ 0x14094B8F0 (ExpExpirationThread.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x140707AC0 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __stdcall PsTerminateSystemThread(NTSTATUS ExitStatus)
{
  __int64 v1; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  char v3; // r8

  v1 = (unsigned int)ExitStatus;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 )
    return -1073741811;
  v3 = 1;
  return PspTerminateThreadByPointer(CurrentThread, v1, v3);
}
