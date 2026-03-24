/*
 * XREFs of TtmpPowerRequestHashAllocator @ 0x1408FFE78
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1408FFB48 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall TtmpPowerRequestHashAllocator(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x52507454u);
}
