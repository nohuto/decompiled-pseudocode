/*
 * XREFs of PsQuitNextProcessThread @ 0x1406C39B0
 * Callers:
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     DbgkpPostFakeThreadMessages @ 0x140884E94 (DbgkpPostFakeThreadMessages.c)
 *     PsWaitForAllProcesses @ 0x14090ADF8 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x14090B2EC (PspWaitForUsermodeExit.c)
 *     ExpDebuggerWorker @ 0x1409B5030 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextProcessThread(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
