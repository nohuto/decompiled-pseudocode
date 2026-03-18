/*
 * XREFs of ZwQueryAttributesFile @ 0x14041BF00
 * Callers:
 *     BiDoesHiveExist @ 0x140813E58 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140919908 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x140A1D568 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryAttributesFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
