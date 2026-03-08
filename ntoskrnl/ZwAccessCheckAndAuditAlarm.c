/*
 * XREFs of ZwAccessCheckAndAuditAlarm @ 0x140412830
 * Callers:
 *     DifZwAccessCheckAndAuditAlarmWrapper @ 0x1405EA240 (DifZwAccessCheckAndAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAccessCheckAndAuditAlarm(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
