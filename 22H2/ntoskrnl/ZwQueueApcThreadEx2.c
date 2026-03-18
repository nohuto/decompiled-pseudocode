/*
 * XREFs of ZwQueueApcThreadEx2 @ 0x14041D4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueueApcThreadEx2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
