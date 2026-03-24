/*
 * XREFs of ZwQueryAttributesFile @ 0x1403FAB40
 * Callers:
 *     BiDoesHiveExist @ 0x140785E64 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140872FE8 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x14096F608 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryAttributesFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
