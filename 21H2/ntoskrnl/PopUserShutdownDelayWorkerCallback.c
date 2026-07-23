/*
 * XREFs of PopUserShutdownDelayWorkerCallback @ 0x1408E7B00
 * Callers:
 *     <none>
 * Callees:
 *     PopUserShutdownCancelled @ 0x14077A044 (PopUserShutdownCancelled.c)
 */

__int64 (__fastcall *PopUserShutdownDelayWorkerCallback())(_QWORD)
{
  _InterlockedExchange(&PopUserShutdown, 0);
  return PopUserShutdownCancelled(0);
}
