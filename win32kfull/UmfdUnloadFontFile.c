/*
 * XREFs of UmfdUnloadFontFile @ 0x1C0121FA0
 * Callers:
 *     UmfdLoadFontFile @ 0x1C011D7E0 (UmfdLoadFontFile.c)
 * Callees:
 *     UmfdUnloadFontFileInternal @ 0x1C0121FD8 (UmfdUnloadFontFileInternal.c)
 */

__int64 __fastcall UmfdUnloadFontFile(PVOID pv)
{
  unsigned int v2; // ebx

  v2 = UmfdUnloadFontFileInternal(pv);
  EngFreeMem(pv);
  return v2;
}
