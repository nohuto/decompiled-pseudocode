/*
 * XREFs of ZwSetLowWaitHighEventPair @ 0x1403FDA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetLowWaitHighEventPair(HANDLE EventPairHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventPairHandle);
}
