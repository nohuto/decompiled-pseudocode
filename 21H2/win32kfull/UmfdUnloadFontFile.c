/*
 * XREFs of UmfdUnloadFontFile @ 0x1C00FE0C0
 * Callers:
 *     UmfdLoadFontFile @ 0x1C00FDCF0 (UmfdLoadFontFile.c)
 * Callees:
 *     UmfdUnloadFontFileInternal @ 0x1C00FE0F8 (UmfdUnloadFontFileInternal.c)
 */

__int64 __fastcall UmfdUnloadFontFile(PVOID pv)
{
  unsigned int v2; // ebx

  v2 = UmfdUnloadFontFileInternal(pv);
  EngFreeMem(pv);
  return v2;
}
