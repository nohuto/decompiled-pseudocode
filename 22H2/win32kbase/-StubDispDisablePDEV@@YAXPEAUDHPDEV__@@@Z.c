/*
 * XREFs of ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C009D910
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x1C0077DB0 (EngFreeMem.c)
 *     EngDeletePalette @ 0x1C009D940 (EngDeletePalette.c)
 */

void __fastcall StubDispDisablePDEV(_QWORD *pv)
{
  HPALETTE v2; // rcx

  v2 = (HPALETTE)pv[3];
  if ( v2 )
    EngDeletePalette(v2);
  EngFreeMem(pv);
}
