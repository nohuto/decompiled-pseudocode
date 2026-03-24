/*
 * XREFs of MiReAcquireCommitFailWorker @ 0x14052C270
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KeForceResumeProcess @ 0x14035BFB8 (KeForceResumeProcess.c)
 *     PsTerminateProcess @ 0x14069F4E8 (PsTerminateProcess.c)
 */

LONG_PTR __fastcall MiReAcquireCommitFailWorker(PVOID Object)
{
  PsTerminateProcess(Object, 3221225773LL);
  KeForceResumeProcess((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x746C6644u);
}
