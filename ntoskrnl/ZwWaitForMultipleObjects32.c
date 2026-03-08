/*
 * XREFs of ZwWaitForMultipleObjects32 @ 0x140412650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWaitForMultipleObjects32(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
