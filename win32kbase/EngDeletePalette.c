/*
 * XREFs of EngDeletePalette @ 0x1C002D390
 * Callers:
 *     ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C002D520 (-StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C002D3CC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?EngDeletePaletteInternal@@YAHPEAVEPALOBJ@@@Z @ 0x1C002D400 (-EngDeletePaletteInternal@@YAHPEAVEPALOBJ@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 */

BOOL __stdcall EngDeletePalette(HPALETTE hpal)
{
  int v1; // ebx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  EPALOBJ::EPALOBJ((EPALOBJ *)&v3, hpal);
  v1 = EngDeletePaletteInternal((struct EPALOBJ *)&v3);
  if ( v3 )
    HmgDecrementShareReferenceCountEx(v3, 0LL);
  return v1;
}
