/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x14038F03C
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x1408261A0 (PpmReapplyPerfPolicy.c)
 *     PpmCheckInitProcessors @ 0x140827DA4 (PpmCheckInitProcessors.c)
 *     PpmParkApplyForcedMask @ 0x140996E54 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140996F54 (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x1402D1B4C (PpmCheckCustomRun.c)
 */

void PpmCheckApplyParkConstraints()
{
  PpmCheckCustomRun(4u);
}
