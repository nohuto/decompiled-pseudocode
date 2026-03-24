/*
 * XREFs of ZwSetWnfProcessNotificationEvent @ 0x1403FDA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetWnfProcessNotificationEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
