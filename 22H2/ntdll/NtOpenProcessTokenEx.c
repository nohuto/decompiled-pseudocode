/*
 * XREFs of NtOpenProcessTokenEx @ 0x18009DAE0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180036520 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18003C650 (RtlCheckTokenCapability.c)
 *     TppCritSetThread @ 0x18004EA64 (TppCritSetThread.c)
 *     RtlAcquirePrivilege @ 0x180078180 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x180078400 (RtlImpersonateSelfEx.c)
 *     RtlpSysVolTakeOwnership @ 0x1800889FC (RtlpSysVolTakeOwnership.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800DA3E4 (AVrfpAppendCurrentUserSid.c)
 *     RtlpIsAppContainer @ 0x1800E8984 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 48;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
