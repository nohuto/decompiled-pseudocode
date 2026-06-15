/*
 * XREFs of sub_180044C00 @ 0x180044C00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180044C50 @ 0x180044C50 (sub_180044C50.c)
 */

void *sub_180044C00()
{
  if ( !byte_18019E3EC )
  {
    sub_180044C50((LPCWSTR)sub_18004CAD0);
    byte_18019E3EC = 1;
  }
  return &unk_18019E7D0;
}
