/*
 * XREFs of PATHOBJ_vEnumStartClipLines @ 0x1C02D97E0
 * Callers:
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02CD670 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C02D95B8 (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 */

void __stdcall PATHOBJ_vEnumStartClipLines(PATHOBJ *ppo, CLIPOBJ *pco, SURFOBJ *pso, LINEATTRS *pla)
{
  XCLIPOBJ::vEnumPathStart(
    (XCLIPOBJ *)pco,
    ppo,
    (struct SURFACE *)((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)),
    pla);
}
