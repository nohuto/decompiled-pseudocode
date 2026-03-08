/*
 * XREFs of ZwQueryDriverEntryOrder @ 0x140414CB0
 * Callers:
 *     DifZwQueryDriverEntryOrderWrapper @ 0x1405F1BD0 (DifZwQueryDriverEntryOrderWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDriverEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
