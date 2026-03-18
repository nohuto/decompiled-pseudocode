/*
 * XREFs of CmpTransSilentIgnore @ 0x1402314C0
 * Callers:
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

bool CmpTransSilentIgnore()
{
  return CmpMiniNTBoot != 0;
}
