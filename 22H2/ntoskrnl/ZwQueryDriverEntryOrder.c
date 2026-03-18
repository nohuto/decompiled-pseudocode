/*
 * XREFs of ZwQueryDriverEntryOrder @ 0x14041D040
 * Callers:
 *     DifZwQueryDriverEntryOrderWrapper @ 0x1405F4080 (DifZwQueryDriverEntryOrderWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDriverEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
