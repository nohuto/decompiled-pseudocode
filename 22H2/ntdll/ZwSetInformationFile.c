/*
 * XREFs of ZwSetInformationFile @ 0x18009D9C0
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180048BF8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpCreateFile @ 0x180049314 (EtwpCreateFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x18004C0E8 (EtwpFinalizeLogFileHeader.c)
 *     TpBindFileToDirect @ 0x180076E98 (TpBindFileToDirect.c)
 *     LdrpResSetFilePointer @ 0x1800E4CE8 (LdrpResSetFilePointer.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationFile()
{
  __int64 result; // rax

  result = 39LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
