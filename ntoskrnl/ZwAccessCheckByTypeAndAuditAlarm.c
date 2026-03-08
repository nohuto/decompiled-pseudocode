/*
 * XREFs of ZwAccessCheckByTypeAndAuditAlarm @ 0x140412E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAccessCheckByTypeAndAuditAlarm(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
