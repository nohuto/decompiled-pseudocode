/*
 * XREFs of ZwWorkerFactoryWorkerReady @ 0x1403F9A40
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
