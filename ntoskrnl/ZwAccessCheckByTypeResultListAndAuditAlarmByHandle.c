/*
 * XREFs of ZwAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x140412FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAccessCheckByTypeResultListAndAuditAlarmByHandle(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
