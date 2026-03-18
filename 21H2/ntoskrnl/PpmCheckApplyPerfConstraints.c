/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x14099786C
 * Callers:
 *     PpmRegisterPerfCap @ 0x1405CF800 (PpmRegisterPerfCap.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14022475C (PpmCheckCustomRun.c)
 */

void __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  PpmCheckCustomRun((a1 != 0) + 1);
}
