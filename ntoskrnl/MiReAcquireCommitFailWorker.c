/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x140616A90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeForceResumeProcess @ 0x140355998 (KeForceResumeProcess.c)
 *     PsTerminateProcess @ 0x1407DC8A0 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(PVOID Object)
{
  PsTerminateProcess(Object, 3221225773LL);
  KeForceResumeProcess((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x746C6644u);
}
