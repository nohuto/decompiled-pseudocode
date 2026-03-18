/*
 * XREFs of ZwWorkerFactoryWorkerReady @ 0x14041B780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwWorkerFactoryWorkerReady()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
