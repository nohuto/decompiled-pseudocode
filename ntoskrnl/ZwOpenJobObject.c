/*
 * XREFs of ZwOpenJobObject @ 0x140414810
 * Callers:
 *     DifZwOpenJobObjectWrapper @ 0x1405EF5F0 (DifZwOpenJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenJobObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
