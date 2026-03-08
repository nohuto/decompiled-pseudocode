/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x14098FE08
 * Callers:
 *     PpmRegisterPerfCap @ 0x14058AF70 (PpmRegisterPerfCap.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x1402D1B4C (PpmCheckCustomRun.c)
 */

void __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  PpmCheckCustomRun((a1 != 0) + 1);
}
