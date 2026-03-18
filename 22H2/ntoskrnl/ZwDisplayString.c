/*
 * XREFs of ZwDisplayString @ 0x14041C2E0
 * Callers:
 *     DifZwDisplayStringWrapper @ 0x1405EFAC0 (DifZwDisplayStringWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDisplayString(PUNICODE_STRING String)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(String, v1);
}
