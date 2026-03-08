/*
 * XREFs of PsTerminateSystemThread @ 0x1407DC870
 * Callers:
 *     PopIrpWorker @ 0x1402B9440 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x14054C410 (InbvRotateGuiBootDisplay.c)
 *     DifPsTerminateSystemThreadWrapper @ 0x1405E87D0 (DifPsTerminateSystemThreadWrapper.c)
 *     EtwpLogger @ 0x1406926A0 (EtwpLogger.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 *     IopThreadStart @ 0x140870C40 (IopThreadStart.c)
 *     ExpExpirationThread @ 0x1409F4E30 (ExpExpirationThread.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x1407DA8F0 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __stdcall PsTerminateSystemThread(NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 )
    return PspTerminateThreadByPointer((__int64)CurrentThread, ExitStatus, 1);
  else
    return -1073741811;
}
