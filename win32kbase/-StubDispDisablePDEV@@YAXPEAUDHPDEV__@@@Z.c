/*
 * XREFs of ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C002D520
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x1C002AE00 (EngFreeMem.c)
 *     EngDeletePalette @ 0x1C002D390 (EngDeletePalette.c)
 */

void __fastcall StubDispDisablePDEV(_QWORD *pv)
{
  HPALETTE v2; // rcx

  v2 = (HPALETTE)pv[3];
  if ( v2 )
    EngDeletePalette(v2);
  EngFreeMem(pv);
}
