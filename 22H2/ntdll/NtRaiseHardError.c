/*
 * XREFs of NtRaiseHardError @ 0x1800A01F0
 * Callers:
 *     LdrpReportError @ 0x18003F2B4 (LdrpReportError.c)
 *     LdrpMapDllNtFileName @ 0x1800610A4 (LdrpMapDllNtFileName.c)
 *     LdrpProcessMachineMismatch @ 0x180087668 (LdrpProcessMachineMismatch.c)
 *     LdrpInitializationFailure @ 0x1800D09C8 (LdrpInitializationFailure.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtRaiseHardError(
        NTSTATUS ErrorStatus,
        ULONG NumberOfParameters,
        ULONG UnicodeStringParameterMask,
        PULONG_PTR Parameters,
        ULONG ValidResponseOptions,
        PULONG Response)
{
  NTSTATUS result; // eax

  result = 361;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
