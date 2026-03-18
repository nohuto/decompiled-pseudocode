/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x140992EB8
 * Callers:
 *     PpmRegisterPerfCap @ 0x14058D4A0 (PpmRegisterPerfCap.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14032B45C (PpmCheckCustomRun.c)
 */

void __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  PpmCheckCustomRun((a1 != 0) + 1);
}
