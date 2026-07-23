/*
 * XREFs of TtmpPowerRequestHashAllocator @ 0x1408FFFD8
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1408FFCA8 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall TtmpPowerRequestHashAllocator(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x52507454u);
}
