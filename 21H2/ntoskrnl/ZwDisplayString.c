/*
 * XREFs of ZwDisplayString @ 0x14041D380
 * Callers:
 *     DifZwDisplayStringWrapper @ 0x14061FB10 (DifZwDisplayStringWrapper.c)
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
