/*
 * XREFs of NVMeReservationRegisterCommand @ 0x1C001E2EC
 * Callers:
 *     ScsiPersistentReserveOut @ 0x1C0020A04 (ScsiPersistentReserveOut.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 */

__int64 __fastcall NVMeReservationRegisterCommand(__int64 a1, __int64 a2)
{
  NVMeAllocateDmaBuffer(a1, 0x10u);
  *(_BYTE *)(a2 + 3) = 38;
  return 3238002691LL;
}
