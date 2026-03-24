/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x1403C1CA8
 * Callers:
 *     PpmCheckInitProcessors @ 0x1407BA2D8 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1407BAEC0 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x1408F92F4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F93F4 (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14037CB48 (PpmCheckCustomRun.c)
 */

char PpmCheckApplyParkConstraints()
{
  return PpmCheckCustomRun(4);
}
