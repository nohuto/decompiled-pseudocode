/*
 * XREFs of ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00B07D0
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x1C00486B0 (EngFreeMem.c)
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00B0820 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 */

void __fastcall StubDispDisablePDEV(_QWORD *pv)
{
  HPALETTE v2; // rcx

  v2 = (HPALETTE)pv[3];
  if ( v2 )
    EngDeletePaletteInternal(v2, 0);
  EngFreeMem(pv);
}
