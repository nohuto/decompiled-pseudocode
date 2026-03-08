/*
 * XREFs of NVMeReservationAcquireCommand @ 0x1C0016CB8
 * Callers:
 *     ScsiPersistentReserveOut @ 0x1C001A220 (ScsiPersistentReserveOut.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 */

__int64 __fastcall NVMeReservationAcquireCommand(__int64 a1, __int64 a2)
{
  __int64 v5; // [rsp+38h] [rbp-8h] BYREF

  GetSrbDataBuffer(a2, &v5);
  v5 = 0LL;
  NVMeAllocateDmaBuffer(a1, 0x10u);
  *(_BYTE *)(a2 + 3) = 38;
  return 3238002691LL;
}
