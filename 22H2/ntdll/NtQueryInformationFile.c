/*
 * XREFs of NtQueryInformationFile @ 0x18009D700
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008B160 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpResFileSize @ 0x1800E4060 (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x1800E4D2C (LdrpResValidateFileHandle.c)
 *     RtlpGetFileSize @ 0x1800FD1D4 (RtlpGetFileSize.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x1800FF120 (RtlIsPartialPlaceholderFileHandle.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationFile()
{
  __int64 result; // rax

  result = 17LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
