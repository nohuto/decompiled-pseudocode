/*
 * XREFs of ZwAccessCheckAndAuditAlarm @ 0x14041ABC0
 * Callers:
 *     DifZwAccessCheckAndAuditAlarmWrapper @ 0x1405EC6F0 (DifZwAccessCheckAndAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAccessCheckAndAuditAlarm(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
