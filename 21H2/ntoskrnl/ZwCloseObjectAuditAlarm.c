/*
 * XREFs of ZwCloseObjectAuditAlarm @ 0x1403FACE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCloseObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SubsystemName);
}
