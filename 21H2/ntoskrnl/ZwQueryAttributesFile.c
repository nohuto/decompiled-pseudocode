/*
 * XREFs of ZwQueryAttributesFile @ 0x1403FAD20
 * Callers:
 *     BiDoesHiveExist @ 0x140786024 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140873148 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x14096F7E8 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
