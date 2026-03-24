/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x14077B21C
 * Callers:
 *     PpmRegisterPerfCap @ 0x1403923F0 (PpmRegisterPerfCap.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14037CB48 (PpmCheckCustomRun.c)
 */

char __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  return PpmCheckCustomRun((a1 != 0) + 1);
}
