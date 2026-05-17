/*
 * XREFs of NtOpenProcessToken @ 0x18009F9F0
 * Callers:
 *     RtlpGetDefaultsSubjectContext @ 0x18006828C (RtlpGetDefaultsSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x1800777AC (RtlpSetSecurityObject.c)
 *     RtlAdjustPrivilege @ 0x18007A1E0 (RtlAdjustPrivilege.c)
 *     RtlpValidOwnerSubjectContext @ 0x18007DD40 (RtlpValidOwnerSubjectContext.c)
 *     WerEscalationLazyInit @ 0x1800DE048 (WerEscalationLazyInit.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcessToken()
{
  __int64 result; // rax

  result = 297LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
