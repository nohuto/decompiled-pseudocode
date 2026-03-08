/*
 * XREFs of ZwQueryFullAttributesFile @ 0x140414CF0
 * Callers:
 *     DifZwQueryFullAttributesFileWrapper @ 0x1405F1E80 (DifZwQueryFullAttributesFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes, FileInformation);
}
