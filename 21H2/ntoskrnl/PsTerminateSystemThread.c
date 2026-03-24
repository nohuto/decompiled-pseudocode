/*
 * XREFs of PsTerminateSystemThread @ 0x1406C0930
 * Callers:
 *     PopIrpWorker @ 0x14039FE70 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FF210 (InbvRotateGuiBootDisplay.c)
 *     EtwpLogger @ 0x1406456F0 (EtwpLogger.c)
 *     IopThreadStart @ 0x140771120 (IopThreadStart.c)
 *     CmpLoadHiveThread @ 0x14079ED50 (CmpLoadHiveThread.c)
 *     ExpExpirationThread @ 0x14094B8A0 (ExpExpirationThread.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x1406DA1F0 (PspTerminateThreadByPointer.c)
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
