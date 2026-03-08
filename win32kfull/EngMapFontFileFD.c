/*
 * XREFs of EngMapFontFileFD @ 0x1C028DED0
 * Callers:
 *     <none>
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C0115154 (EngMapFontFileFDInternal.c)
 */

BOOL __stdcall EngMapFontFileFD(ULONG_PTR iFile, PULONG *ppjBuf, ULONG *pcjBuf)
{
  return EngMapFontFileFDInternal(iFile, ppjBuf, pcjBuf, 1u);
}
