/*
 * XREFs of TtmpPowerRequestHashDeallocator @ 0x1409A5860
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1409A5518 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpPowerRequestHashDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x52507454u);
}
