/*
 * XREFs of ZwCreateFile @ 0x18009DF80
 * Callers:
 *     EtwpCreateFile @ 0x180049314 (EtwpCreateFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180058DDC (RtlpFileIsWin32WithRCManifest.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180088420 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpGetVolumeHandle @ 0x18008BA2C (RtlpGetVolumeHandle.c)
 *     LdrpResMapFile @ 0x1800E41D4 (LdrpResMapFile.c)
 *     RtlCreateBootStatusDataFile @ 0x1800EDD40 (RtlCreateBootStatusDataFile.c)
 *     GetProcessIptTrace @ 0x180117D84 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x180117EE0 (GetProcessIptTraceSize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180118068 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateFile()
{
  __int64 result; // rax

  result = 85LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
