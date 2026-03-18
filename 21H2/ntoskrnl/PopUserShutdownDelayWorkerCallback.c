/*
 * XREFs of PopUserShutdownDelayWorkerCallback @ 0x140990340
 * Callers:
 *     <none>
 * Callees:
 *     PopUserShutdownCancelled @ 0x1406EADD4 (PopUserShutdownCancelled.c)
 */

__int64 (__fastcall *PopUserShutdownDelayWorkerCallback())(_QWORD)
{
  _InterlockedExchange(&PopUserShutdown, 0);
  return PopUserShutdownCancelled(0);
}
