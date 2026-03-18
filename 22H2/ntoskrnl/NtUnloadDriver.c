/*
 * XREFs of NtUnloadDriver @ 0x140951B90
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x1408585F4 (IopUnloadDriver.c)
 */

__int64 __fastcall NtUnloadDriver(UNICODE_STRING *a1)
{
  return IopUnloadDriver(a1, 0);
}
