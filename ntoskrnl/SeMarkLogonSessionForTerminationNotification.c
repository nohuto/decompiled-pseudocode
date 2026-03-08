/*
 * XREFs of SeMarkLogonSessionForTerminationNotification @ 0x140880B10
 * Callers:
 *     <none>
 * Callees:
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x140880B30 (SeMarkLogonSessionForTerminationNotificationEx.c)
 */

NTSTATUS __stdcall SeMarkLogonSessionForTerminationNotification(PLUID LogonId)
{
  return SeMarkLogonSessionForTerminationNotificationEx(LogonId, 0LL);
}
