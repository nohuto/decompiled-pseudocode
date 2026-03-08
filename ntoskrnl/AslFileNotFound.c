/*
 * XREFs of AslFileNotFound @ 0x1407A0E50
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1407A0E80 (SdbpCheckMatchingFiles.c)
 *     AslFileMappingCreate @ 0x1407A2D8C (AslFileMappingCreate.c)
 *     SdbpCheckMatchingTextEntry @ 0x140A4D2F4 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
