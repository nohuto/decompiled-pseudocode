/*
 * XREFs of NVMeReservationAcquireCommand @ 0x1C0016D28
 * Callers:
 *     ScsiPersistentReserveOut @ 0x1C001A290 (ScsiPersistentReserveOut.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001E60 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0002298 (GetSrbExtension.c)
 *     GetSrbDataBuffer @ 0x1C0007C0C (GetSrbDataBuffer.c)
 *     NVMeZeroMemory @ 0x1C00092D8 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C26C (NVMeAllocateDmaBuffer.c)
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
