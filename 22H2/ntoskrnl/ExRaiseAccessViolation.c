/*
 * XREFs of ExRaiseAccessViolation @ 0x140956140
 * Callers:
 *     IopValidateQueryInformationParameters @ 0x1405FB810 (IopValidateQueryInformationParameters.c)
 *     NtQuerySecurityAttributesToken @ 0x1406011C0 (NtQuerySecurityAttributesToken.c)
 *     KeUserModeCallback @ 0x14063D750 (KeUserModeCallback.c)
 *     PfpPfnPrioRequest @ 0x1406402D0 (PfpPfnPrioRequest.c)
 *     NtQueryKey @ 0x140645C90 (NtQueryKey.c)
 *     NtAlpcQueryInformation @ 0x1406612C0 (NtAlpcQueryInformation.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
