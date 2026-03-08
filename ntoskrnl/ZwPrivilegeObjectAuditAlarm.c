/*
 * XREFs of ZwPrivilegeObjectAuditAlarm @ 0x140414B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPrivilegeObjectAuditAlarm(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
