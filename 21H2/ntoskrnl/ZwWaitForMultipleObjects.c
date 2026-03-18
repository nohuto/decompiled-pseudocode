/*
 * XREFs of ZwWaitForMultipleObjects @ 0x14041C2C0
 * Callers:
 *     DifZwWaitForMultipleObjectsWrapper @ 0x140628590 (DifZwWaitForMultipleObjectsWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWaitForMultipleObjects(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
