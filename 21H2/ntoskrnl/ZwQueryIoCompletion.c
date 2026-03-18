/*
 * XREFs of ZwQueryIoCompletion @ 0x14041E280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryIoCompletion(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
