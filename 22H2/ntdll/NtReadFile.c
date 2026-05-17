/*
 * XREFs of NtReadFile @ 0x18009D5A0
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180048BF8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x18004C0E8 (EtwpFinalizeLogFileHeader.c)
 *     LdrpResReadFile @ 0x1800E4548 (LdrpResReadFile.c)
 *     RtlCheckBootStatusIntegrity @ 0x1800EDB80 (RtlCheckBootStatusIntegrity.c)
 *     RtlpGetSetBootStatusData @ 0x1800EE3D4 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     <none>
 */

__int64 NtReadFile()
{
  __int64 result; // rax

  result = 6LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
