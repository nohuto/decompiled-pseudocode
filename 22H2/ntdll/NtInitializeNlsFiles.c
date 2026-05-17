/*
 * XREFs of NtInitializeNlsFiles @ 0x18009F4D0
 * Callers:
 *     RtlGetLocaleFileMappingAddress @ 0x18007D200 (RtlGetLocaleFileMappingAddress.c)
 * Callees:
 *     <none>
 */

__int64 NtInitializeNlsFiles()
{
  __int64 result; // rax

  result = 256LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
