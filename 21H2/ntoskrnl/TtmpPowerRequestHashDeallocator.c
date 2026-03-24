/*
 * XREFs of TtmpPowerRequestHashDeallocator @ 0x1408FFE9C
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1408FFB48 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpPowerRequestHashDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x52507454u);
}
