/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x14077B4DC
 * Callers:
 *     PpmRegisterPerfCap @ 0x140392C40 (PpmRegisterPerfCap.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14037CC28 (PpmCheckCustomRun.c)
 */

char __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  return PpmCheckCustomRun((a1 != 0) + 1);
}
