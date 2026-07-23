/*
 * XREFs of ZwQueryAttributesFile @ 0x1403FA1C0
 * Callers:
 *     BiDoesHiveExist @ 0x140785D64 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140873038 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x14096F658 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
