/*
 * XREFs of NtDeleteKey @ 0x18009EF50
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800762DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     RXactpCommit @ 0x180080998 (RXactpCommit.c)
 *     RtlInitializeRXact @ 0x18008BB40 (RtlInitializeRXact.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x1800E36E8 (RtlpDeleteEmptyImageFileOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EFB00 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800F0A50 (RtlpSetInstallLanguage.c)
 *     RtlpNtMakeTemporaryKey @ 0x180107C50 (RtlpNtMakeTemporaryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDeleteKey(HANDLE KeyHandle)
{
  NTSTATUS result; // eax

  result = 212;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
