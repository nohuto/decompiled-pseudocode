/*
 * XREFs of AslFileNotFound @ 0x140755B2C
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x140753CB0 (SdbpCheckMatchingFiles.c)
 *     AslFileMappingCreate @ 0x1407581E8 (AslFileMappingCreate.c)
 *     SdbpCheckMatchingTextEntry @ 0x140964CE4 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
