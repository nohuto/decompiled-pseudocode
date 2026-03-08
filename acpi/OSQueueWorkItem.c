/*
 * XREFs of OSQueueWorkItem @ 0x1C004774C
 * Callers:
 *     InsertReadyQueue @ 0x1C00057E4 (InsertReadyQueue.c)
 *     AMLIResumeInterpreter @ 0x1C0048D2C (AMLIResumeInterpreter.c)
 *     RestartContext @ 0x1C00512E8 (RestartContext.c)
 * Callees:
 *     <none>
 */

LONG __fastcall OSQueueWorkItem(_QWORD *a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
  v3 = (_QWORD *)qword_1C006E938;
  if ( *(__int64 **)qword_1C006E938 != &ACPIWorkQueue )
    __fastfail(3u);
  *a1 = &ACPIWorkQueue;
  a1[1] = v3;
  *v3 = a1;
  qword_1C006E938 = (__int64)a1;
  KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v2);
  return KeSetEvent(&ACPIProcessWorkQueueEvent, 0, 0);
}
