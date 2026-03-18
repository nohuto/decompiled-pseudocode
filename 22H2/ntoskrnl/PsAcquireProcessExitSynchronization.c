/*
 * XREFs of PsAcquireProcessExitSynchronization @ 0x1407550D0
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x140754D60 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall PsAcquireProcessExitSynchronization(struct _EX_RUNDOWN_REF *a1)
{
  return ExAcquireRundownProtection_0(a1 + 139) == 0 ? 0xC000010A : 0;
}
