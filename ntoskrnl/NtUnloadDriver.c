/*
 * XREFs of NtUnloadDriver @ 0x14094EB70
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x1408549C8 (IopUnloadDriver.c)
 */

__int64 __fastcall NtUnloadDriver(UNICODE_STRING *a1)
{
  return IopUnloadDriver(a1, 0);
}
