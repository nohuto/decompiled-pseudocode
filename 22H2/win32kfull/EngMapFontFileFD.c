/*
 * XREFs of EngMapFontFileFD @ 0x1C028B650
 * Callers:
 *     <none>
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00794EC (EngMapFontFileFDInternal.c)
 */

BOOL __stdcall EngMapFontFileFD(ULONG_PTR iFile, PULONG *ppjBuf, ULONG *pcjBuf)
{
  return EngMapFontFileFDInternal(iFile, ppjBuf, pcjBuf, 1u);
}
