/*
 * XREFs of PopUserShutdownDelayWorkerCallback @ 0x1408E79F0
 * Callers:
 *     <none>
 * Callees:
 *     PopUserShutdownCancelled @ 0x140779D84 (PopUserShutdownCancelled.c)
 */

__int64 (__fastcall *PopUserShutdownDelayWorkerCallback())(_QWORD)
{
  _InterlockedExchange(&PopUserShutdown, 0);
  return PopUserShutdownCancelled(0);
}
