/*
 * XREFs of sub_18000C970 @ 0x18000C970
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000CDD0 @ 0x18000CDD0 (sub_18000CDD0.c)
 */

void *sub_18000C970()
{
  if ( !byte_180218480 )
  {
    sub_18000CDD0((LPCWSTR)sub_18000D6C0);
    byte_180218480 = 1;
  }
  return &unk_180218440;
}
