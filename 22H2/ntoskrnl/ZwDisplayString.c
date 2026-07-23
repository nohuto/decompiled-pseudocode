/*
 * XREFs of ZwDisplayString @ 0x1403FB5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDisplayString(PUNICODE_STRING String)
{
  _disable();
  __readeflags();
  return KiServiceInternal(String);
}
