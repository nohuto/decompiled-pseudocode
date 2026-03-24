/*
 * XREFs of ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C007E0D0
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x1C007E1D0 (EngFreeMem.c)
 *     EngDeletePalette @ 0x1C007E2F0 (EngDeletePalette.c)
 */

void __fastcall StubDispDisablePDEV(_QWORD *pv)
{
  HPALETTE v2; // rcx

  v2 = (HPALETTE)pv[3];
  if ( v2 )
    EngDeletePalette(v2);
  EngFreeMem(pv);
}
