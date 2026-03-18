/*
 * XREFs of ZwQueryAttributesFile @ 0x14041AE40
 * Callers:
 *     BiDoesHiveExist @ 0x14080A3B0 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1CDB4 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x140A5CA64 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryAttributesFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
