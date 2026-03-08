/*
 * XREFs of ZwDisplayString @ 0x140413F50
 * Callers:
 *     DifZwDisplayStringWrapper @ 0x1405ED610 (DifZwDisplayStringWrapper.c)
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
