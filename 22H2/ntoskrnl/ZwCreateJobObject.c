/*
 * XREFs of ZwCreateJobObject @ 0x14041BCE0
 * Callers:
 *     DifZwCreateJobObjectWrapper @ 0x1405EE850 (DifZwCreateJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateJobObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
