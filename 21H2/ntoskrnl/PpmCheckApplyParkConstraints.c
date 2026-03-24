/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x1403C2048
 * Callers:
 *     PpmCheckInitProcessors @ 0x1407B9B18 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1407BA700 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x1408F92A4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F93A4 (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14037D0D8 (PpmCheckCustomRun.c)
 */

char PpmCheckApplyParkConstraints()
{
  return PpmCheckCustomRun(4);
}
