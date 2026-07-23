/*
 * XREFs of TtmpPowerRequestHashDeallocator @ 0x1408FFFFC
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1408FFCA8 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpPowerRequestHashDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x52507454u);
}
