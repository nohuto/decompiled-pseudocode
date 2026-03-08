/*
 * XREFs of KiIpiSendPacket @ 0x1402376C0
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x1402288B0 (KeQueryTotalCycleTimeThread.c)
 *     KeFlushProcessWriteBuffers @ 0x1402373CC (KeFlushProcessWriteBuffers.c)
 *     KeSynchronizeSecurityDomain @ 0x1402EAE28 (KeSynchronizeSecurityDomain.c)
 *     KeSynchronizeAddressPolicy @ 0x1402F550C (KeSynchronizeAddressPolicy.c)
 *     KeUpdateThreadTag @ 0x1402FB2F0 (KeUpdateThreadTag.c)
 *     KeIpiGenericCall @ 0x140396D40 (KeIpiGenericCall.c)
 *     KiSynchronizeStibpPairing @ 0x1404583F6 (KiSynchronizeStibpPairing.c)
 *     KeFlushRsb @ 0x140571404 (KeFlushRsb.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140A9C260 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiSendRequest @ 0x140233230 (KiIpiSendRequest.c)
 */

__int64 __fastcall KiIpiSendPacket(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+48h] [rbp-10h]

  *((_QWORD *)&v7 + 1) = a5;
  v9 = a3;
  *(_QWORD *)&v7 = a4;
  v8 = a6;
  return KiIpiSendRequest((__int64)KeGetCurrentPrcb(), a1, a2, &v7, 5LL);
}
