/*
 * XREFs of PsTerminateSystemThread @ 0x14061F840
 * Callers:
 *     PopIrpWorker @ 0x14039FFC0 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FF190 (InbvRotateGuiBootDisplay.c)
 *     EtwpLogger @ 0x14063A500 (EtwpLogger.c)
 *     IopThreadStart @ 0x1407712E0 (IopThreadStart.c)
 *     CmpLoadHiveThread @ 0x14079EF50 (CmpLoadHiveThread.c)
 *     ExpExpirationThread @ 0x14094BA70 (ExpExpirationThread.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x1406B14D0 (PspTerminateThreadByPointer.c)
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
