/*
 * XREFs of ZwWorkerFactoryWorkerReady @ 0x14041A6C0
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
