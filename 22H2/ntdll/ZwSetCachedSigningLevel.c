/*
 * XREFs of ZwSetCachedSigningLevel @ 0x1800A0630
 * Callers:
 *     LdrpSetModuleSigningLevel @ 0x180089B28 (LdrpSetModuleSigningLevel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetCachedSigningLevel(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile)
{
  NTSTATUS result; // eax

  result = 395;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
