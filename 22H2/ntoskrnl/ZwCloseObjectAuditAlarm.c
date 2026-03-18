/*
 * XREFs of ZwCloseObjectAuditAlarm @ 0x14041AE00
 * Callers:
 *     DifZwCloseObjectAuditAlarmWrapper @ 0x1405EDDB0 (DifZwCloseObjectAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCloseObjectAuditAlarm(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
