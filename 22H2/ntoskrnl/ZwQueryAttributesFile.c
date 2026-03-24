/*
 * XREFs of ZwQueryAttributesFile @ 0x1403FA1C0
 * Callers:
 *     BiDoesHiveExist @ 0x140785D64 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140873038 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x14096F658 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryAttributesFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
