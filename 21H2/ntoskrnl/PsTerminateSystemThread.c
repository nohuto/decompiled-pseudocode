/*
 * XREFs of PsTerminateSystemThread @ 0x1406E5A70
 * Callers:
 *     PopIrpWorker @ 0x1403B1270 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x140550E80 (InbvRotateGuiBootDisplay.c)
 *     DifPsTerminateSystemThreadWrapper @ 0x14061AAA0 (DifPsTerminateSystemThreadWrapper.c)
 *     EtwpLogger @ 0x140799440 (EtwpLogger.c)
 *     IopThreadStart @ 0x1407FC360 (IopThreadStart.c)
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 *     ExpExpirationThread @ 0x1409F7CD0 (ExpExpirationThread.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x14079F130 (PspTerminateThreadByPointer.c)
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
