/*
 * XREFs of ZwReleaseWorkerFactoryWorker @ 0x140415290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReleaseWorkerFactoryWorker(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
