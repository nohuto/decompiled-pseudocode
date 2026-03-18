/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x1403914DC
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x14082E210 (PpmReapplyPerfPolicy.c)
 *     PpmCheckInitProcessors @ 0x14082FE14 (PpmCheckInitProcessors.c)
 *     PpmParkApplyForcedMask @ 0x140999F04 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14099A004 (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14032B45C (PpmCheckCustomRun.c)
 */

void PpmCheckApplyParkConstraints()
{
  PpmCheckCustomRun(4u);
}
