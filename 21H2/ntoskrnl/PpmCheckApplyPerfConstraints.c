/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x14077B31C
 * Callers:
 *     PpmRegisterPerfCap @ 0x140392AF0 (PpmRegisterPerfCap.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14037D0D8 (PpmCheckCustomRun.c)
 */

char __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  return PpmCheckCustomRun((a1 != 0) + 1);
}
