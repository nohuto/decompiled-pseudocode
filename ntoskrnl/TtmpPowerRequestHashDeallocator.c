/*
 * XREFs of TtmpPowerRequestHashDeallocator @ 0x1409A27D0
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1409A2488 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpPowerRequestHashDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x52507454u);
}
