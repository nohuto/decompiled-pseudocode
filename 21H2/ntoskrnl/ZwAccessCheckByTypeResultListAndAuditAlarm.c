/*
 * XREFs of ZwAccessCheckByTypeResultListAndAuditAlarm @ 0x14041C400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAccessCheckByTypeResultListAndAuditAlarm(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
