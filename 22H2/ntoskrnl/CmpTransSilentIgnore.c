/*
 * XREFs of CmpTransSilentIgnore @ 0x1402D1860
 * Callers:
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

bool CmpTransSilentIgnore()
{
  return CmpMiniNTBoot != 0;
}
