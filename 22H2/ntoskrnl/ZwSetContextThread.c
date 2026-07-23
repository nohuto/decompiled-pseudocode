/*
 * XREFs of ZwSetContextThread @ 0x1403FCBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
