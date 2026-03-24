/*
 * XREFs of PsQuitNextProcessThread @ 0x1406A62F0
 * Callers:
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     DbgkpPostFakeThreadMessages @ 0x140884EE4 (DbgkpPostFakeThreadMessages.c)
 *     PsWaitForAllProcesses @ 0x14090AE48 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x14090B33C (PspWaitForUsermodeExit.c)
 *     ExpDebuggerWorker @ 0x1409B5030 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextProcessThread(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
