/*
 * XREFs of ZwQueryAttributesFile @ 0x18009DC80
 * Callers:
 *     RtlDoesFileExists_UstrEx @ 0x18001A1F0 (RtlDoesFileExists_UstrEx.c)
 *     LdrpIsReparsePoint @ 0x180053670 (LdrpIsReparsePoint.c)
 *     LdrpGetNtPathFromDosPath @ 0x1800607DC (LdrpGetNtPathFromDosPath.c)
 *     LdrAddDllDirectory @ 0x18008BCE0 (LdrAddDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800DB560 (AvrfMiniLoadDll.c)
 *     LdrpResValidateFilePath @ 0x1800E4D88 (LdrpResValidateFilePath.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryAttributesFile()
{
  __int64 result; // rax

  result = 61LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
