/*
 * XREFs of UmfdUnloadFontFile @ 0x1C00FDD70
 * Callers:
 *     UmfdLoadFontFile @ 0x1C00FD9A0 (UmfdLoadFontFile.c)
 * Callees:
 *     UmfdUnloadFontFileInternal @ 0x1C00FDDA8 (UmfdUnloadFontFileInternal.c)
 */

__int64 __fastcall UmfdUnloadFontFile(PVOID pv)
{
  unsigned int v2; // ebx

  v2 = UmfdUnloadFontFileInternal(pv);
  EngFreeMem(pv);
  return v2;
}
