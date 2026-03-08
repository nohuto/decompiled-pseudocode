/*
 * XREFs of NVMeReservationReleaseCommand @ 0x1C00171E0
 * Callers:
 *     ScsiPersistentReserveOut @ 0x1C001A220 (ScsiPersistentReserveOut.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 */

__int64 __fastcall NVMeReservationReleaseCommand(__int64 a1, __int64 a2)
{
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  GetSrbDataBuffer(a2, v5);
  v5[0] = 0LL;
  NVMeAllocateDmaBuffer(a1, 8u);
  *(_BYTE *)(a2 + 3) = 38;
  return 3238002691LL;
}
