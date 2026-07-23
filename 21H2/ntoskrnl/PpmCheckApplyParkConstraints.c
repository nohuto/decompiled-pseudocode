/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x1403C2478
 * Callers:
 *     PpmCheckInitProcessors @ 0x1407BA2A8 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1407BAE90 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x1408F9404 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F9504 (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14037CC28 (PpmCheckCustomRun.c)
 */

char PpmCheckApplyParkConstraints()
{
  return PpmCheckCustomRun(4);
}
