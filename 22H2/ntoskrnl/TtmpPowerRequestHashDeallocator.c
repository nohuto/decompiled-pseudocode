/*
 * XREFs of TtmpPowerRequestHashDeallocator @ 0x1408FFEEC
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1408FFB98 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpPowerRequestHashDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x52507454u);
}
