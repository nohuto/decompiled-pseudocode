/*
 * XREFs of ZwRemoveIoCompletionEx @ 0x14041E6A0
 * Callers:
 *     DifZwRemoveIoCompletionExWrapper @ 0x140626190 (DifZwRemoveIoCompletionExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRemoveIoCompletionEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
