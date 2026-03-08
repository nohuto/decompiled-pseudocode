/*
 * XREFs of ZwQueryAttributesFile @ 0x140412AB0
 * Callers:
 *     BiDoesHiveExist @ 0x140831414 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1A060 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x140A59DB0 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryAttributesFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
