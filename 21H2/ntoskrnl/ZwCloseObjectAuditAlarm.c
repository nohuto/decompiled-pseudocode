/*
 * XREFs of ZwCloseObjectAuditAlarm @ 0x14041BEC0
 * Callers:
 *     DifZwCloseObjectAuditAlarmWrapper @ 0x14061DD70 (DifZwCloseObjectAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCloseObjectAuditAlarm(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
