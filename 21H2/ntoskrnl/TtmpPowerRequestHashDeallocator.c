/*
 * XREFs of TtmpPowerRequestHashDeallocator @ 0x1409A5A88
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1409A573C (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpPowerRequestHashDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x52507454u);
}
