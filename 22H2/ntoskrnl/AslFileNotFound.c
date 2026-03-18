/*
 * XREFs of AslFileNotFound @ 0x1407596FC
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x140756E10 (SdbpCheckMatchingFiles.c)
 *     AslFileMappingCreate @ 0x14075844C (AslFileMappingCreate.c)
 *     SdbpCheckMatchingTextEntry @ 0x140A4FFC4 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
