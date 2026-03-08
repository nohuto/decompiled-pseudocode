/*
 * XREFs of KiIpiStallOnPacketTargetsPrcb @ 0x140237680
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
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403C8140 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403C8170 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiIpiStallOnPacketTargetsPrcb(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax

  v3 = 0;
  while ( 1 )
  {
    result = *(unsigned int *)(a2 + 11648);
    if ( !(_DWORD)result )
      break;
    if ( (++v3 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v3);
    }
    else
    {
      _mm_pause();
    }
  }
  return result;
}
