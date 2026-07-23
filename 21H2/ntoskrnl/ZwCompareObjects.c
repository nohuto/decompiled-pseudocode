/*
 * XREFs of ZwCompareObjects @ 0x1403FB8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCompareObjects(HANDLE FirstObjectHandle, HANDLE SecondObjectHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FirstObjectHandle);
}
