/*
 * XREFs of UmfdUnloadFontFile @ 0x1C007C570
 * Callers:
 *     UmfdLoadFontFile @ 0x1C007ECF0 (UmfdLoadFontFile.c)
 * Callees:
 *     UmfdUnloadFontFileInternal @ 0x1C007C648 (UmfdUnloadFontFileInternal.c)
 */

__int64 __fastcall UmfdUnloadFontFile(PVOID pv)
{
  unsigned int v2; // ebx

  v2 = UmfdUnloadFontFileInternal();
  EngFreeMem(pv);
  return v2;
}
