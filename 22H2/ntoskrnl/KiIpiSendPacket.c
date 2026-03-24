/*
 * XREFs of KiIpiSendPacket @ 0x140343E58
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14022E860 (KeQueryTotalCycleTimeThread.c)
 *     KeSynchronizeSecurityDomain @ 0x1403154EC (KeSynchronizeSecurityDomain.c)
 *     KeSynchronizeAddressPolicy @ 0x14031B76C (KeSynchronizeAddressPolicy.c)
 *     KeFlushProcessWriteBuffers @ 0x140343D14 (KeFlushProcessWriteBuffers.c)
 *     KeUpdateThreadTag @ 0x14036B8A0 (KeUpdateThreadTag.c)
 *     KeIpiGenericCall @ 0x1403A4420 (KeIpiGenericCall.c)
 *     KeFlushRsb @ 0x14051B158 (KeFlushRsb.c)
 *     KiSynchronizeStibpPairing @ 0x14051B618 (KiSynchronizeStibpPairing.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409AF4D0 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiSendRequest @ 0x140343EE0 (KiIpiSendRequest.c)
 */

__int64 __fastcall KiIpiSendPacket(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  v7[1] = a5;
  v7[3] = a3;
  v7[0] = a4;
  v7[2] = a6;
  return KiIpiSendRequest((unsigned int)KeGetCurrentPrcb(), a1, a2, (unsigned int)v7, 5LL);
}
