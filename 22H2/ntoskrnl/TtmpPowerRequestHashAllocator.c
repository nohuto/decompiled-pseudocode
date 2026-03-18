/*
 * XREFs of TtmpPowerRequestHashAllocator @ 0x1409A583C
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1409A5518 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall TtmpPowerRequestHashAllocator(__int64 a1)
{
  return ExAllocatePool2(64LL, a1, 1381004372LL);
}
